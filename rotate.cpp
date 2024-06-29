#include<iostream>
#include<algorithm>
using namespace std;
//void reverse(int arr[],int n){



/*int left=0;
int right=n-1;

while(left<right){
int temp=arr[left];
arr[left]=arr[end];
arr[end]=arr[temp];
left++;
right--;

}
}*/
void leftRotateThearrayBy_Dplaces(int arr[],int n,int d){
    d=d%n;
    if(n==0){
    return;
}
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftRotateThearrayBy_Dplaces(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
