#include"header.h"
int main(){
    char op;
    cout << endl << "Please Select One Option : ";
    cin >> op;  // a , b , c
    switch(op) {
        case 'a':
        case 'A':{
            cout << "\nOption  A " << endl;
        }break;
        case 'b':
        case 'B':{
            cout << "\nOption  B " << endl;
        }break;
        case 'c':
        case 'C':{
            cout << "\nOption  C " << endl;
        }break;
    }
    return 0;
}