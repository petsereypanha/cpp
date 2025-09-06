#include"header.h"
void OutputData(int n); // 7
int main(){
    system("clear");
    int number;
    cout << "Input Number : "; cin >> number;
    OutputData(number); // 7
    return 0;
}
void OutputData(int n){ // 7
    for(int i = 1 ; i <= n ; i++){ // n = 7
        cout << i << " ";
    }
    cout << endl;
}