#include<bits/stdc++.h>
using namespace std;

void pushZeroesToend(int arr[], int n) {
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[j], arr[i]);
            j++;
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
    pushZeroesToend(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
