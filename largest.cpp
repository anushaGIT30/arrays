#include<bits/stdc++.h>
using namespace std;

void printingLargestof3elements(int arr[], int n) {
  
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if(arr[i] > third && arr[i] != first && arr[i] != second) {
            third = arr[i];
        }
    }
    
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> largest3;
    printingLargestof3elements(arr, n);
    for(int i = 0; i < 3; i++) {
        cout << largest3[i] << " ";
    }
    return 0;
}
