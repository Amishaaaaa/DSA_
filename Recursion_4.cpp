

#include<bits/stdc++.h>
using namespace std;

//Print from 1 to n using backtracking
void funct(int i,int n){
    if(i<1){
        return;
    }
    funct(i-1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    funct(n,n);
}
