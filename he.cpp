#include <iostream>
#include <cstdlib>
#include <ctime>
#include<math.h>
#include<array>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<algorithm>
#include<map>
#include<cstring>
using namespace std;
//a,97,z,122,A,65,Z,90,0,48,9,57
/* pointers and array
    vector<vector<int>> crr = {{1,2,3},{4,5,6},{7,8,9}};
    int i=10;
    cout<<&i<<endl;
    int* p = &i;
    int &j = i;
    cout<< &j <<endl;
    cout<<*p;
    int **q= &p;
    int ***r=&q;
    cout<<q<<endl;
    cout<<***r;
    int m,n;
    cin>>n>>m;
    int **arr = new int* [n];
    for(int i=0;i<n;i++){
        arr[i] = new int[m];
    }
    cout << arr[0][0]<<endl;
    cout << arr[0][1]<<endl;
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;

    int d[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int a[3]={1,2,3};
    int b[3]={1,2,3};
    vector<vector<int>> arr;
    arr.push_back({1,2,3,4});
    arr.push_back({5,6,7,8});
    arr.push_back({9,10,11,12});
    arr.push_back({13,14,15,16});
    vector<int> drr;
    drr.push_back(1);
    drr.push_back(2);
    drr.push_back(3);
    */
   /*
class stack{
    public:
    int top;
    int size;
    int* arr;

    stack(int size){
        this->size=size;
        this-> arr = new int[size];
        this->top=-1;
    }
    void push(int element ){
        if(top-size>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack is full"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is already empty"<<endl;
        }
    }

    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty";
        }
    }

};
*/

