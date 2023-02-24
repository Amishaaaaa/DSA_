
#include<bits/stdc++.h>
using namespace std;

//Print from n to 1 using backtracking

void funct(int i,int n){
    if(i>n){
        return;
    }
    
    funct(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    funct(1,n);
}
