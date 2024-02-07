#include <iostream>
using namespace std;


int main() {


    int arr[] =  {0,1,1,0,1,0,1,0};
    int size = 8;
    int count0=0;
    int count1 =0;
    for (int i=0 ; i<size; i++) {
        if (arr[i] == 0){
            count0++;
        }
        if (arr[i] ==1) {
            count1++;
        }
    }
    cout<<"number of zeroes" <<count0 <<endl;
        cout<<"number of Ones" <<count1 <<endl;

}