int unique(int arr[], int n){
    int ans=0;
    for(int j=0;j<n;j++){
       ans = ans^arr[j];
    }
    return ans;
}
int dupli(int arr[], int n){
    for(int j=0; j<n; j++){
        for(int i=j+1; i<n; i++){
            if(arr[j] == arr[i]){
                return arr[j];
            }
        }
    }
    return -1; // Return -1 if no duplicate is found
}
int common(int arr[], int brr[], int n, int m){
    int crr[100];
    int k=0;
    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
            if(arr[j] == brr[i]){
               crr[k] = arr[j] ;
               k++;
               //break; // Avoid duplicates in crr if arr[j] matches multiple brr[i]
            }
        }
    }
    // Print common elements
    cout << "Common elements: ";
    for(int i=0; i<k; i++){
        cout << crr[i] << " ";
    }

}
int pairsum(int arr[], int n, int s){
    for(int j=0;j<n;j++){
        for(int i=j+1;i<n;i++){
            if((arr[j] + arr[i]) == s){
                cout<< "pair: "<< arr[j]<<" "<<arr[i]<<endl;
            }
        }
    }
}
int tripletsum(int arr[], int n, int s){
    for(int j=0;j<n;j++){
        for(int i=j+1;i<n;i++){
        for(int k=i+1;k<n;k++){
            if((arr[j] + arr[i] + arr[k]) == s){
                cout<< "triplet: "<< arr[j]<<" "<<arr[i] <<arr[k]<<endl;
            }
        }
        
        /*abhijeet dina
        
        swarachis
        gokul dipesh
        onfinancea*/


        }
    }
}
int binarysearch(int arr[],int n ,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            s= mid + 1;
        }
        else{
            e = mid -1;
        }
        mid = (s+e)/2;
    }
    return -1;
}
int firstoccurance(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s +(e-s)/2;
    int ans = 0;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    if( arr[ans] == key){
        return ans;
    }
    return -1;
}
int lastoccurance(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s +(e-s)/2;
    int ans = 0;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    if( arr[ans] == key){
        return ans;
    }
    return -1;
}
int peakindex(int arr[], int n){
    int s = 0;
    int e = n - 1;
    while (s < e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}
int pivot(int arr[], int n, int key){
    
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;
    while(s<e){
    if(arr[mid] > arr[s]){
        s = mid +1;
    }
    else{
        e = mid;
    }
    mid = s + (e-s)/2;
    }
    int s2= s;
    int e2 = n-1;
    int mid2 = s2 + (e2-s2)/2;
    int e3= n-1;
    if(key >= arr[s] && key <= arr[e2] ){
        while(s2<=e2){
            if(key == arr[mid2]){
                return mid2;
            }
            else if(key > arr[mid2]){
                s2 = mid2 + 1;
            }
            else{
                e2 = mid2 - 1;
            }

            int mid2 = s2 + (e2-s2)/2;
        }
    }
    else if(key >= arr[s] && key >= arr[e3] ){
    int s4= 0;
    int e4 = s-1;
    int mid3 = s4 + (e4-s4)/2;
    while(s4<=e4){
            if(key == arr[mid3]){
                return mid3;
            }
            else if(key > arr[mid3]){
                s4 = mid3 + 1;
            }
            else{
                e4 = mid3 - 1;
            }

            int mid3 = s4 + (e4-s4)/2;
        }
    }
    else {return -1;}
    } 
int sqrrootsearch(int arr[], int key){
    int s= 0;
    int e= 100-1;
    int mid = s + (e-s)/2;
    while (s<e){
        if((arr[mid] * arr[mid]) <= key && (arr[mid + 1] * arr[mid + 1]) >= key ){
            return arr[mid] / 1;
            }
        else if ((arr[mid] * arr[mid]) > key ){
            e = mid - 1;
        }
        else{
            s = mid;
        }
        mid = s + (e-s)/2;

    }
    return -1;
}
int bookallo(int arr[], int n, int k){
    int s= 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int sum=0;
    int ans = -1;
    

    while(s<=e){
        if(mid == (n-k)){
            ans = mid;
            break;
        }
        else if(mid < (n-k)){
            s= mid+1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;

    }
    for(int i=0;i <= mid;i++){
        sum = arr[i] + sum;
    }
    return sum;
}
int selectionsort(int arr[],int n){
    for(int i = 0; i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if( arr[min] > arr[j])
            min = j;
        }
        swap( arr[min],arr[i]);
    }
}
int bubblesort(int arr[], int n){
    for(int i = 0; i<n-1;i++){
        for(int j = 0; j < n - 1; j++){
            if( arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int insertionsort(int arr[], int n) {  
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    return 0;
}
int digsum(vector<int> arr){
    for(int i = 0; i<arr.size();i++){
        int sum = 0;
        while(arr[i] != 0){
            
            int digit = arr[i] % 10;
            sum = sum + digit;
            arr[i] = arr[i] / 10;

        }
        if( sum == i){
            return i;
            break;
        }

    }
    return -1;
}
int mergesortedarr(int arr[], int brr[], int n , int m){

    int crr[n+m-1];
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
int movezeroes(int arr[],int n){
    int brr[n] = {0} ;
    int j=0;
    for(int i =0;i<n;i++){
        if(arr[i] != 0){
            brr[j] = arr[i];
            j++;
        }
    }
    for(int i =0;i<n;i++){
        cout<<brr[i]<<" ";
    }

}
int rotatearr(vector<int> arr, int k){
    
    int n = arr.size();
    int brr[n] = {0};
    int j=0;
    for(int i=(n-k);i<n;i++){
        brr[j] = arr[i];
        j++;
    }
    int i=0;
    for(j;j<n;j++){
        brr[j] = arr[i];
        i++;
    }
    for(int l=0;l<n;l++){
        cout<<brr[l]<<" ";
    }
}
int ifsortedrotated(vector<int> arr){
    int n= arr.size();
        int i=0;
        while(i<n){
            if(arr[i]>arr[i+1]){
                i++;
                break;
            }
            i++;
        }
        while(i<n){
            if(arr[i] > arr[i+1]){
                break;
            }
            i++;
        }
        if(i == n){
            return true;
        }
        else{
            return false;
        }
}
int sumoftwoarr(vector<int> arr,vector<int> brr, int n, int m){
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for(int i=0;i<n;i++){
        sum1 = (arr[i] * pow(10,(n-i-1))) + sum1;
    }
    for(int i=0;i<m;i++){
        sum2 = (brr[i] * pow(10,(m-i-1))) + sum2;
    }
    sum3 = sum1 + sum2;
    cout<<sum3<< endl;
    
    vector<int> sum;
    while( sum3 !=0){
        int digit = sum3 % 10;
        sum.push_back(digit);
        sum3 = sum3/10;
    }
    int si = sum.size();
    cout<< si << endl;
    int s = 0;
    int e = si-1;
    while(s<=e){
        swap(sum[s],sum[e]);
        s++;
        e--;
    }
    for (int i = 0; i < si; i++)
    {
        cout<< sum[i]<< " ";
    }
    


}
int sentancepalindrome(string arr){

    
    vector<char> brr;
    int j=0;
    
    for(int i =0;i<arr.size();i++){
        if(arr[i] >=65 && arr[i] <=90){
            brr.push_back(arr[i]);
            j++;
        }
        else if(arr[i] >=97 && arr[i] <=122){
            brr.push_back(arr[i]);
            j++;
        }
        else if(arr[i] >=48 && arr[i] <=57){
            brr.push_back(arr[i]);
            j++;
        }
    }
    for(int i=0;i<brr.size();i++){
        if(brr[i]>=65 && brr[i]<=90){
            brr[i] = brr[i] + 32;
        }
    }
    
    int s=0;
    int e=brr.size()-1;
    while(s<=e){
        if(brr[s] != brr[e]){
            return 0;
            break;
        }
        s++;
        e--;
    }
    return 1;

}
int stringpalindrome(vector<char> arr){
    vector<char> brr;
    int j=0;
    for(int i =0;i<arr.size();i++){
        if(arr[i] >=65 && arr[i] <=90){
            brr.push_back(arr[i]);
            j++;
        }
        else if(arr[i] >=97 && arr[i] <=112){
            brr.push_back(arr[i]);
            j++;
        }
        else if(arr[i] >=48 && arr[i] <=57){
            brr.push_back(arr[i]);
            j++;
        }
    }
    for(int i=0;i<brr.size();i++){
        if(brr[i]>=65 && brr[i]<90){
            brr[i] = brr[i] + 32;
        }
    }
    int s=0;
    int e=brr.size()-1;
    while(s<=e){
        if(brr[s] != brr[e]){
            return 0;
            break;
        }
        s++;
        e--;
    }
    return 1;

}
string reversestring(string a){
    string b;
    for(int i = (a.size()-1);i>=0;i--){
        b.push_back(a[i]);
    }
    return b;

}
string reversewordsinstring(string st){
    string ts;
    string temp1;
    for(int i = (st.length()-1);i>=0;i--){
        temp1 = "";
        while(st[i] != ' ' && i >=0){
            temp1.push_back(st[i]);
            i--;
        }

        string temp2 = reversestring(temp1);
        for(int j =0; j<temp2.length();j++){
            ts.push_back(temp2[j]);
        }
        temp2 = "";
        ts.push_back(' ');

    }

    return ts;

}
int sinwave(int arr[3][3] ){
        int row=0;
    for(int col = 0;col<3;col++){
        if(row ==0){
            for(int j=0;j<3;j++){
                cout<< arr[j][col]<<" ";
            }
            row=2;
            }
        else{
            for(int j=2;j>=0;j--){
                cout<< arr[j][col]<<" ";
            }
            row=0;
        }
    }

}
vector<int> spiral(int arr[3][3]){
   int count=0;
   int total=3*3;
   vector<int> brr;
   
   int sr = 0;
   int er = 2;
   int sc = 0;
   int ec = 2;
   while(count<total){
    for(int i = sc; i<=ec && count<total;i++){
        brr.push_back(arr[sr][i]);
        count++;
        
    }
    sr++;
    for(int i = sr; i<=er && count<total;i++){
        brr.push_back(arr[i][ec]);
        count++;
        
    }
    ec--;
    for(int i = ec; i>=sc && count<total;i--){
        brr.push_back(arr[er][i]);
        count++;
        
    }
    er--;
    for(int i = er; i>=sr && count<total;i--){
        brr.push_back(arr[i][sc]);
        count++;
        
    }
    sc++;

   }
   
   return brr;
}
int rotate2d(vector<vector<int>>& arr){
    //for row>2
    int row=arr.size();
    int col=arr[0].size();
    if(row==1||row==2){
    int sr = 0;
    int er = row-1;
    int sc = 0;
    int ec = col-1;
    swap(arr[sr][sc],arr[sr][ec]);
    swap(arr[sr][sc],arr[er][ec]);
    swap(arr[sr][sc],arr[er][sc]);
    }
    if(row>2){
    int count=0;
    int total=row*col;
    int sr = 0;
    int er = row-1;
    int sc = 0;
    int ec = col-1;
    while(count<total-row){
    int j=sr;
    for(int i=sc;i<ec && count<total-row;i++){
        swap(arr[sr][i],arr[j][ec]);
        j++;
        count++;
    }
    j=ec;
    for(int i=sc;i<ec && count<total-row;i++){
        swap(arr[sr][i],arr[er][j]);
        j--;
        count++;
    }
    j=er;
    for(int i=sc;i<ec && count<total-row;i++){        
        swap(arr[sr][i],arr[j][sc]);
        j--;
        count++;
    }
    sr++;
    sc++;
    er--;
    ec--;
}
}   
}
bool searchinsorted2d(vector<vector<int>> arr, int key){
    int row=arr.size();
    int col = arr[0].size();
    int s=0;
    int e= row*col-1;
    int mid= s + (e-s)/2;
    while(s<e){
        int element = arr[mid/col][mid%col];
        if(element == key){
            return 1;
        }
        else if ( element > key){
            e = mid -1;
        }
        else{
            s= mid +1;
        }
        mid= s + (e-s)/2;
    }
    return 0;
}
bool searchin2d(vector<vector<int>> arr, int key){
    int row=arr.size();
    int col = arr[0].size();
    
    int rowi=0;
    int coli = col - 1;
    while(rowi<row && col >=0){
        int element=arr[rowi][coli];
        if(element == key)
        return 1;
        else if(element > key)
        coli--;
        else
        rowi++;
    }
    return 0;
}
int countprime(int n){
    //time limit exceeds
    int count = 0;
    int j=3;
    while(j<n){
    bool k = 1;
    for(int i=2; i<j ;i++){
        if(j%i == 0){
            k = 0;

        }
    }
    
    if(k){
        count++;
    }
    j++;
    
}
    if(n>2){
    count++;
    }
    return count;
}
int seive(int n){
    vector<int> arr;
    for(int i = 2;i<n;i++){
        arr.push_back(i);
    }
    for(int i = 0;i<arr.size();i++){
        for(int j = i+1;j<arr.size();j++){
            if(arr[j]%arr[i] == 0){
                arr.erase(arr.begin()+j);
            }

        }
    }
    cout<< arr.size();


}
int seive2(int n){
    vector<int> arr(n+1,0);
    int count=0;
    for(int i = 2;i<n;i++){
        if(arr[i] == 0){
        count++;
        for(int j=2*i;j<n;j=j+i){
            arr[j] = 1;
        }
    }

    }
    cout<<count;


}
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a != b){
        if(a>b)
        a = a-b;
        else
        b = b-a;
    }
    return a;
}
int powerrecursion(int a,int b){
    int ans = 1;
    if(b != 0){
    ans = a * powerrecursion(a,b-1);}
    return ans;
}
int factorialrecursion(int a){
    int ans = 1;
    if(a != 0){
    ans = a * factorialrecursion(a-1);}
    return ans;
}
int countingrecursion(int a,int b){
    if(b!=0){
        cout << a++ << " ";
        countingrecursion(a,b-1);
    }
}
int fibonacci(int a){
    if(a==0){
    return 0;
    }
    if(a==1){
    return 1;
    }
    return fibonacci(a-1) + fibonacci(a-2);
    
    
}
int stairsteps(int a){
    if(a ==0 ){
        return 1;
    }
    if (a < 0){
        return 0;
    }
    int* ans = new int;
    *ans = stairsteps(a-1) + stairsteps(a-2);
    return *ans;
    delete ans;
}
bool issorted(int arr[], int n){
    if(n == 0 || n==1){
        return 1;
    }
    if(arr[0] > arr[1]){
        return 0;
    }
    else{
        bool next = issorted(arr+1,n-1);
        return next;
    }
}
int recursionsum(int arr[], int n){
    if(n == 0){
        return 0;
    }
    int sum = arr[0] + recursionsum(arr+1,n-1);
    return sum;
}
bool recursionsearch(int arr[],int n,int k){
    if(n == 0){
        return 0;
    }
    if(arr[0] == k || recursionsearch(arr+1,n-1,k)){
        return 1;
    }
}
bool binaryRecurion(int arr[], int n,int k){
    if(n == 0){
        return 0;
    }
    int s=0;
    int e= n-1;
    int mid = s +(e-s)/2;
    if(arr[mid] == k){
        return 1;
    }
    if(arr[mid] > k){
        return binaryRecurion(arr,n/2,k);
    }
    if(arr[mid]< k){
        return binaryRecurion(arr+mid+1,n/2,k);
    }
}
string reversestirngR(string a,int n){
    if(n==0){
        return "";
    }
    cout<<a[n-1];
    return reversestirngR(a,n-1);
}
bool palindromeR(string a,int& i,int& j){
    if(i>j){
        return 1;
    }
    if(a[i] == a[j]){
    i++;
    j--;
    return palindromeR(a,i,j);
    }
}
void mergepath(int *arr,int s,int e){
    int mid= s+(e-s)/2;
    int* arr1 = new int[mid-s+1];
    int* arr2 = new int[e-mid];

    int mainstart = s;
    for(int i = 0;i<mid-s+1;i++){
        arr1[i] = arr[mainstart++];
    }
    mainstart = mid +1;
    for(int i = 0;i<e-mid;i++){
        arr2[i]=arr[mainstart++];
    }
    
    int first1=0;
    int first2=0;
    mainstart = s;
    while(first1<mid-s+1 && first2<e-mid){
        if(arr1[first1] < arr2[first2] ){
            arr[mainstart++] = arr1[first1++];
        }
        else{
            arr[mainstart++] = arr2[first2++];
        }
    }
    while(first2<e-mid){
        arr[mainstart++] = arr2[first2++];
    }
    while(first1<mid-s+1){
        arr[mainstart++] = arr1[first1++];
    }
    delete []arr1;
    delete []arr2;
}
void mergesort(int* arr,int s,int e){
    int mid = s +(e-s)/2;
    if(s==e){
        return;
    }
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    mergepath(arr,s,e);
}
void quicksort(int arr[],int crr[],int s,int e){
    int count = 0;
    if(s > e){
        return;
    }
    for(int i = 0; i<=e;i++){
        if(arr[s] > arr[i]){
            count++;
        }
        if(arr[s] == arr[i] && s>i){
            count++;
        }
    }
    quicksort(arr,crr,s+1,e);
    crr[count] = arr[s];
    if(s == 0){
    for(int i = 0;i<11;i++){
        cout<<crr[i]<<" ";
    }
}
}
void quicksort2(int* arr, int s, int e){
    int count = s;
    if(s>=e){
        return;
    }
    for(int i = s;i<=e;i++){
        if(arr[s] > arr[i]){
            count++;
        }
        if(arr[s] == arr[i] && s>i){
            count++;
        }
    }
    swap(arr[s],arr[count]);
    while(s<count && e>count){
    if(arr[s]> arr[count] && arr[count]>arr[e]){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    if(arr[s]> arr[count] && arr[count]<arr[e]){
        e--;
    }
    if(arr[s]< arr[count] && arr[count]>arr[e]){
        s++;
    }
    }
    quicksort2(arr,s,count-1);
    quicksort2(arr,count+1,e);

}
void sub(vector<vector<int>>& brr,vector<int> arr,vector<int> output,int index ){
    if(index == arr.size()){
        brr.push_back(output);
        return;
    }
    sub(brr,arr,output,index+1);
    output.push_back(arr[index]);
    //brr.push_back(output);
    sub(brr,arr,output,index+1);

}
void subsets(vector<int> arr){
    vector<vector<int>> brr;
    vector<int> output;
    int index = 0;
    sub(brr,arr,output,index);
    int row= brr.size();
    for(int i=0;i<row;i++){
        int col=brr[i].size();
        for(int j=0;j<col;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int leet2894(int n,int m){
    int sumn=0;
    int summ=0;
    for(int i=1;i<=n;i++){
        if(i%m != 0){
            sumn = i + sumn;
        }
    }
    for(int i=1;i<=n;i++){
        if(i%m == 0){
            summ = i + summ;
        }
    }
    return sumn-summ;

}
void substring(vector<vector<char>>& brr,vector<char> arr,vector<char> output,int index ){
    if(index == arr.size()){
        brr.push_back(output);
        return;
    }
    substring(brr,arr,output,index+1);
    output.push_back(arr[index]);
    //brr.push_back(output);
    substring(brr,arr,output,index+1);

}
vector<string> subsequenceofstring(string s){
    vector<char> arr;
    for(int i= 0; i<s.size();i++){
        arr.push_back(s[i]);
    }
    vector<vector<char>> brr;
    vector<char> output;
    int index = 0;
    substring(brr,arr,output,index);
    int row= brr.size();
    for(int i=0;i<row;i++){
        int col=brr[i].size();
        for(int j=0;j<col;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
void keypadbase(vector<string>& arr,string output, string s, int n){
    if(n>=s.size()){
        arr.push_back(output);
        return;
    }
    vector<string> data = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    int dig=s[n]-48-2;
    for(int i=0;i<data[dig].size();i++){
    output.push_back(data[dig][i]);
    keypadbase(arr,output,s,n+1);
    output.pop_back();
    }
    //arr.push_back(output);
    
}
void keypad(string s){
    int n=0;
    vector<string> arr;
    string output;
    keypadbase(arr,output,s,n);
    int row= arr.size();
    for(int i=0;i<row;i++){
        int col=arr[i].size();
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
void permutationbase(vector<string>& arr,string output,string s,int n){
    if(n>=s.size()){
        arr.push_back(output);
        return;
    }
    for(int i=n;i<s.size();i++){
        swap(s[n],s[i]);
        output.push_back(s[n]);
        permutationbase(arr,output,s,n+1);
        output.pop_back();
    }


}
void permutationString(string s){
    int n=0;
    vector<string> arr;
    string output;
    permutationbase(arr,output,s,n);
    int row= arr.size();
    for(int i=0;i<row;i++){
        int col=arr[i].size();
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
void mazesolve(vector<vector<int>> arr,vector<vector<int>> brr,vector<string>& ans,string output,int i,int j,int n,int m){
    brr[0][0]=0;
    if(i < 0 || i > n-1 || j < 0 || j > m-1 || arr[i][j] == 0 || brr[i][j] == 1){
        return;
    }
    brr[i][j]=1;
    if(i==n-1 && j==m-1){
        ans.push_back(output);
        return;
    }

    if(i<n-1 && brr[i+1][j] == 0 && arr[i+1][j]==1 ){
        
        output.push_back('D');
        mazesolve(arr,brr,ans,output,i+1,j,n,m);
        output.pop_back();
     
    }
    if(j<m-1 && brr[i][j+1] == 0 && arr[i][j+1]==1){
       
        output.push_back('R');
        mazesolve(arr,brr,ans,output,i,j+1,n,m);
        output.pop_back();
    
    }
    if(i>0 && brr[i-1][j] == 0 && arr[i-1][j]==1){
        
        output.push_back('U');
        mazesolve(arr,brr,ans,output,i-1,j,n,m);
        output.pop_back();
       

    }
    if(j>0 && brr[i][j-1] == 0 && arr[i][j-1]==1 ){
        
        output.push_back('L');
        mazesolve(arr,brr,ans,output,i,j-1,n,m);
        output.pop_back();
        
    }
    
    brr[i][j]=0;
    
}
void ratmaze(vector<vector<int>> arr,int n,int m){
    if(arr[0][0] == 0 || arr[n-1][m-1] == 0) {
        cout << 0 << endl;
        return;
    }

    vector<vector<int>> brr(n, vector<int>(m, 0));
    int i=0;
    int j=0;
    string output ="";
    vector<string> ans;
    mazesolve(arr,brr,ans,output,i,j,n,m);
    int row=ans.size();
    for(int k=0;k<row;k++){
        cout<<ans[k]<<endl;
    }

}
void firstMprimes(int m){
    vector<int> primes;
    
    int a = m;
    bool devide;
    int j=2;
    int i=0;
    while(i<a){
        for(int k=2;k<j;k++){
            if(j==2){
                primes.push_back(2);
                a++;
                i++;
                break;
            }
            else if(j%k==0){
                devide = false;
                break;
            }
            else{
            devide = true;
            }
        }
        if(devide){
            primes.push_back(j);
            j++;
            i++;
        }
        else{
        j++;
        }

    }
    for(int k=0;k<primes.size();k++){
        cout<<primes[k]<<" ";
    }
}
void solveNandM(vector<int> arr, vector<int>& output,int n,int m){
    if(n==0 ){
        return;
    }
    if(n == 1){
        output.push_back(1);
        return;
    }
    bool call=true;
    for(int i =1;i<=m;i++){
        if(call){
            
        if(n>=arr[m-1] && ((n-arr[m-1])>=arr[m-1-i] || n-arr[m-1] >= 1|| n-arr[m-1] == 0)){
            n=n-arr[m-1];
            output.push_back(arr[m-1]);
            solveNandM(arr,output,n,m);
            break;
        }
        else if(n<arr[m-1]){
            call = false;

        }
    }
    
        else{
            solveNandM(arr,output,n,m-1);
            break;
        }
    }
}
void NandM(int n,int m){
    vector<int> output;
    vector<int> primes;
    int a = m;
    bool devide;
    int j=2;
    int i=0;
    while(i<a){
        for(int k=2;k<j;k++){
            if(j==2){
                primes.push_back(2);
                a++;
                i++;
                break;
            }
            else if(j%k==0){
                devide = false;
                break;
            }
            else{
            devide = true;
            }
        }
        if(devide){
            primes.push_back(j);
            j++;
            i++;
        }
        else{
        j++;
        }

    }
    solveNandM(primes,output,n,m);
    if(output[output.size()-1] == 1){
        cout<<"Not possible";
    }
    else{
    for(int k=0;k<output.size();k++){
        cout<<output[k]<<" ";
    }
}
}
int atoi(string s){
        int size = s.size();
        int ans = 0;
        int pos = 1;
        int i = 0;
        while (i < size && s[i] == ' ') i++;
        if (i < size && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') pos = -1;
            i++;
        }

        while(i<size && (s[i]>='0' && s[i]<='9')){
            if(ans > (INT32_MAX-(s[i]-'0'))/10){
                return pos==1 ? INT32_MAX : INT32_MIN;
            }
            ans = (ans*10) + (s[i]-'0');    
            i++;
        }
        return ans*pos;
}
int findpivot(vector<int> arr){
    //1,2,3,4
    //4,3,2,1
    //1,2,3,4,3,2
    //1,2,3,3,3,4,3,2
    //1,2,3,4,4,4,3,2,1
    if(arr.size()==0){
        return 0;
    }
    if(arr.size()==1){
        return 0;
    }
    if(arr.size()==2){
        if(arr[0]>arr[1]){
            return 0;
        }
        if(arr[0]<arr[1]){
            return 1;
        }

    }
    int i=0;
    int j=1;
    while(j<arr.size())
    if(arr[i]==arr[j]){
        while(arr[i]==arr[j] && j<arr.size()-1){
            j++;
        }
        if(arr[i]>arr[j]){
            return i;
        }
        else if (arr[i]<arr[j] && j==arr.size()-1){
            return j;
        }
        else{
            i=j-1;
        }
    }
    if(arr[i]>arr[j]){
        return i;
    }
    if(arr[i]<arr[j]){
    while(arr[i]<arr[j] && j<arr.size()){
        i++;
        j++;
    }
    if(arr[i]!=arr[j]){
        return i;
    }
}
}
class Node{
    public:
    int data;
    Node *node;
    Node(int data){
        this->data = data;
    }
    /* Node* n1=new Node(10);
    Node*head=n1;
    Node*tail=n1;
    newnodet(tail,20);
    newnodet(tail,30);
    insertnode(head,tail,15,4);
    printnode(head);
    cout<<endl;
    deletenode(head,tail,4);
    printnode(head);
    cout<<endl;
    cout<<tail->node;*/

};
void newnodeh(Node* &head,int data){
    Node* temp= new Node(data);
    temp->node = head;
    head = temp;
    head->node=NULL;
}
void newnodet(Node* &tail,int data){
    Node* temp= new Node(data);
    tail->node = temp;
    tail=temp;
    tail->node=NULL;
}
void insertnode(Node* &head,Node* &tail,int data,int n){
    if(n==1){
        Node* temp= new Node(data);
        temp->node=head;
        head=temp;
        return;
    }
    Node* tempi= head;
    int i=2;
    while(i<n){
        tempi = tempi->node;    
        i++;
    }
    Node* temp= new Node(data);
    temp->node=tempi->node;
    tempi->node=temp;
    if(temp->node == NULL){
        tail=temp;
    }
}
void deletenode(Node* &head,Node* &tail,int n){
    if(n==1){
        head=head->node;
        return;
    }
    int position=2;
    Node* temp1=head;
    Node* temp2=head->node;
    while(position<n){
        temp1=temp1->node;
        temp2=temp2->node;
        position++;
    }
    temp1->node=temp2->node;
    if(temp2->node == NULL){
        tail=temp1;
    }
}
void printnode(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->node;
    }
}
void reversenode(Node* &head,Node* curr,Node* &prev){
    if(curr==NULL){
        head=prev;
        return;

    }
    Node* forward=curr->node;
    reversenode(head,forward,curr);
    curr->node=prev;
}
Node* middlenode(Node* &head,Node* &tail){
    int count=0;
    Node* curr=head;
    while(curr!=NULL){
        curr=curr->node;
        count++;
    }
    int mid=count/2+1;
    count=0;
    curr=head;
    while(count<mid){
        curr=curr->node;
        count++;
    }
    return curr;

}
Node* reverseinL(Node* &head,int k){

}
Node* loopinlist(Node* &head){
    Node* checker=head;
    Node* finder=head->node;
    bool done=0;
    map<Node*,bool> visitedF;
    map<Node*,bool> visitedC;
    visitedC[checker]=0;
    while(done==0){
    visitedF[finder]=0;

    while(visitedF[finder]==0 || done == 0){
    if(checker->node != finder->node){
        visitedF[finder]=1;
        finder=finder->node;
    }
    else{
        done=1;
        break;
    }
    }
    if(done==1){
        break;
    }
    visitedC[checker]=1;
    finder=checker->node->node;
    checker=checker->node;
    visitedF.clear();
}
}
Node* floyeddetect(Node* &head){
    Node* one=head;
    Node* two = head;
    while(two!=NULL && one!=NULL){
        if(head==NULL){
            return NULL;
        }
        two = two->node;
        if(two!=NULL){
            two=two->node;
        }
        if(two==one){
            break;
        }
        one = one->node;
        
    }
    one=head;
    while(one->node!=two->node){
        one=one->node;
        two=two->node;
    }
    one=one->node;
    Node* start=head;
    head=two;
    head->node=NULL;
    head=start;
    return one;
}
void duplinode(Node* &head){
    if(head==NULL && head->node==NULL){
        return;
    }
    Node* curr=head;
    Node* next=head->node;
    while(next!=NULL){
    if(curr->data == next->data){
        curr->node=next->node;
        next=next->node;
    }
    else{
        next=next->node;
    }
}
duplinode(head->node);
}
void sort012(Node* &head){
    if(head==NULL){
        return;
    }
    Node* curr=head;
    Node* nex=head->node;
    while(nex!=NULL){
        if(curr->data!=0 && nex->data==0){
            int temp;
            temp=curr->data;
            curr->data=nex->data;
            nex->data=temp;
            curr=curr->node;
            nex=nex->node;
        }
        else if(curr->data!=0 && nex->data!=0){
            nex=nex->node;
        }
        else{
            curr=curr->node;
            nex=nex->node;
        }
    }
    nex=curr->node;
    while(nex!=NULL){
        if(curr->data!=1 && nex->data==1){
            int temp;
            temp=curr->data;
            curr->data=nex->data;
            nex->data=temp;
            curr=curr->node;
            nex=nex->node;
        }
        else if(curr->data!=1 && nex->data!=1){
            nex=nex->node;
        }
        else{
            curr=curr->node;
            nex=nex->node;
        }
    }
    nex=curr->node;
    while(nex!=NULL){
        if(curr->data!=2 && nex->data==2){
            int temp;
            temp=curr->data;
            curr->data=nex->data;
            nex->data=temp;
            curr=curr->node;
            nex=nex->node;
        }
        else if(curr->data!=2 && nex->data!=2){
            nex=nex->node;
        }
        else{
            curr=curr->node;
            nex=nex->node;
        }
    }
    
}
bool nodepalindrome(Node* &head,int n){
    if(n<2){
        return 1;
    }
    Node* front=head;
    Node* end=front;
    int count=1;
    while(count<n){
        end=end->node;
        count++;
    }
    if(front->data!=end->data){
        return 0;
    }
    else{
        return nodepalindrome(head->node,n-2);
    }
}
class Node3{
    public:
    int data;
    Node3* next;
    Node3* random;
    Node3(int data){
        this->data=data;
        this->next=NULL;
        this->random=NULL;
    }
};
void node3insert(Node3* &tail,int data ){
    Node3* temp=new Node3(data);
    tail->next=temp;
    tail=temp;
}
Node3* clonenode(Node3* &head){
    
    Node3* temp=new Node3(head->data);
    Node3* tempi=temp;
    Node3* curr=head->next;
    while(curr!=NULL){
        node3insert(temp,curr->data);
        curr=curr->next;
    }
    curr=head;
    Node3* ran=head;
    map<int,int> randoms;
    int c=1;
    int r=1;
    while(curr!=NULL){
        while(ran!=NULL){
            if(curr->random==ran){
                randoms[c]=r;
                c++;
                r=1;
                ran=head;
                curr=curr->next;
                break;
            }
            else{
                ran=ran->next;
                r++;
            }
        }
    }
    c--;
    int j=1;
    int i=1;
    Node3* copy=tempi;
    Node3* ref=tempi;
    while(c!=0){
        while(i<randoms[j]){
            copy=copy->next;
            i++;
        }
        tempi->random=copy;
        tempi=tempi->next;
        copy=ref;
        c--;
        j++;
        i=1;
    }
    return copy;
}
Node3* clonenode3(Node3* &head){
    Node3* temp=head;
    Node3* clone=head;
    
    while(temp!=NULL){
        Node3* mid=new Node3(temp->data);
        mid->next=temp->next;
        temp->next=mid;
        temp=temp->next->next;
    }
    while(clone!=NULL){
        if(clone->random!=NULL)
        clone->next->random=clone->random->next;
        clone=clone->next->next;
    }
    temp=head;
    Node3* clonehead=head->next;
    clone=head->next;
    while(temp!=NULL){
        temp->next=clone->next;
        temp=temp->next;
        if(temp!=NULL){
            clone->next=temp->next;
        }
        else{
            clone->next=NULL;
        }
        clone=clone->next;
    }
    return clonehead;


}
class Node2{
    public:
    int data;
    Node2* prev;
    Node2* next;
    Node2(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    /*Node2* n2=new Node2(10);
    Node2* tail = n2->next;
    Node2* head= n2;
    cout<<n2<<endl;
    insertnode2(head,tail,20,2);
    insertnode2(head,tail,30,3);
    insertnode2(head,tail,40,4);
    insertnode2(head,tail,50,1);
    printnode2(head,tail);
    cout<<endl;
    deletenode2(head,tail,5);
    printnode2(head,tail);
    cout<<endl;
    cout<<tail;*/
};
void insertnode2(Node2* &head,Node2* &tail,int data,int n){
    Node2* temp1=head;
    Node2* temp2=head->next;
    int pos=2;
    if(n==1){
        Node2* temp=new Node2(data);
        temp->next=head;
        head=temp;
        return;
    }
    while(pos<n){
        temp1=temp1->next;
        temp2=temp2->next;
        pos++;
    }
    Node2* temp= new Node2(data);
    temp1->next=temp;
    temp->prev=temp1;
    temp->next=temp2;  
    if(temp->next==NULL){
        tail==temp;
    }
}
void printnode2(Node2* &head,Node2* &tail){
    Node2* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void deletenode2(Node2* &head,Node2* tail,int n){
    Node2* temp1=head;
    Node2* temp2=head->next;
    int pos=2;
    if(n==1){
        temp1=temp2;
        head=temp1;
    }
    while(pos<n){
        temp1=temp2;
        temp2=temp2->next;
        pos++;
    }
    temp1->next=temp2->next;
}
Node2* reversenode2(Node2* &head){
    if(head == NULL || head->next==NULL){
        Node2* end=head->prev;
        head->prev=NULL;
        return end;
    }
    Node2* remaining = reversenode2(head->next);
    head->next->next=head;
    head->prev=head->next;
    head->next=NULL;
    return remaining;
}
//STACK
void printstack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void atbottom(stack<int> &s,int n){
    if(s.empty()){
        s.push(n);
        return;
    }

    int top=s.top();
    s.pop();
    atbottom(s,n);
    s.push(top);
}
void reversestack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int n=s.top();
    s.pop();
    reversestack(s);
    atbottom(s,n);

}
void sortedstack(stack<int> &s,int n){
    if(s.empty() || s.top()<n){
        s.push(n);
        return;
    }
    int num=s.top();
    s.pop();
    sortedstack(s,n);
    s.push(num);

}
void sortstack(stack<int> &s){
   if(s.empty()){
    return;
   }
   int n=s.top();
   s.pop();
   sortstack(s);
   sortedstack(s,n);
}
//Minimum cost to make string valid
int valid(string s){
    int count1=0;
    int count2=0;
    if(s.length()%2!=0){
        return 0;
    }
    
    else{
        stack<char> ch;
        for(int i=0;i<s.length();i++){
            if(s[i]=='{')
            ch.push(s[i]);
            else{
                if(!ch.empty()){
                    ch.pop();
                }
                else{
                    count1++;
                }

            }

        }
        while(!ch.empty()){
            count2++;
        }
        if(count2 !=0 && count1!=0){
            return count1+count2;
        }
        else if(count2!=0){
            return count2/2;

        }
        else{
            return count1/2;
        }
    }
    
}
int histogram(vector<int> heights){
    int i=0;
    stack<int> height;
    stack<int> area;
    while(i<heights.size()){
        height.push(heights[i]);
        i++;
    }
    sortstack(height);
    reversestack(height);
    while(!height.empty()){
        int t=height.top();
        int areabase=i*t;
        area.push(areabase);
        while(!height.empty() && height.top()==t){
            height.pop();
            i--;
        }
        
    }
    
    int maxarea=0;
    while(!area.empty()){
        maxarea= area.top();
        while(!area.empty() && maxarea>=area.top()){
            area.pop();
        }
        
    }
    return maxarea;
    
}
vector<int> nextsmaller(vector<int> h,int n){
    stack<int> s;
    s.push(-1);
    vector<int> arr;
    for(int i=n-1;i>=0;i--){
        if(s.top()<h[i]){
            arr[i]=s.top();
            s.push(i);
        }
        else{
            while(s.top()!=-1&&arr[s.top()]>=h[i]){
                s.pop();
            }
            arr[i]=s.top();
            s.push(i);
        }
    }
    return arr;

}
vector<int> prevsmaller(vector<int> h,int n){
    stack<int> s;
    s.push(-1);
    vector<int> arr;
   for(int i=0;i<n;i++){
        if(s.top()<h[i]){
            arr[i]=s.top();
            s.push(i);
        }
        else{
            while(s.top()!=-1&&arr[s.top()]>=h[i]){
                s.pop();
            }
            arr[i]=s.top();
            s.push(i);
        }
    }
    return arr;


}
int histogram2(vector<int> h){
    stack<int> area;
    vector<int> next=nextsmaller(h,h.size());
    vector<int> prev=prevsmaller(h,h.size());
    int max_area = INT32_MIN;
    for(int i=0;i<h.size();i++){
        int l=h[i];
        
        int b=next[i]-prev[i]-1;
        if(next[i]==-1){
            next[i]=h.size();
        }
        
        int ans=l*b;
        max_area = max(max_area, ans);
        
    }
    return max_area;
}
int celebrity(vector<vector<int>> matrix){
    int n=matrix.size();
    int i=0;
    while(i<n){
        int count=0;
        for(int j=0;j<n;j++){
            if(matrix[j][i]==1){
                count++;
            }
            else{
                break;
            }
        }
        if(count==n){
            break;
        }
        i++;
    }
    if(i==n){
        return -1;
    }
    else{
        int count=0;
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                count++;
            }

        }
        if(count==n-1){
            return i;
        }
        else{return -1;}

    }
    return i;
}
class Nstack{
    int *arr;
    int *top;
    int *next;
    int n,s;
    int freespot;
    Nstack(int N,int S){
        n=N;
        s=S;
        arr=new int[S];
        top= new int[N];
        next= new int[S];
        memset(top,-1,sizeof(arr));
        for(int i=0;i<S;i++){
            next[i]=i+1;
        }
        next[S-1]=-1;
        freespot=0;
    }
    public:
    bool push(int x,int m){
        if(freespot==-1){
            return 0;
        }
        int index=freespot;
        freespot=next[index];
        arr[index]=x;
        next[index]=top[m-1];
        top[m-1]=index;
        return 1;
    }
    int pop(int m){
        if(top[m-1]==-1){
            return -1;
        }
        int index=top[m-1];
        top[m-1]=next[index];
        next[index]=freespot;
        freespot=index;
        return arr[index];


    }
};
//Queue
class Queue{
    int *arr;
    int f;
    int r;
    int size;
    int count;
    Queue(int size){
        this->size=size;
        arr=new int[size];
        f=0;
        r=0;
        count=0;
    }
    void enqueue(int data){
        if(count==size){
            cout<<"bc bhar gaya"<<endl;
        }
        
        arr[r]=data;
        r=(r+1)%size;
        count++;
    }
    int dequeue(){
        if(count==0){
            return -1;
        }
        f=(f+1)%size;
        count--;
    }
    int top(){
        if(count==0){
            cout<<"bc bola na koi nahi hai"<<endl;
        }
        return arr[r];
    }
};
void printqueue(queue<int> q){
    if(q.empty()){
        return;
    }
    int n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
void revqueue(queue<int> &q){
    if(q.empty()){
        return;
    }
    int n=q.front();
    q.pop();
    revqueue(q);
    q.push(n);
}
queue<int> slidingwindow(vector<int> arr,int k){
    queue<int> ans;
    int n=arr.size();
    for(int i=0;i<n-k+1;i++){
        int curr=0;
        for(int j=i;j<i+k;j++){
            if(arr[j]<0){
                ans.push(arr[j]);
                curr=1;
                break;
            }
        }
        if(curr==0){
            ans.push(curr);
        }
    }
    return ans;

}
void rev1stkelement(queue<int> &q,int n,int k){
}
string nonRepeatingStream(string s){
    deque<char> d;
    map<char,int> count;
    string ans;
    for(int i=0;i<26;i++){
        count[97+i]=0;
    }
    deque<int> rnr;
    for(int i=0;i<s.size();i++){
        count[s[i]]=count[s[i]]+1;
        d.push_back(s[i]);
        while(count[d.front()]>1){
            d.pop_front();
        }
        if(!d.empty()){
            ans.push_back(d.front());
        }
        else{
            ans.push_back('#');
        }

    }
    return ans;
}
int petrolpump(vector<int> p,vector<int> d){
    //tle
    int sump=0;
    int sumd=0;
    int count=0;
    int i=0;
    while(count!=p.size()){
    count=0;
    while(sump>=sumd && count!=p.size()){  
        sump=sump+p[i%p.size()];
        sumd=sumd+d[i%p.size()];
        count++;
        i++;
        }
        if(count==p.size() && sump<sumd){
            return -1;
        }

        sump=0;
        sumd=0;
    }
    return i%p.size();

}
int petrolpump2(vector<int> p,vector<int> d){
     int n = p.size();
    int total_petrol = 0, total_distance = 0;
    for (int i = 0; i < n; i++) {
        total_petrol += p[i];
        total_distance += d[i];
    }
    if (total_petrol < total_distance) {
        return -1;
    }
    int start = 0, curr_surplus = 0;
    for (int i = 0; i < n; i++) {
        curr_surplus = curr_surplus + p[i] - d[i];
        if (curr_surplus < 0) {
            start = i + 1;
            curr_surplus = 0;
        }
    }
    return start;
}
class Nqueue{
    int freespot;
    int* arr;
    int* f;
    int* r;
    int* next;
    int n,s;
    Nqueue(int size,int n){
        this->n=n;
        this->s=size;
        f=new int[n];
        r=new int[n];
        next=new int[s];
        arr=new int[s];
        memset(f,-1,sizeof(f));
        memset(r,-1,sizeof(r));
        for(int i=0;i<size;i++){
            next[i]=i+1;
        }
        next[s-1]=-1;
        freespot=0;
    }
    void push(int val,int q){
        int index=freespot;
        freespot=next[index];
        if(f[q-1]==-1){
            f[q-1]=index;
            next[index]=r[q-1];
            r[q-1]=index;
            arr[index]=val;
        }
        else{
            next[r[q-1]]=index;
            r[q-1]=index;
            arr[index]=val;
        }
    }

    int pop(int q){
        if(f[q-1]==-1){
            cout<<"it is already empty"<<endl;
        }
        int index=f[q-1];
        f[q-1]=next[index];
        next[index]=freespot;
        freespot=index;
    }



};
int maxMinSlide(int *arr,int n,int k){
    deque<int> maxi;
    deque<int> mini;
    for(int i=0;i<k;i++){
        while(!maxi.empty() && arr[maxi.back()]<=arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.back()]>=arr[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }
    int ans=0;
    for(int i=k;i<n;i++){
        ans+=arr[maxi.front()]+arr[mini.front()];
        //remove
        while(!maxi.empty() && i-maxi.front()>=k){
            maxi.pop_front();
        }
        while(!mini.empty() && i-mini.front()>=k){
            mini.pop_front();
        }
        //add
        while(!maxi.empty() && arr[maxi.back()]<=arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.back()]>=arr[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);

    }
    ans+=arr[maxi.front()]+arr[mini.front()];
    return ans;

}
//BimaryTree
class BT{
    public:
    int data;
    BT* left;
    BT* right;
    BT(int data){
        this-> data=data;
        this-> left=NULL;
        this-> right=NULL;
    }

};
BT* binarytree(BT* &root){
    cout<<"enter the data:"<<endl;
    int data;
    cin>>data;
    root=new BT(data);
    if(data==-1){
        return NULL;
    }
    cout<<"for left node of"<<data<<endl;
    root->left=binarytree(root->left);
    cout<<"for right node of"<<data<<endl;
    root->right=binarytree(root->right);
    return root;

}
void levelOrderTraverse(BT* root){
    queue<BT*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        BT* temp=q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }  
    
}
}
void inorder(BT* &root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(BT* &root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";

    preorder(root->left);
    
    preorder(root->right);
}
void postorder(BT* &root){
    if(root==NULL){
        return;
    }

    postorder(root->left);
    
    postorder(root->right);
    cout<<root->data<<" ";
}
void buildfromLOT(BT* &root){
    queue<BT*> q;
    cout<<"Enter the data for root node"<<endl;
    int data;
    cin>>data;
    if(data!=-1){
    root=new BT(data);
    q.push(root);}
    while(!q.empty()){
        BT* temp=q.front();
        q.pop();

        cout<<"enter the data for left of "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new BT(leftdata);
            q.push(temp->left);
        }
        cout<<"enter the data for right of "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->left=new BT(rightdata);
            q.push(temp->left);
        }
    }
}
pair<bool,int> sumTree(BT* root){
    if(root==NULL){
        pair<bool,int> p=make_pair(true,0);
        return p;
    }
    if(root->left==NULL && root->right==NULL){
        pair<bool,int> p=make_pair(true,root->data);
        return p;
    }

    pair<bool,int> left=sumTree(root->left);
    pair<bool,int> right=sumTree(root->right);

    bool leftans=left.first;
    bool rightans=right.first;
    bool cond= left.second+right.second==root->data;
    pair<bool,int> ans;
    if(leftans&&rightans&&cond){
        ans.first=1;
        ans.second=2*root->data;
    }
    else{
        ans.first=0;
    }
    return ans;

}
void zigzag1(BT* root){
    queue<BT*> q;
    q.push(root);
    q.push(NULL);
    int s=0;
    stack<BT*> st;
    while(!q.empty()){
        BT* temp=q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
                if(s==1){
                    s=0;
                }
                else{
                    while(!st.empty()){
                        cout<<st.top()->data<<" ";
                        st.pop();
                    }
                    s=1;
                }
            }
        }
        else{
            switch(s){
                case 1:{
                    if(temp->left){
                        q.push(temp->left);
                    }
                    if(temp->right){
                        q.push(temp->right);
                    } 
                }
                break;
                case 0:{
                    cout<<temp->data<<" ";
                    if(temp->left){
                        q.push(temp->left);
                        st.push(temp->left);

                    }
                if(temp->right){
                        q.push(temp->right);
                        st.push(temp->right);
                    } 
                }
                break;

            }
    }  
    
}
}
int heightBT(BT* root){
    if(!root){
        return 0;
    }
    int left= heightBT(root->left);
    int right=heightBT(root->right);
    return max(left,right)+1;

}
int diameterBT(BT* root){
    if(!root){
        return 0;
    }
    int op1=diameterBT(root->left);
    int op2=diameterBT(root->right);
    int op3=heightBT(root->left)+heightBT(root->right)+1;
    return max(op3,max(op2,op1));

}
void boundaryT(BT* root){

}
vector<vector<int>> verticalOrder(BT* root){

}
BT* IOTPOT(int iot[],int pot[]){
    int rootindex=0;
    BT* root=new BT(pot[0]);
}
//HEAP 
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        size=0;
        arr[0]=-1;
    }
    void insert(int val){
        size++;
        int index=size;
        arr[index]=val;
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else return;
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void deleteroot(){
        if(size==0){
            cout<<"nothing to delete.";
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            int left=2*i;
            int right =2*i+1;
            if(left<=size && arr[i]<arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            else if(right<=size && arr[i]<arr[right]){
                swap(arr[i],arr[right]);
                i=right;
            }
            else return;
        }
    }
};


int main(){
    queue<int> q;
    vector<int> arr;
    string s="blybjrzbbyivawvdesebvusjnijimtzkuzdtfkpkpuyjynzxmapwzvrxpluuzbftozbqedqwtlvvnexfvualb";
    arr.push_back(-8);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(-6);
    arr.push_back(-10);
    q.push(-8);
    q.push(2);
    q.push(3);
    q.push(-6);
    q.push(5);
    /*if(!q.front()){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }*/

    vector<int> p={6,7,4,10,6,5};
    vector<int> d={5,6,7,8,6,4};
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteroot();
    h.print();


}