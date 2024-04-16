#include<bits/stdc++.h>
using namespace std;

void printingLargestof3elements(int arr[], int n, int largest3[]) {
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
    largest3[0] = first;
    largest3[1] = second;
    largest3[2] = third;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int largest3[3];
    printingLargestof3elements(arr, n, largest3);
    for(int i = 0; i < 3; i++) {
        cout << largest3[i] << " ";
    }
    return 0;
}
