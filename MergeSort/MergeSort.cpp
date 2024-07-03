#include <iostream>     // For input and output operations
#include <vector>       // For using the vector container
#include <algorithm>    // For standard algorithms (not used here, but included)
#include <map>          // For map container (not used here, but included)
#include <string>       // For using the string class

// Macros for convenience
#define ll long long
#define int long long int

// Macro for optimizing input/output operations
#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

// Macros for frequently used operations
#define vi vector<ll>
#define take(a, n)              \
    for (int j = 0; j < n; j++) \
        cin >> a[j];
#define give(a, n)              \
    for (int j = 0; j < n; j++) \
        cout << a[j] << ' ';    \
    cout << endl;
#define be(x) x.begin(), x.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

const int N = 1e7 + 10; // Defining a constant N for the maximum size of the array

using namespace std;    // Using the standard namespace to avoid prefixing std::

// Global vector of size N to store the elements to be sorted
vector<int> a(N);

// Function to merge two halves of the array
void merge(int l, int r, int mid) {
    int l_sz = mid - l + 1; // Size of the left half
    int r_sz = r - mid;     // Size of the right half
    vector<int> L(l_sz);    // Temporary vector for the left half
    vector<int> R(r_sz);    // Temporary vector for the right half

    // Copying elements to the temporary vectors
    for (int i = 0; i < l_sz; i++) {
        L[i] = a[l + i];
    }
    for (int i = 0; i < r_sz; i++) {
        R[i] = a[mid + 1 + i];
    }

    // Appending INT_MAX to signify the end of the vectors
    L.push_back(INT_MAX);
    R.push_back(INT_MAX);

    int l_i = 0, r_i = 0; // Indices for iterating through the temporary vectors

    // Merging the two halves back into the original array
    for (int i = l; i <= r; i++) {
        if (L[l_i] <= R[r_i]) {
            a[i] = L[l_i];
            l_i++;
        } else {
            a[i] = R[r_i];
            r_i++;
        }
    }
}

// Recursive function to perform merge sort
void mergeSort(int l, int r) {
    if (l >= r) return;     // Base case: if the subarray has one or zero elements

    int mid = l + (r - l) / 2; // Finding the midpoint of the array

    // Recursively sorting the left and right halves
    mergeSort(l, mid);
    mergeSort(mid + 1, r);

    // Merging the sorted halves
    merge(l, r, mid);
}

signed main() {
    int n;               // Variable to store the number of elements
    cin >> n;            // Reading the number of elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];     // Reading the elements into the vector
    }
    
    mergeSort(0, n - 1); // Calling mergeSort on the entire array

    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; // Outputting the sorted array
    }
    cout << endl;        // Printing a newline character
}
