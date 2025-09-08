#include"header.h"
int main(){
    system("clear");
    int a[5] = {11,22,33,44,66},i;
    // array[0,1,2,3,4];
    cout << "Display    : " << a[0] <<endl;
    cout << "Display    : " << a[4] <<endl;
    for(i = 0; i < 5; i++){
        cout << "Display  index[" << i <<"]  : " << a[i] <<endl;
    }
    return 0;
}