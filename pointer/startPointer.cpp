#include"header.h"
int main(){
    int *ptr,*ptrs;
    int data = 50,value = 100;
    ptr = &data;
    ptrs = &value;
    cout << "Pointer One + Pointer Two : "<< *ptr + *ptrs << endl;
    cout << "Pointer One + Pointer Two : "<< *ptr * *ptrs << endl;
    cout << "Pointer One + Pointer Two : "<< *ptr - *ptrs << endl;

    cout << "Pointer One + Pointer Two : "<< &ptr << " + " <<  &ptrs << endl;

    return 0;
}