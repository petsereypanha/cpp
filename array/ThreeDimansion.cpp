#include"header.h"
int main(){
    int arr[3][2][4]={
        {// Block
            {11,22,33,44},
            {31,54,37,37}
        },
        {// Block
            {71,27,27,90},
            {26,57,23,65}
        },
        {// Block
            {11,99,23,77},
            {25,34,65,82}
        }
    };
    // cout << "Three Dimension  : " << arr[0][1][0] << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 4; k++){
                cout << "  "<< arr[i][j][k];
            }
            cout << endl;
        }
    }
    return 0;
}