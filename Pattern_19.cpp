//Pattern
/*
    * * * * * * * * * *
    * * * *     * * * *
    * * *         * * *
    * *             * *
    *                 *
    *                 *
    * *             * *
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * *
*/
#include<bits/stdc++.h>
using namespace std;

void symmetry(int n) {
    // Write your code here.
    int inis=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        for(int j=0;j<inis;j++){
            cout<<"   ";
        } 
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        inis+=2;
        cout<<endl;
    }
    int ins=inis;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=0;j<ins;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        ins-=2;
        cout<<endl;
    }
}