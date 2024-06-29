#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Function to find the third largest distinct number
int thirdLargest(vector<int>& nums) {
    // Sort the array in descending order
    sort(nums.begin(), nums.end(), greater<int>());
    
    int count = 1; // Start with the first distinct element
    int ans = nums[0]; // Initialize answer with the largest element

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[i - 1]) { // Check for distinct elements
            count++;
            ans = nums[i]; // Update the answer to the new distinct element
        }

        if (count == 3) { // Return the third distinct element
            return ans;
        }
    }

    // If fewer than three distinct numbers, return the largest
    return nums[0];
}

int main() {
    int n;
    cin >> n; // Input number of elements
    vector<int> v(n); // Initialize vector
for(int i=0;i<n;i++){
    cin>>v[i];
}
   

    int result = thirdLargest(v); // Get the third largest distinct number
    cout << result << endl; // Output the result

    return 0;
}
