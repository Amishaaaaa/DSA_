
#include<iostream>
using namespace std;

//Print Name n no of time

void func(int i,int n){
  if(i>n){
    return;
  }
  cout<<"Amisha"<<endl;
  func(i+1,n);
}
int main(){
  int n;
  cin>>n;
  func(1,n);
}
