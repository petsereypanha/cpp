#include"header.h"
int main(){
    int rows,col,id[5][5];
    string name[5][5],gender[5][5],phone[5][5];
    cout << endl << "Input Row  : "; cin >> rows;
    cout << "Input Col  : "; cin >> col;
    for(int i=0; i < rows; i++){
        for(int j=0; j < col; j++){
            cout << endl << "Input User ID    : "; cin >> id[i][j];
            cout << "Input User Name  : "; cin >> name[i][j];
            cout << "Input User Gender: "; cin >> gender[i][j];
            cout << "Input User Phone : "; cin >> phone[i][j];
        }
    }
    cout << endl;
    for(int i=0; i < rows; i++){
        for(int j=0; j < col; j++){
            cout << id[i][j] << "\t" << name[i][j] <<"\t"<< gender[i][j] <<"\t"<< phone[i][j] <<endl;
        }
    }

    return 0;
}
