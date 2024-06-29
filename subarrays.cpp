#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solve(vector<int>& arr, int sum, int n) {
    vector<vector<int>> subarrays;
    for (int start = 0; start < n; start++) {
        int currsum = 0;
        for (int end = start; end < n; end++) {
            currsum += arr[end];
            if (currsum == sum) {
                subarrays.push_back(vector<int>(arr.begin() + start, arr.begin() + end + 1));
            }
        }
    }
    return subarrays;
}

int main() {
    int n;
    
    cin >> n;

    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum;
    
    cin >> sum;

    vector<vector<int>> result = solve(arr, sum, n);

    cout << "Subarrays with sum " << sum << " are:" << endl;
    for (const auto& subarray : result) {
        cout << "[ ";
        for (int num : subarray) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}

