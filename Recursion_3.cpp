//Print from n-1 using recursion
#include<bits/stdc++.h>
using namespace std;

//Soln-1
void funct(int n){
    if(n<1){
        return;
    } 
    cout<<n<<endl;
    n--;  
    funct(n);
}

int main(){
    int n;
    cin>>n;
    funct(n);
}

//Sol-2
void funct(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    funct(i-1,n);
}
int main(){
    int n;
    cin>>n;
    funct(n,n);
}