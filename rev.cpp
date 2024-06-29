#include<bits/stdc++.h>
using namespace std;
string reverse(string s){
    int st=0,l=s.length()-1;
    while(st<l){
        
            swap(s[st],s[l]);
        st++;
        l--;
    }
    return s;
}
int main(){
    string s;
    getline(cin,s);
   // reverse(s.begin(),s.end());
    cout<<reverse(s);

}