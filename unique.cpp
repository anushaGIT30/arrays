#include <iostream>
#include <vector>
#include <algorithm> // For sort and unique

using namespace std;

// Function to find unique elements in a vector
vector<int> findingUnique(vector<int> v) {
    // Sort the vector to bring duplicates together
    sort(v.begin(), v.end());
    
    // Remove consecutive duplicates
    auto  new_end = unique(v.begin(), v.end());
    
    // Erase the removed duplicates
    v.erase(new_end, v.end());
    
    return v;
}

int main() {
    vector<int> v = {4, 1, 3, 2, 1, 4, 3, 5};

    // Find unique elements
    vector<int> unique_elements = findingUnique(v);

    // Print the unique elements
    cout << "Unique elements: ";
    for (int num : unique_elements) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
