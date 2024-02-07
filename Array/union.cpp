#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int sizea=5;
    int brr[] = {2,3,4,6,7,8};
    int sizeb=6;

    vector<int> ans;

    int i = 0, j = 0;
    while (i < sizea && j < sizeb) {
        if (arr[i] < brr[j]) {
            ans.push_back(arr[i]);
            i++;
        } else if (arr[i] > brr[j]) {
            ans.push_back(brr[j]);
            j++;
        } else {
            ans.push_back(arr[i]);
            i++;
            j++;
        }
    }

    // If there are remaining elements in arr or brr
    while (i < sizea) {
        ans.push_back(arr[i]);
        i++;
    }
    while (j < sizeb) {
        ans.push_back(brr[j]);
        j++;
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
