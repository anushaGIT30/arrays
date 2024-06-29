#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int>RotateArrayby1_Place(vector<int>v,int n){
    int temp=v[0];
    for(int i=0;i<n;i++){
        v[i-1]=v[i];
    }
     v[n-1]=temp;
     return v;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ans=RotateArrayby1_Place(v,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
//the time complexity:o(n)
//space complexity:the space used to solve the problem o(1)(extra space used )
//space used in the algorithm=o(n)
//the extra space used in the algo is o(1) in order to solve the we have taken the array so o(n)