#include<bits/stdc++.h>
#include<vector>

using namespace std;
vector<int>reverseAnarray(vector<int>arr,int n){
    reverse(arr.begin(),arr.end());
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr=reverseAnarray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
