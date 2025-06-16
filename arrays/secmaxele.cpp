#include <bits/stdc++.h>
using namespace std;
// the problem is finding second largest element in the array
// Function to find the second maximum element
int maxele(vector<int> a, int n) {
    int m = INT_MIN;   // m will store the maximum element
    int m2 = INT_MIN;  // m2 will store the second maximum element

    for (int i = 0; i < n; i++) {
        if (a[i] > m) {
            // If current element is greater than max,
            // update second max first, then max
            m2 = m;
            m = a[i];
        } else if (a[i] > m2 && a[i] < m) {
            // If current element is between max and second max
            m2 = a[i];
        }
    }

    // If no valid second maximum found (e.g., all elements same)
    if (m2 == INT_MIN) return -1;
    return m2;
}

int main() {
    int n;
    cin >> n;  // Input array size

    vector<int> a(n);  // Declare vector of size n
    for (int i = 0; i < n; i++)
        cin >> a[i];   // Input array elements

    int maxs = maxele(a, n);  // Call function to find second max
    if (maxs == -1)
        cout << "No second maximum found (all elements are same or only one element)";
    else
        cout << "Second maximum element is: " << maxs;

    return 0;
}
