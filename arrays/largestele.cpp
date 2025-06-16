// Problem:finding largest element in array

#include <bits/stdc++.h>
using namespace std;

// Approach 1: Basic loop to find the largest element
int maxele(const vector<int>& a, int n) {
    int m = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (m < a[i])
            m = a[i];
    }
    return m;
}

// Approach 2: Using STL max_element
int maxele1(const vector<int>& a, int n) {
    return *max_element(a.begin(), a.end()); // dereference the iterator
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Size of array
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Input array elements
        }

        // Using basic approach
        int maxs = maxele(a, n);
        cout << "Max (basic): " << maxs << "\n";

        // Using STL
        maxs = maxele1(a, n);
        cout << "Max (STL): " << maxs << "\n";
    }

    return 0;
}
