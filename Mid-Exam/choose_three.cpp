#include <bits/stdc++.h>
using namespace std;

// Function to check if it is possible to select three distinct indexed values from the array such that their summation equals S
bool isPossible(int N, int S, const vector<int>& A) {
    // Sort the array in ascending order
    vector<int> sortedA = A;
    sort(sortedA.begin(), sortedA.end());

    // Iterate through the array and check for possible triplets
    for (int i = 0; i < N - 2; ++i) {
        int left = i + 1;
        int right = N - 1;

        while (left < right) {
            int currentSum = sortedA[i] + sortedA[left] + sortedA[right];

            // Check if the current triplet sum equals S
            if (currentSum == S) {
                return true;
            }
            // Adjust pointers based on the current sum
            else if (currentSum < S) {
                ++left;
            } else {
                --right;
            }
        }
    }

    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        // Check if it is possible and output the result
        if (isPossible(N, S, A)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
