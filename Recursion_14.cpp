#include<bits/stdc++.h>
using namespace std;

//Print count of no of subsequences whose sum is k

int printS(int ind,int s,int sum,int arr[],int n){
    if(ind==n){
        //Condition Satisfied
        if(s==sum){
            return 1;
        }
        else return 0;
    }
    
    s += arr[ind];

    int l = printS(ind+1,s,sum,arr,n);

    s -= arr[ind];

    //Not pick
    int r = printS(ind+1,s,sum,arr,n);
    return l+r;
    
}


int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    cout<<printS(0,0,sum,arr,n);
    return 0;

}
