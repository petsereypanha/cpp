#include"./index.h"
int main(){
    fstream name;
    char value;
    name.open("NIT.txt",ios::in);
    cout << endl;
    while(!name.eof()){
        name >> value;
        cout << value;
    }
    cout << endl;
    name.close();
    return 0;
}