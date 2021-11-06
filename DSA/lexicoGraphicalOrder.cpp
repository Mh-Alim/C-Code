#include<iostream>
using namespace std;

// Lexicographical order have to understand by the help of net;

void dfs(int x,int n){
    if(x>n){
        return;
    }
    cout<<x<<" ";
    for(int i=0;i<10;i++){
        dfs(10*x+i,n);
    }
}
int main(){

    int n = 100;
    for(int i=1;i<=9;i++){
        dfs(i,n);
    }


    return 0;
}