#include<bits/stdc++.h>
using namespace std;

//Submission of first n numbers

int funct(int n){
    if(n==0){
        return 0;
    }
    return n+funct(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<funct(n);
}
