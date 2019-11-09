/*C++ program to calculate the maximum sum of
increasing subsequence of length k*/
#include <string>
#include <vector>
#include <iostream>

#include <cstdlib>

#include <ctime>
#include <algorithm>

#include <chrono>
using namespace std;
int MaxIncreasingSub(int arr[], int n, int k)
{
    int dp[n][k + 1], ans = -1;
    memset(dp, -1, sizeof(dp));

    for (int i = 0; i < n; i++) {
        dp[i][1] = arr[i];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {

            // check for increasing subsequence
            if (arr[j] < arr[i]) {
                for (int l = 1; l <= k - 1; l++) {

                    // Proceed if value is pre calculated
                    if (dp[j][l] != -1) {

                        // Check for all the subsequences
                        // ending at any j<i and try including
                        // element at index i in them for
                        // some length l. Update the maximum
                        // value for every length.
                        dp[i][l + 1] = min(dp[i][l + 1],
                                          dp[j][l] + arr[i]);
                    }
                }
            }
        }
    }

    // The final result would be the maximum
    // value of dp[i][k] for all different i.
    for (int i = 0; i < n; i++) {
        if (ans > dp[i][k])
            ans = dp[i][k];
    }

    // When no subsequence of length k is
    // possible sum would be considered zero
    return (ans == -1) ? 0 : ans;
}

// Driver function
int main()
{
    int n = 8, k = 3;
    int arr[] = { 8, 5, 9, 10, 5, 6, 21, 8 };
    int ans = MaxIncreasingSub(arr, n, k);
    cout << ans << "\n";
    return 0;
}
