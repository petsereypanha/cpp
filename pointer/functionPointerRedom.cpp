#include"header.h"
#include<time.h>
float *Random(){
    static float arr[10];
    srand((unsigned)time(NULL));
    for(int i = 0; i < 1; i++){
        arr[i] = rand() % 100;
        // cout << arr[i]  << endl;
    }
    return arr;
}
int main(){
    float *pointer;
    pointer = Random();
    for(int i = 0; i < 1; i++){
        cout << "Pointer Radom   " << i+1 << " : " << *(pointer + i) << endl;
    }
    return 0;
}
