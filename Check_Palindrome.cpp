#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int dup=n;
    int reverse_no=0;
    while(n!=0){
        int last_digit=n%10;
        reverse_no=(reverse_no*10)+last_digit;
        n=n/10;
    }
    if(reverse_no==dup){
        cout<<"true";
    }else{
        cout<<"false";
    }
}