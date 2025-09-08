#include"header.h"
//  #include<conio.h> for windown
void HeaderDisplay();
int main(){
    system("clear");
    int code[10],qty[10];
    string name[10];
    float price[10],tax[10],discount[10],total[10],payment[10];
    int n,scode,op1,i;
    string sname;
    char op;
    Again:
        cout << endl << "=============| MENU |=============" << endl;
        cout << "A. Input " << endl;
        cout << "B. Output " << endl;
        cout << "C. Search " << endl;
        cout << "D. Update " << endl;
        cout << "E. Delete " << endl;
        cout << "F. Insert " << endl;
        cout << "G. Sort " << endl;
        cout << "H. Add " << endl;
        cout << "I.Exit " << endl;
        cout << "Please Select One Option : ";
        cin >> op;
        switch(op){
            case 'A':
            case 'a':{
                cout << endl << "Input Element Of Product :";
                cin >> n;
                for(int i = 0; i < n; i++){
                    cout << endl << "Input Code     : "; cin >> code[i];
                    cout << "Input Name     : "; cin >> name[i];
                    cout << "Input Qty      : "; cin >> qty[i];
                    cout << "Input Price    : "; cin >> price[i];
                    do{
                        cout << "Input Tax      : "; cin >> tax[i];
                        if(tax[i]<= 0 || tax[i]>=1)
                            cout << endl << "Please Input Tax Again (0 <= Tax <= 1) ..!" << endl << endl;
                    }while(tax[i]<= 0 || tax[i]>=1);

                    total[i] = (qty[i] * price[i]) + (tax[i] * price[i]);

                    if(total[i] > 0 && total[i] <=100)
                        discount[i] = 0.05;
                    else if(total[i] > 100 && total[i] <=200)
                        discount[i] = 0.07;
                    else if(total[i] > 200 && total[i] <=300)
                        discount[i] = 0.10;
                    else if(total[i] > 300 && total[i] <=500)
                        discount[i] = 0.12;
                    else
                        if(total[i] > 500)
                            discount[i] = 0.15;

                    payment[i] = total[i] - (total[i] * discount[i]);
                }
            }break;
            case 'b':
            case 'B':{
                HeaderDisplay();
                for(i = 0; i < n; i++){
                    cout << setw(10) << code[i] << setw(10) << name[i]
                         << setw(10) << qty[i] << setw(10) << price[i]
                         << setw(10) << tax[i] << setw(10) << total[i]
                         << setw(10) << discount[i] << setw(10)
                         << payment[i] << "$" << endl;
                }
            }break;
            case 'c':
            case 'C':{
                system("clear");
                do{
                    cout << endl << "==================| MENU Seacrh |===================" << endl;
                    cout << "1. Search By ID " << endl;
                    cout << "2. Search By Name " << endl;
                    cout << "3. Exit " << endl;
                    cout << "Please Choose One Option : ";
                    cin >> op1;
                    if(op1 == 1){
                        bool b = false;
                        cout << endl << "Input ID To Search : ";
                        cin >> scode;
                        for(i = 0; i < n; i++){
                            if(scode == code[i]){
                                HeaderDisplay();
                                cout << setw(10) << code[i] << setw(10) << name[i]
                                    << setw(10) << qty[i] << setw(10) << price[i]
                                    << setw(10) << tax[i] << setw(10) << total[i]
                                    << setw(10) << discount[i] << setw(10)
                                    << payment[i] << "$" << endl;
                                b = true;
                            }
                        }
                        if(b == false){
                            cout << endl << "Search By ID IS Not Found ...!" << endl;
                        }
                    }
                    if(op1 == 2){
                        bool b = false;
                        cout << endl << "Input Name To Search : ";
                        cin >> sname;
                        for( i =0; i < n; i++){
                            if(sname == name[i]){
                                HeaderDisplay();
                                cout << setw(10) << code[i] << setw(10) << name[i]
                                    << setw(10) << qty[i] << setw(10) << price[i]
                                    << setw(10) << tax[i] << setw(10) << total[i]
                                    << setw(10) << discount[i] << setw(10)
                                    << payment[i] << "$" << endl;
                                b = true;
                            }
                        }
                        if(b == false){
                            cout << endl << "Search By Name IS Not Found ...!" << endl;
                        }
                    }
                }while(op1 != 3);
            }break;
            case 'd':
            case 'D':{
                bool b = false;
                cout << endl << "Input Name To Search For Update : ";
                cin >> sname;
                for(int i = 0;  i < n; i++){
                    if(sname == name[i]){
                        cout << endl << "Input Code     : "; cin >> code[i];
                        cout << "Input Name     : "; cin >> name[i];
                        cout << "Input Qty      : "; cin >> qty[i];
                        cout << "Input Price    : "; cin >> price[i];
                        do{
                            cout << "Input Tax      : "; cin >> tax[i];
                            if(tax[i]<= 0 || tax[i]>=1)
                                cout << endl << "Please Input Tax Again (0 <= Tax <= 1) ..!" << endl << endl;
                        }while(tax[i]<= 0 || tax[i]>=1);

                        total[i] = (qty[i] * price[i]) + (tax[i] * price[i]);

                        if(total[i] > 0 && total[i] <=100)
                            discount[i] = 0.05;
                        else if(total[i] > 100 && total[i] <=200)
                            discount[i] = 0.07;
                        else if(total[i] > 200 && total[i] <=300)
                            discount[i] = 0.10;
                        else if(total[i] > 300 && total[i] <=500)
                            discount[i] = 0.12;
                        else
                            if(total[i] > 500)
                                discount[i] = 0.15;

                        payment[i] = total[i] - (total[i] * discount[i]);
                        b = true;
                    }
                }
                if(b == false){
                    cout << endl << "Search By Name IS Not Found ...!" << endl;
                }else{
                    cout << endl << "Update Product Successful..!" << endl;
                }
            }break;
            case 'e':
            case 'E':{
                bool b = false;
                cout << endl << "Input Name To Search For Delete : ";
                cin >> sname;
                for(int i = 0; i < n; i++){
                    if(sname == name[i]){
                        for(int j = i; j < n; j++){
                            code[j] = code[j+1];
                            name[j] = name[j+1];
                            qty[j] = qty[j+1];
                            price[j] = price[j+1];
                            tax[j] = tax[j+1];
                            total[j] = total[j+1];
                            discount[j] = discount[j+1];
                            payment[j] = payment[j+1];
                        }
                        n--;
                        b = true;
                    }
                }
                if(b == false){
                    cout << endl << "Search By Name IS Not Found ...!" << endl;
                }else{
                    cout << endl << "Delete Product Successful..!" << endl;
                }
            }break;
            case 'f':
            case 'F':{
                bool b = false;
                cout << endl << "Input Id To Search For Insert : ";
                cin >> scode;
                for(i = 0; i < n; i++){
                    if(scode == code[i]){
                        for(int j = n; j > i; j--){
                            code[j] = code[j-1];
                            name[j] = name[j-1];
                            qty[j] = qty[j-1];
                            price[j] = price[j-1];
                            tax[j] = tax[j-1];
                            total[j] = total[j-1];
                            discount[j] = discount[j-1];
                            payment[j] = payment[j-1];
                        }
                        n++;// n = n+1;
                        cout << endl << "Input Code     : "; cin >> code[i];
                        cout << "Input Name     : "; cin >> name[i];
                        cout << "Input Qty      : "; cin >> qty[i];
                        cout << "Input Price    : "; cin >> price[i];
                        do{
                            cout << "Input Tax      : "; cin >> tax[i];
                            if(tax[i]<= 0 || tax[i]>=1)
                                cout << endl << "Please Input Tax Again (0 <= Tax <= 1) ..!" << endl << endl;
                        }while(tax[i]<= 0 || tax[i]>=1);

                        total[i] = (qty[i] * price[i]) + (tax[i] * price[i]);

                        if(total[i] > 0 && total[i] <=100)
                            discount[i] = 0.05;
                        else if(total[i] > 100 && total[i] <=200)
                            discount[i] = 0.07;
                        else if(total[i] > 200 && total[i] <=300)
                            discount[i] = 0.10;
                        else if(total[i] > 300 && total[i] <=500)
                            discount[i] = 0.12;
                        else
                            if(total[i] > 500)
                                discount[i] = 0.15;

                        payment[i] = total[i] - (total[i] * discount[i]);

                        b = true;
                        break;
                    }
                }
                if(b == false){
                    cout << endl << "Search By Id IS Not Found ...!" << endl;
                }else{
                    cout << endl << "Insert Product Successful..!" << endl;
                }
            }break;
            case 'g':
            case 'G':{
                bool b = false;
                int tem_code,tem_qty;
                string tem_name;
                float tem_price,tem_tax,tem_discount,tem_total,tem_payment;
                for(i = 0; i < n; i++){
                    for(int j = i+1; j < n; j++){
                        if(code[i] > code[j]){
                            tem_code = code[i];
                            code[i]  = code[j];
                            code[j]  = tem_code;

                            tem_name = name[i];
                            name[i]  = name[j];
                            name[j]  = tem_name;

                            tem_qty  = qty[i];
                            qty[i]   = qty[j];
                            qty[j]   = tem_qty;

                            tem_price = price[i];
                            price[i]  = price[j];
                            price[j]  = tem_price;

                            tem_tax   = tax[i];
                            tax[i]    = tax[j];
                            tax[j]    = tem_tax;

                            tem_discount = discount[i];
                            discount[i]  = discount[j];
                            discount[j]  = tem_discount;

                            tem_total = total[i];
                            total[i]  = total[j];
                            total[j]  = tem_total;

                            tem_payment = payment[i];
                            payment[i]  = payment[j];
                            payment[j]  = tem_payment;
                            b=true;
                        }
                    }
                }
                if(b == false){
                    cout << endl << "Search By Id IS Not Found ...!" << endl;
                }else{
                    cout << endl << "Insert Product Successful..!" << endl;
                }
            }break;
            case 'h':
            case 'H':{
                bool b = false;
                int m;
                cout << endl << "Input Number To Add : ";
                cin >> m;
                for(int i = n; i < n+m; i++){
                    cout << endl << "Input Code     : "; cin >> code[i];
                    cout << "Input Name     : "; cin >> name[i];
                    cout << "Input Qty      : "; cin >> qty[i];
                    cout << "Input Price    : "; cin >> price[i];
                    do{
                        cout << "Input Tax      : "; cin >> tax[i];
                        if(tax[i]<= 0 || tax[i]>=1)
                            cout << endl << "Please Input Tax Again (0 <= Tax <= 1) ..!" << endl << endl;
                    }while(tax[i]<= 0 || tax[i]>=1);

                    total[i] = (qty[i] * price[i]) + (tax[i] * price[i]);

                    if(total[i] > 0 && total[i] <=100)
                        discount[i] = 0.05;
                    else if(total[i] > 100 && total[i] <=200)
                        discount[i] = 0.07;
                    else if(total[i] > 200 && total[i] <=300)
                        discount[i] = 0.10;
                    else if(total[i] > 300 && total[i] <=500)
                        discount[i] = 0.12;
                    else
                        if(total[i] > 500)
                            discount[i] = 0.15;

                    payment[i] = total[i] - (total[i] * discount[i]);
                    b=true;
                }
                if(b == false){
                    cout << endl << "Search By Id IS Not Found ...!" << endl;
                }else{
                    n += m;
                    cout << endl << "Insert Product Successful..!" << endl;
                }
            }break;
            case 'i':
            case 'I':{
                exit(0);
            }break;
        }
    if(getchar() == 10) goto Again;
    // if student using windown {if(getch() == 13) goto Again;}
    return 0;
}
void HeaderDisplay(){
    cout<< endl << setw(10) << "Code" << setw(10) << "Name"
        << setw(10) << "Qty" << setw(10) << "Price"
        << setw(10) << "Tax" << setw(10) << "Total"
        << setw(10) << "Discout" << setw(10)
        << "Payment\n" << endl;
}


