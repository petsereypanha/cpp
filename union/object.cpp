#include<iostream>
#include<iomanip>
using namespace std;
union Category{
    char id;
    char name[20];
    char des[40];
}obj;
int main(){
    obj.id = '1';
    cout << obj.id << endl;
    strcpy(obj.name,"Computer");
    cout << obj.name << endl;
    stpcpy(obj.des,"Computer Category");
    cout << obj.des << endl;
    cout << endl;
    cout << "ID" << setw(20) << "Name" << setw(20) << "Des" << endl;
    cout << obj.id << setw(20) << obj.name << setw(20) << obj.des <<endl;
    return 0;
}

/*
/ Structure
    struct name{
        int id;  id = 4byte;
        string name; name = 24byte;
        float salary; salary = 4byte;
    }
    name object_struct[5];

    object_struct = {
        { // index 0
            sum = 4+24+4 = 28byte
        },
        { // index 1
            sum = 4+24+4 = 28byte
        }
    } sums = 56byte


/ Union
    union name {
        int id;  id = 4byte;
        string name; name = 24byte;
        float salary; salary = 4byte;
    }

    name object_union[5];
    object_union = {
        { index = 0;
            sum = 24byte;
        },
        { index = 1
            sum = 24byte;
        }
    } sum = 48byte;
*/



union Persion{
    int id;
    char name[40];
    char gender[10];
    double salary;
};
