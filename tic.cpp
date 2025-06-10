#include<iostream>
#include<array>
using namespace std;

int winner(char arr[3][3]){

    for(int i=0;i<3;i++){
        if(arr[i][0] == 'O' && arr[i][1] == 'O' && arr[i][2] == 'O'){
        return 2;
    }
    }
    for(int i=0;i<3;i++){
        if(arr[0][i] == 'O' && arr[1][i] == 'O' && arr[2][i] == 'O'){
        return 2;
    }
    }
    if(arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O'){
        return 2;
    }
     if(arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O'){
        return 2;
    }

    //for 1
    for(int i=0;i<3;i++){
        if(arr[i][0] == 'X' && arr[i][1] == 'X' && arr[i][2] == 'X'){
        return 1;
    }
    }
    for(int i=0;i<3;i++){
        if(arr[0][i] == 'X' && arr[1][i] == 'X' && arr[2][i] == 'X'){
        return 1;
    }
    }
    if(arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X'){
        return 1;
    }
     if(arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X'){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    cout<<"Welcome to the tic tac toe game:)"<<endl;
    char arr[3][3];
    for(int n=0;n<3;n++){
        for(int m=0;m<3;m++){
            arr[n][m]=' ';
        }
    }
    for(int n=0;n<3;n++){
        cout<<"-------"<<endl;
        cout<<"|";
        for(int m=0;m<3;m++){
            cout<<arr[n][m]<<"|";
        }
        cout<<endl;
    }
    cout<<"-------"<<endl;

    int i;
    int j;
    int count =0;
    while(count<9){
    
    if(winner(arr) == 1){
        cout<<"                                                ******player 1 is the winner******"<<endl;
        break;
    }
    else if(winner(arr) == 2){
        cout<<"                                                ******player 2 is the winner******"<<endl;
        break;
    }
    else{
    cout<<"                                              Enter the index player";
    if(count%2==0){
        cout<<" 1(X)";
    }
    else{
        cout<<" 2(O)";
    }
    cout<<", you wants to fill(i j): ";
    cin>>i>>j;
    if(0<=i && i<3 && 0<=j && j<3){
    if(arr[i][j] != ' '){
        cout<<"                                                     *************This place is not empty***********"<<endl;
    }
    else if(count%2 == 0){
    arr[i][j]='X';
    count++;
    }
    else{
        arr[i][j]='O';
        count++;
    }
    }
    else{
        cout<<"                                                    *********Enter a valid index*********"<<endl;
    }
    }
    for(int n=0;n<3;n++){
        cout<<"-------"<<endl;
        cout<<"|";
        for(int m=0;m<3;m++){
            cout<<arr[n][m]<<"|";
        }
        cout<<endl;
    }
    cout<<"-------"<<endl;
    }
    if(winner(arr) == 0){
        cout<<"                                                   There is no winner of this game"<<endl;
        cout<<"                                                   Thank you for playing";
    }
    else{
        cout<<"                                                   Thank you for playing";
    }
}
