#include"header.h"
void Diplay(int *value){    // passby reference
    *value +=  50;
    cout << "Value In Func : " << *value << endl;
}
void Diplay(int value){     // passby value
    value += 150;
    cout << "Value In Func : " << value << endl;
}
int main(){
    system("clear");
    int data = 30;
    cout << "Value Before : " << data << endl;
    Diplay(data);
    cout << "Value After  : " << data << endl;
     cout << "Value Before : " << data << endl;
    Diplay(&data);
    cout << "Value After  : " << data << endl;
    return 0;
}