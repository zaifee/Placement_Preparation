#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 4, 6, 8, 10};
    vector<int> brr{2, 4, 12, 13};
    vector<int> ans;

    // Copy elements from arr that are not present in brr to ans
    for (int i = 0; i < arr.size(); i++) {
        int element1 = arr[i];
        bool found = false;

        // Check if element1 is present in brr
        for (int j = 0; j < brr.size(); j++) {
            int element2 = brr[j];
            if (element1 == element2) {
                found = true;
                brr[j] = INT_MIN; // Mark the element as INT_MIN to avoid duplicates
                break;
            }
        }

        if (!found) {
            ans.push_back(element1);
        }
    }

    // Copy elements from brr that are not present in arr to ans
    for (int i = 0; i < brr.size(); i++) {
        int element2 = brr[i];
        if (element2 != INT_MIN) {
            ans.push_back(element2);
        }
    }

    // Print the result
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
