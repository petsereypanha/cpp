#include"head.h"
struct Product{
    int id,qty;
    char *name;
    float price;
}tem;
void Header();
float Total(Product object[],int n);
float Discount(Product object[],int n);
float Payment(Product object[],int n);
void Input(Product object[],int n);
void Output(Product object[],int n);
int SearchId(Product object[],int param,int n);
int SearchName(Product object[],char* param,int n);
void SortByID(Product object[],int n);
int main(){
    system("clear");
    Product obj[10];
    int opn,n,sid,m;
    char opc;
    char *sname;
    Again:
        cout << endl << "=============| MENU |=============" <<endl;
        cout << "   A. Input " << endl;
        cout << "   B. Output " <<endl;
        cout << "   C. Search " <<endl;
        cout << "   D. Update " <<endl;
        cout << "   E. Delete " <<endl;
        cout << "   F. Sort " <<endl;
        cout << "   G. Add  " <<endl;
        cout << "   H. Exit  " <<endl;
        cout << "Please Select One Option : ";cin >> opc;
        switch(opc){
            case 'A':
            case 'a':{
                cout << endl << "Input Element Of Product : ";
                cin >> n;
                for(int i = 0; i < n; i++){
                    Input(obj,i);
                }
            }break;
            case 'B':
            case 'b':{
                Header();
                for(int i = 0; i < n; i++){
                    Output(obj,i);
                }
            }break;
            case 'C':
            case 'c':{
                do{
                    cout << endl << "=============| MENU SEARCH |=============" <<endl;
                    cout << "   1. Search By ID " << endl;
                    cout << "   2. Search By Name " <<endl;
                    cout << "   3. Exit " <<endl;
                    cout << "Please Select One Option : ";cin >> opn;
                    if(opn == 1){
                        cout << "\n Input ID To Search : ";cin >> sid;
                        int index = SearchId(obj,sid,n);
                            if (index == -1){
                                cout << endl << "Search ID Is Not Found ..!" << endl;
                            }else{
                                Header();
                                Output(obj,index);
                                cout << endl << "Search Successful ..!" << endl;
                            }
                    }
                    if (opn == 2){
                        sname = new char[25];
                        cout << "\n Input Name To Search : ";cin >> sname;
                        int index = SearchName(obj,sname,n);
                            if (index == -1){
                                cout << endl << "Search Name Is Not Found ..!" << endl;
                            }else{
                                Header();
                                Output(obj,index);
                                cout << endl << "Search Successful ..!" << endl;
                            }
                    }

                }while(opn != 3);
            }break;
            case 'D':
            case 'd':{
                do{
                    cout << endl << "=============| MENU SEARCH |=============" <<endl;
                    cout << "   1. Search By ID For Upadete" << endl;
                    cout << "   2. Search By Name For Upadete" <<endl;
                    cout << "   3. Exit " <<endl;
                    cout << "Please Select One Option : ";cin >> opn;
                    if(opn == 1){
                        cout << endl << "Input ID To Search For Update : ";cin >> sid;
                        int index = SearchId(obj,sid,n);
                            if (index == -1){
                                cout << endl << "Search ID Is Not Found ..!" << endl;
                            } else {
                                Input(obj,index);
                                cout << endl << "Update Is Successful ..!" << endl;
                            }
                    }
                    if(opn == 2){
                        sname = new char[25];
                        cout << endl << "Input Name To Search For Upadete : ";cin >> sname;
                        int index = SearchName(obj,sname,n);
                            if(index == -1){
                                cout << endl << "Search ID Is Not Found ..!" << endl;
                            } else {
                                Input(obj,index);
                                cout << endl << "Update Is Successful ..!" << endl;
                            }
                    }
                }while(opn != 3);
            }break;
            case 'E':
            case 'e':{
                do{
                    cout << endl << "=============| MENU SEARCH |=============" <<endl;
                    cout << "   1. Search By ID For Delete" << endl;
                    cout << "   2. Search By Name For Delete" <<endl;
                    cout << "   3. Exit " <<endl;
                    cout << "Please Select One Option : ";cin >> opn;
                    if(opn == 1){
                        cout << endl << "Input ID To Search For Delete : ";cin >> sid;
                        int index = SearchId(obj,sid,n);
                            if (index == -1){
                                cout << endl << "Search ID Is Not Found ..!" << endl;
                            } else {
                                for(int j = index; j < n; j++){
                                    obj[j] = obj[j+1];
                                }
                                n--;
                                cout << endl << "Delete Is Successful ..!" << endl;
                            }
                    }
                    if(opn == 2){
                        sname = new char[25];
                        cout << endl << "Input Name To Search For Upadete : ";cin >> sname;
                        int index = SearchName(obj,sname,n);
                            if(index == -1){
                                cout << endl << "Search ID Is Not Found ..!" << endl;
                            } else {
                                for(int j = index; j < n; j++){
                                    obj[j] = obj[j+1];
                                }
                                n--;
                                cout << endl << "Delete Is Successful ..!" << endl;
                            }
                    }
                }while(opn != 3);
            }break;
            case 'F':
            case 'f':{
                do{
                    cout << endl << "=============| MENU SORT |=============" <<endl;
                    cout << "   1. Sort By ID " << endl;
                    cout << "   2. Sort By Name " <<endl;
                    cout << "   3. Exit " <<endl;
                    cout << "Please Select One Option : ";cin >> opn;
                    if(opn == 1){
                       SortByID(obj,n);
                    }
                    if(opn == 2){
                        for(int i = 0; i < n; i++){
                            for(int j = i+1; j < n; j++){
                                if(strcmp(obj[i].name,obj[j].name)>0){
                                    tem = obj[i];
                                    obj[i] = obj[j];
                                    obj[j] = tem;
                                }
                            }
                        }
                        cout << endl << "Sort Is Successful ..!" <<endl;
                    }
                }while(opn != 3);
            }break;
            case 'G':
            case 'g':{
                cout << endl << "Input Element To Add : "; cin >> m;
                for(int i = n; i < n+m; i++){
                    Input(obj,i);
                }
                n = n+m;
                cout << endl << "Add Is Successful ..!" <<endl;
            }break;
            case 'H':
            case 'h':{
                exit(0);
            }break;
        }
    if(getchar() == 10) goto Again;
    free(obj->name);
    free(sname);
    return 0;
}
void Header(){
    cout << endl << setw(10) << "ID" << setw(10) << "Name"
         << setw(10) << "Qty" << setw(10) << "Price"
         << setw(10) << "Tota" << setw(10) << "Discount"
         << setw(11) << "Payment\n" <<endl;
}
float Total(Product object[],int n){
    return (object[n].price * object[n].qty);
}
float Discount(Product object[],int n){
    return (
        (Total(object,n) > 0 && Total(object,n) <= 100)? 0.1:
        (Total(object,n) > 100 && Total(object,n) <= 200)? 0.15:
        (Total(object,n) > 200 && Total(object,n) <= 500)? 0.2:
        (Total(object,n) > 500 && Total(object,n) <= 700)? 0.25: 0.30
    );
};
float Payment(Product object[],int n){
    return (
        Total(object,n) - (Total(object,n)*Discount(object,n))
    );
};
void Input(Product object[],int n){
        cout << endl << "Input ID     : "; cin >> object[n].id;
        object[n].name = new char[25];
        cout << "Input Name   : "; cin.ignore();cin.getline(object[n].name,25);
        cout << "Input Qty    : "; cin >> object[n].qty;
        cout << "Input Price  : "; cin >> object[n].price;
}
void Output(Product object[],int n){
        cout << setw(10) << object[n].id << setw(10) << object[n].name
            << setw(10) << object[n].qty << setw(9) << object[n].price << "$"
            << setw(9) << Total(object,n) << "$" << setw(10) << Discount(object,n)
            << setw(9) << Payment(object,n) << "$" <<endl;
}
int SearchId(Product object[],int param,int n){
    int index = -1;
    for(int i = 0; i < n; i++){
        if(param == object[i].id){
            index = i;
        }
    }
    return index;
}
int SearchName(Product object[],char* param,int n){
    int index = -1;
    for(int i = 0; i < n; i++){
        if(strcmp(param , object[i].name)==0){
            index = i;
        }
    }
    return index;
}
void SortByID(Product object[],int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(object[i].id > object[j].id){
                tem = object[i];
                object[i] = object[j];
                object[j] = tem;
            }
        }
    }
    cout << endl << "Sort Is Successful ..!" <<endl;
}