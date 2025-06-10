#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    static constexpr int INF = 1e9;

private:
    int calcCost(const string& w1, const string& w2, int l, int r) {

        auto opsNoReverse = mismatchCost(w1, w2, 1, r, false);
        auto opsWithRev = mismatchCost(w1, w2, 1, r, true) + 1;
        return min(opsNoReverse, opsWithRev);
    }

    int mismatchCost(const string& w1, const string& w2, int l, int r,
                     bool rev) {

        int cnt[26][26] = {};
        int mismatch = 0;
        for (int k = 0; k <= r - l; ++k) {
            char a = rev ? w1[r - k] : w1[l + k];
            char b = w2[l + k];
            if (a == b) {
                continue;
            }
            ++cnt[a - 'a'][b - 'a'];
            ++mismatch;
        }
        int swaps = 0;
        for (int x = 0; x < 26; ++x)
            for (int y = x + 1; y < 26; ++y) {
                int t = min(cnt[x][y], cnt[y][x]);
                swaps += t;
                cnt[x][y] -= t;
                cnt[y][x] -= t;
            }

        int residual = mismatch - 2 * swaps;

        return swaps + residual;
    }

public:
    int minOperations(string word1, string word2) {
        vector<char> tv(word1.begin(), word1.end());
        int n = word1.size();
        vector<vector<int>> cost(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                cost[i][j] = calcCost(word1, word2, i, j);
            }
        }
        vector<int> dp(n + 1, INF);
        dp[n] = 0;
        for (int i = n - 1; i >= 0; --i) {
            int best = INF;
            for (int j = i; j < n; ++j) {
                best = min(best, cost[i][j] + dp[j + 1]);
                dp[i] = best;
            }
        }
        return dp[0];
    }
};