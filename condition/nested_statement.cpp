#include"header.h"
int main(){
    system("clear");
    string pass,com_pass;
    cout << "Input Pass : ";cin>>pass;
    if(pass == "1220"){
        cout << "Input Com_Pass : ";cin>>com_pass;
        if(com_pass == "5000"){
            cout << "Login Successful" << endl;
        }else{
             cout << "Com_Password Exits" << endl;
        }
    }else{
        cout << "Password Exits" << endl;
    }
    return 0;
}