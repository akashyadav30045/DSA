#include <iostream>
using namespace std;

// take 5 element input in array and print therir doubles.


int main() {

    // array initliaze

    int arr[500];

    int n;

    cout<<"How many numbes are there" << endl;

    cin>>n;
    cout<<"Enter the  numbers" <<endl;
    for (int i =0; i<n ; i++){
        cin>>arr[i];
    }
  for (int i =0; i<5 ; i++){
    cout<<2*arr[i]<<",";
  }
}   