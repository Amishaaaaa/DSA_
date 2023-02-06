//Pattern
/*
  C
  C B
  C B A
*/

#include<bits/stdc++.h>
using namespace std;

void alphaTriangle(int n) {
    // Write your code here.
    char c='A'+n-1;
    for(int i=0;i<n;i++){
        for(char ch=c;ch>=c-i;ch--){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}