#include<bits/stdc++.h>
using namespace std;

//Character Hashing(lowercasw Alphabets)

int main(){
    string s;
    cin>>s;

    //Pre-compute
    
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }


    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //Fetch
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}
