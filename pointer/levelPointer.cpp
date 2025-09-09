#include"header.h"
int main(){
    system("clear");

    int value = 201,data = 500;
    int *p1,**p2,***p3,****p4;

    p1 = &value;
    p2 = &p1;
    p3 = &p2;
    p4 = &p3;

    cout << "Display Value               : " << value << endl;
    cout << "Display Pointer level One   : " << *p1 << endl;
    cout << "Display Pointer level Two   : " << **p2 << endl;
    cout << "Display Pointer level Three : " << ***p3 << endl;
    cout << "Display Pointer level Four  : " << ****p4 << endl;
    cout << "Display Pointer Sum         : " << ****p4+***p3+**p2+*p1 << endl;
    cout << "Display Pointer (P1 x P2 )  : " << ((*p1)*(**p2)) << endl;

    **p3 = &data;

    cout << "\nDisplay Pointer level Four  : " << ****p4 << endl;
    cout << "Display Pointer level Three : " << ***p3 << endl;
    cout << "Display Pointer level Two   : " << **p2 << endl;
    cout << "Display Pointer level One   : " << *p1 << endl;
    cout << "Display Data                : " << data << endl;
    cout << "Display Pointer (P1 x P2 )  : " << ((*p1)*(**p2)) << endl;
    cout << "Display Pointer Sum         : " << ****p4+***p3+**p2+*p1 << endl;

    return 0;
}