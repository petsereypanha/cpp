#include"header.h"
int main(){
    system("clear");
    char op;
    Again:
        cout << "\n============| Menu |=============" << endl;
        cout << "Option A" << endl;
        cout << "Option B" << endl;
        cout << "Option C" << endl;
        cout << "Option D Exist" << endl;
        cout << "Please Select Option : ";
        cin >> op;
        switch(op){
            case 'a':
            case 'A':{
                cout << "\nHello Case One" << endl;
            }break;
            case 'b':
            case 'B':{
                cout << "\nHello Case Two" << endl;
            }break;
            case 'c':
            case 'C':{
                cout << "\nHello Case Three" << endl;
            }break;
            case 'd':
            case 'D':{
                exit(1);
            }break;
        }
    if(getchar() == 10) goto Again;

    /*
        getchar() == 10 (return) for macos

        getch() == 27 (esc) for window
        getch() == 13 (enter) for window
    */

    return 0;
}