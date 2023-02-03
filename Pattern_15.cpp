//Pattern
/*
  A B C D E
  A B C D 
  A B C
  A B 
  A
*/

#include<bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=n;i>=1;i--){
        for(char ch='A';ch<='A'+i-1;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}