#include"./index.h"
class User{
    private:
        int id,age;
        char name[20];
        float salary;
    public:
        void Output();
};
void User::Output(){
    cout << endl << " Student ID    : " << id
                 << " \tName        : " << name
                 << " \tAge         : " << age
                 << " \tSalary      : " << salary << " $" << endl;
};
int main(){
    fstream file;
    User obj;

    file.open("./data_text/user.txt",ios::in);
      if(!file){
        cout << "Create File Not Found ..!" << endl;
        exit(0);
    }
    file.read((char*)&obj, sizeof(obj));
    while (!file.eof()){
        obj.Output();
        file.read((char*)&obj, sizeof(obj));
    }

    file.close();
    return 0;
}