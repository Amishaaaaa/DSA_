//Pattern
/* 
   A
   A B
   A B C
   A B C D
*/

#include<bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
