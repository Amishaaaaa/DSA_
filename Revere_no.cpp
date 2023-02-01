#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,reverse_no=0;
    cin>>n;
    while(n>0){
        int last_digit=n%10;
        reverse_no=(reverse_no*10)+last_digit;
        n=n/10;
    }
    cout<< reverse_no;
	
}
