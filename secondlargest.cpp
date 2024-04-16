#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[],int n){
    int largest=INT_MIN;
    int  second=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second&&arr[i]!=largest){
            second=arr[i];
        }
       
    }
    return second;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<secondLargest(arr,n);
}