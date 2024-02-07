// input = [1,2,3,4,5,6,7,8]
// op = [1,8,2,7,3,6,4,5]

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    for (int i = 0;i<=n;i++){
        swap(arr[i+1],arr[n-i]);
    }
    for (int i =0 ; i<n;i++){    

    cout<<"new array is" << arr << endl;
    }
}