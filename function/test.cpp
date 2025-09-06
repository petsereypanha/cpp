#include<iostream>
using namespace std;
void functionHello(){
    cout << "Hello Function" << endl;
}
// @ void non return value
void DataFunction(){
    int n,sum=0;
    cout << "Input Number : "; cin >> n;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout << "Sum.  : " << sum << endl;
}
int main(){
    system("clear");
    // for(int i = 0; i < 9; i++){
    //      functionHello();
    // }
    DataFunction();
    functionHello();
    return 0;
}