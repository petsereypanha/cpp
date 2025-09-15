#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i,n;
    string op;
    double riel,dollar,bath;
    do{
        cout << endl << " A. Riel -> Dollar" << endl;
        cout << " B. Dollar -> Riel" << endl;
        cout << " C. Riel -> Bath" << endl;
        cout << " D. Exit" << endl;
        cout << " Please Select One Option  :";
        cin >> op;
        switch(op[0]){
            case 'a':
            case 'A':{
                cout << endl << " Input Money Riel You Want To Change :"; 
                cin >> riel;
                dollar = riel/4100;
                cout << " Money Reil " << riel <<"៛"<<"  Change To Money Dollar  " << setprecision(3) << dollar << "$" <<  endl;
            }break;
            case 'b':
            case 'B':{
                cout << endl << " Input Money Dolla You Want To Change :"; 
                cin >> dollar;
                riel = dollar*4100;
                cout << " Money Dollar " << dollar <<"$"<<"  Change To Money Riel  " << setprecision(9) << riel << "៛" << endl;
            }break;
            case 'c':
            case 'C':{
                cout << endl << " Input Money Riel You Want To Change :"; 
                cin >> riel;
                bath = riel*0.0085;
                cout << " Money Riel " << riel <<"៛"<<"  Change To Money Bath  " << setprecision(3) << bath << "฿" << endl;
            }break;
            case 'd':
            case 'D':{
                exit(0);
            }break;
        }
    }while(getchar()==10);
    return 0;
}