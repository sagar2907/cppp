#include <iostream>
#include <cstdlib>
#include <ctime>
#include<math.h>

using namespace std;
int main(){
    int n;
    cin>> n;
    int ans = 0, ans2 = 0;
    int place = 1;
    int reverse = 0;
    int umm;
    int j = 0;

    while (n != 0 )
    {
        int bit = n & 1;
        ans = (bit * place) + ans ;
        if (bit == 1)
        {
           umm = 0; 
        }
        else{
            umm = 1;
        }

        reverse = (umm * place) + reverse;
        
        n = n >> 1;
        place = place * 10;
    }

    while (reverse != 0)
    {
       int digit = reverse % 10;
       
       if (digit == 1){
        ans2 = ans2 + pow(2,j);
        

       }
       j++;
       reverse = reverse / 10;
    }
    
    cout << ans2;

}
int mergesortedarr(int arr[], int brr[], int n , int m){
    
    int l=n+m-1;
    int crr[l];
    int i = 0;
    int j=0;
    int k =0;
    while(k < m+n){
    if(arr[i] <= brr[j] ){
        crr[k] = arr[i];
        k++;
        i++;
        if(i == n){
        for(j;j<n;j++){
                crr[k] = arr[j];
                k++;
            }
        break;}
    }
    else{
        crr[k]  = brr[j];
        j++;
        k++;
        if(j == m){
            for(i;i<n;i++){
                crr[k] = arr[i];
                k++;
            }
            break;
        }
    }


    }
    for(int i=0;i<k;i++){
        cout << crr[i]<<" ";
    }

}