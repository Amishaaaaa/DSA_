//Pattern
/* 
  A
  B B
  C C C
  D D D D
  E E E E E 
*/

#include<bits/stdc++.h>
using namespace std;
char ch='A';
void alphaRamp(int n) {
    char ch='A';
    // Write your code here.
    for(int i=1;i<=n;i++){
      for(int j=0;j<i;j++){
        cout<<ch<<" ";
        
      }
      ch++; 
      cout<<endl;
    }
}

//OR

#include<bits/stdc++.h>
using namespace std;

void alphaRamp(int n) {
    char ch='A';
    // Write your code here.
    for(int i=0;i<n;i++){
      char ch='A'+i;
      for(int j=0;j<=i;j++){
        cout<<ch<<" ";
        
      }
     
      cout<<endl;
    }
}
