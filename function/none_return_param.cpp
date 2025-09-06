#include"header.h"
void Display();
// void Display(){};
int main(){
    system("clear");
    Display();
    return 0;
}
void Display(){
    // 1 + 1/2^2 + 1/3^3 + ... +1/n^n
    float sum = 0,value;
    int n;
    cout << "Input Number : ";cin >> n;
    for(int i = 1; i <= n; ++i){
        value = 1 / pow(i,i);
        sum += value;
    }
    cout << "Sum Of All Data : " << sum << endl;
}