/*

    [11,22,33,44,55]
    [0 ,1 ,2 ,3 ,4 ]
    [a ,b ,c ,d ,e ]

    c = d;
    d = e;
    [11,22,44,55,55]

    [11,22,44,55]
    [0 ,1 ,2 ,3]

*/

// [{code1,name1,price1},{code2,name2,price2}]

// n = n -1;
// n--;

/*
    insert
    [11,22,44,77];   n = 4
    [0, 1, 2, 3]
    c=55;

    [11,22,55,44,77]
    [0, 1, 2, 3, 4]

for(i = 0; i < 4; i++){
    if(44==number[i]){
        for(int j = 4; j >= i; j--){
            number[j] = number[j-1];
        }
        n++;
        Input();
    }
}
// loop 1
    if(44==number[2]){
        for(int j = 4; 4 > 2; j--){
            number[4] = number[4-1];  =>number[4] = number[3];

                [11,22,44,77,0]
                [0 , 1, 2, 3,4]

             => [11,22,44,77,77]
                [0 , 1, 2, 3,4]
        }

        for(int j = 3; 3 > 2; j--){
            number[3] = number[3-1]; =>number[3] = number[2]

                [11,22,44,77,77]
                [0 , 1, 2, 3,4]

             => [11,22,44,44,77]
                [0 , 1, 2, 3,4]
        }

        n++;
        Input(){
            cout << "Input :"; cin >> 55;
        };

        => [11,22,55,44,77]
        [0 , 1, 2, 3,4]
    }
*/

/*
 code index [0,1,2,3,4,5] = value [11,22,44,33,66,55] => sort => [11,22,33,44,55,66]
 [11,22,44,33,66,55] => [11,22,33,44,55,66]
 name index [0,1,2,3,4,5] = value [aa,bb,cc,dd,ee,ff] => sort =>  [aa,bb,dd,cc,ff,ee]
 price [0,1,2,3,4,5]
*/