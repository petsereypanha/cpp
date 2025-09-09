#include"header.h"
int main(){
    double *value;
    int number;
    double Data;
    cout << "Input Number : "; cin>>number;
    value = (double*)malloc(number*sizeof(double));
    if(!value){
        cout << "Error Allocation ...!" << endl;
        exit(0);
    }
    for(int i = 0; i < number; i++){
        cout << "Input Data Value : ";
        cin >> *(value+i);
        Data += *(value+i);
    }
    cout << "Output Data : " << Data << endl;
    free(value);
    return 0;
}