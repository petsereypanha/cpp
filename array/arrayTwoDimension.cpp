#include"header.h"
int main(){
    int arr[4][2] = {
        {12,34} // row index 0
        ,{24,55} // row index 1
        };

    cout << "Array Row 1 Value One :" << arr[0][0] << "  Value Two : " << arr[0][1]<< endl;
    cout << "Array Row 2 Value One :" << arr[1][0] << "  Value Two : " << arr[1][1]<< endl;

    return 0;
}