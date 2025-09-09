#include"header.h"
int main(){
    // string *data;
    char *data;
    int number;
    // cout << "Input Element of Number : ";
    // cin >> number;

    // data = (char *)malloc(number*sizeof(char));

    // cout << "\nInput Pointer  : "; cin >> *(data);

    // cout << "\nOutput Pointer : " << *(data) << endl;

    // clear memory  pointer data
    data = new char[20];
    cout << "Input Name  : ";cin >> data;
    cout << "Output Name : " << data <<endl;

    free(data);
    return 0;
}