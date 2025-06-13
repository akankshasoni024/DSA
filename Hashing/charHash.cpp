#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    //pre compute
    int hash[256]={0};
    for (int i=0;i<s.length();i++){
        //for only small letters => hash[s[i]-'a']++
        hash[s[i]]++;
    }

    int q;
    cin>>q;
    while (q--)
    {
        char c;
        cin>>c;
        //fetch
        //for only small letters => cout<<hash[c-'a']<<endl;
        cout<<hash[c]<<endl;
    }
    return 0;
}