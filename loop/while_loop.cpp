#include"header.h"
int main(){
    system("clear");
    int n;
    cout << "\n Input Number : ";
    cin >> n;
    int i = 0;
    while(i < n){
        cout << i << endl;
        i = i+3;
    }
    return 0;
}
/*
    i = 0; 0<9;i= 0+3
    i = 3; 3<9;i= 3+3
    i = 6; 6<9;i= 6+3
    i = 9; 9<9   x

*/