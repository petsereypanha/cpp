#include<iostream>
using namespace std;
void money(double money){
    int i,n;
    char c_op[10];
    float Cash_return=0,Cash_recive=0;
    cout << " Amount  :  " << money << " $" << endl;;
    cout << " Amount  :  " << money*4100 <<   " ៛"  << endl;;
    cout << " Do you wanna pay by USD or KHR ?" << endl;
    cout << "  -> BY : "; cin >> c_op;
    if(strcmp(c_op,"USD")==0){
        cout << " Cash Recieve  : "; cin >> Cash_recive;
        Cash_return = Cash_recive - money;
        if(Cash_recive<money){
            cout << "Your Money is  Lower" << endl;
        }else{
            cout << " Cash Return   : " << Cash_return  << "$"<< endl;
        }
    }
    if(strcmp(c_op,"KHR")==0){
        cout << " Cash Recieve  : "; cin >> Cash_recive;
        Cash_return = Cash_recive - money*4100;
        if(Cash_recive<money){
            cout << "Your Money is  Lower" << endl;
        }else{
            cout << " Cash Return   : " << Cash_return  << "៛"<< endl;
        }
    }
}
int main(){
    int op;
    do{
        cout << "___________| Menu |______________" << endl;
        cout << "1   Ice  Late" << endl;
        cout << "2   Milk Tea" << endl;
        cout << "3   Water " << endl;
        cout << "4   Exit " << endl;
        cout << "Choose Your Favorite : "; cin >> op;
        switch (op){
            case 1:{
                cout << " Ice Late" << endl;
                cout << " Price:  3$" << endl;
                money(3);
            }break;
            case 2:{
                cout << " Milk Tea" << endl;
                cout << " Price:  2.5$" << endl;
                money(2.5);
            }break;
            case 3:{
                cout << " Water" << endl;
                cout << " Price:  0.5$" << endl;
                money(0.5);
            }break;
            case 4:{
                exit(0);
            }break;
        }
    }while (op!=4);
    
    return 0;
}