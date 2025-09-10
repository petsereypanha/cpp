#include<iostream>
#include<iomanip>
using namespace std;
template<typename T>
T SumData(T a,T b){
    return (
        a+b
    );
}
int main(){
    system("clear");
    int a=10,b=20;
    cout << "Function Integer  : "<< SumData<int>(a,b) << endl;
    float x=45.6F,y=87.5F;
    cout << "Function Float    : "<< SumData<float>(x,y) << endl;
    return 0;
}