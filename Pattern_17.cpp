//Pattern
/*
         A
       A B A
     A B C B A
   A B C D C B A    
*/

#include<bits/stdc++.h>
using namespace std;

void alphaHill(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
         //Space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
         //Star
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch<<" ";
            if(j<=breakpoint)ch++;
            else ch--;
        }
         //Space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
         
      cout<<endl;
    }
}
