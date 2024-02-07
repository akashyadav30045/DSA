#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int sizea=5;
    int brr[] = {2,3,4,6,7,8};
    int sizeb=6;

    vector<int> ans;

    for (int i=0; i<sizea; i++){
        int element = arr[i]; // corrected variable name
        for (int j=0; j<sizeb; j++) { // corrected loop variable
            if (element == brr[j]){ // corrected comparison operator
                brr[j] = -1;
                ans.push_back(element);
            }
        }
    }
    
    for (auto value : ans){
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
