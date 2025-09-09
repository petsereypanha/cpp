#include"header.h"
int main(){
    system("clear");
    int *code,n,m,op,svalue;
    do{
        cout << "\n==============| MENU |=============" <<endl;
        cout << "1. Input " << endl;
        cout << "2. Output " << endl;
        cout << "3. Add " << endl;
        cout << "4. Search " << endl;
        cout << "5. Update " << endl;
        cout << "6. Delete " << endl;
        cout << "7. Exit " << endl;
        cout << "\nPlease Select One Option : ";
        cin >> op;
        if(op == 1){
            cout << "\nInput Number : "; cin >> n;
            code = (int *)calloc(n,sizeof(int *));
            cout << endl;
            for(int i = 0; i < n; i++){
                cout << "Input Value  "<< i+1 <<" : ";
                cin >> *(code + i);
            }
        }
        if(op == 2){
            cout << endl;
            for(int i = 0; i < n; i++){
                cout << "Output Value "<< i+1 <<" : " << *(code +i) << endl;
            }
        }
        if(op==3){
            cout << "\nInput Nnumber To Add  : "; cin >> m;
            code = (int*)realloc(code,m*sizeof(int*));
            cout << endl;
            for(int i = n; i < n+m; i++){
                cout << "Input Value  "<< i+1 <<" : ";
                cin >> *(code + i);
            }
            n = n+m;
        }
        if(op == 4){
            bool b = false;
            cout << "\nInput Value To Search : "; cin >> svalue;
            for(int i = 0; i < n; i++){
                if(svalue == *(code + i)){
                    cout << "\nOutput Value  "<< i+1 <<" : " << *(code+i) << endl ;
                    b=true;
                    break;
                }
            }
            if(b==false){
                cout << "\nSearch Not Found ..!" << endl;
            }
        }
        if(op == 5){
            bool b = false;
            cout << "\nInput Value To Search For Update: "; cin >> svalue;
            for(int i = 0; i < n; i++){
                if(svalue == *(code + i)){
                    cout << "\nInput Value  "<< i+1 <<" : ";
                    cin >> *(code + i);
                    cout << endl << "Update is SuccessFully ..!" <<endl;
                    b=true;
                    break;
                }
            }
            if(b==false){
                cout << "\nSearch Not Found ..!" << endl;
            }
        }
        if(op == 6){
            bool b = false;
            cout << "\nInput Value To Search For Delete: "; cin >> svalue;
            for(int i = 0; i < n; i++){
                if(svalue == *(code + i)){
                    for(int j = i; j < n; j++){
                        *(code+j) = *(code+j+1);
                    }
                    cout << endl << "Delete is SuccessFully ..!" <<endl;
                    n--;
                    b=true;
                    break;
                }
            }
            if(b==false){
                cout << "\nSearch Not Found ..!" << endl;
            }
        }
    }while(op != 7);
    free(code);
    return 0;
}