#include"../index.h"
// @Class Hotel
class Hotel{
    private:
        int roomId,level,num_day;
        float price,tax;
    public:
        Hotel();
        Hotel(int _roomId,int _level,int _num_day,float _price,float _tax);
        void Input();
        void Header();
        void Output();
        float Total();
        float Discount();
        double Payment();
        int getRoomId();
        int getLevel();
        void setPrice(float _price);
        void setNumDay(int _num_day);
};
// @Main Function
int Search(Hotel obj[],int n,int sIdRoom);
int main(){
    system("clear");
    Hotel obj[10],temp;
    Hotel obj1;
    Hotel obj2(1,0,2,12.5,2);
    int n,sIdRoom;
    char op;
    do{
        Menu_Char();
        cin >> op;
        switch(op){
            case 'a':
            case 'A':{
                obj1.Header();
                obj1.Output();
                obj2.Output();
            }break;
            case 'b':
            case 'B':{
                cout << endl << "Input Number : "; cin >> n;
                for(int i = 0; i < n; i++){
                    obj[i].Input();
                }
            }break;
            case 'c':
            case 'C':{
                obj1.Header();
                for(int i = 0; i < n; i++){
                    obj[i].Output();
                }
            }break;
            case 'd':
            case 'D':{
                cout << endl << "Input Room Id To Search : ";
                cin >> sIdRoom;
                int index = Search(obj,n,sIdRoom);
                if(index == -1){
                    cout << endl << "Room Not Found ..!" << endl;
                }else{
                    obj1.Header();
                    obj[index].Output();
                }
            }break;
            case 'E':
            case 'e':{
                int day;
                float s_price;
                cout << endl << "Input Room Id To Search For Update : ";
                cin >> sIdRoom;
                int index = Search(obj,n,sIdRoom);
                if(index == -1){
                    cout << endl << "Room Not Found ..!" << endl;
                }else{
                    // obj[index].Input();
                    cout << endl << "Input Num Day To Update : "; cin >> day;
                    cout << endl << "Input Price   To Update : "; cin >> s_price;
                    obj[index].setNumDay(day);
                    obj[index].setPrice(s_price);
                    cout << endl << "Update Is Success ...!" << endl;
                }
            }break;
            case 'F':
            case 'f':{
                cout << endl << "Input Room Id To Search For Search : ";
                cin >> sIdRoom;
                int index = Search(obj,n,sIdRoom);
                if(index == -1){
                    cout << endl << "Room Not Found ..!" << endl;
                }else{
                    for(int j = n; j > index; j--){
                        obj[j] = obj[j-1];
                    }
                    n++;
                    obj[index].Input();
                    cout << endl << "Insert Is Success ..!" << endl;
                    break;
                }
            }break;
            case 'G':
            case 'g':{
                cout << endl << "Input Room Id To Search For Search : ";
                cin >> sIdRoom;
                int index = Search(obj,n,sIdRoom);
                if(index == -1){
                    cout << endl << "Room Not Found ..!" << endl;
                }else{
                    for(int j = index; j < n; j++){
                        obj[j] = obj[j+1];
                    }
                    n--;
                    cout << endl << "Delete Is Success ..!" << endl;
                }
            }break;
            case 'h':
            case 'H':{
                bool b = false;
                for(int i = 0; i < n; i++){
                    for(int j = i+1; j < n; j++){
                        if(obj[i].Payment() < obj[j].Payment()){
                            temp = obj[i];
                            obj[i] = obj[j];
                            obj[j] = temp;
                            b = true;
                        }
                    }
                }
                if(b==false){
                    cout << endl << "Sort By Payment Error ..!" << endl;
                }else{
                    cout << endl << "Sort By Payment Is Success ..!" << endl;
                }
            }break;
            case 'i':
            case 'I':{
                bool b = false;
                int m;
                cout << endl << "Input Number To Add  : ";
                cin >> m;
                for(int i = n; i < n+m; i++){
                    obj[i].Input();
                    b = true;
                }
                n += m;
                if(b==false){
                    cout << endl << "Add By Payment Error ..!" << endl;
                }else{
                    cout << endl << "Add By Payment Is Success ..!" << endl;
                }
            }break;
            case 'j':
            case 'J':{
                exit(0);
            }break;
        }
    } while(getchar() == 10);
    return 0;
}
// @Function Member Class
Hotel::Hotel(){
    roomId = 0;
    level = 0;
    num_day = 1;
    price = 10;
    tax = 1;
};
Hotel::Hotel(int _roomId,int _level,int _num_day,float _price,float _tax){
    roomId = _roomId;
    level = _level;
    num_day = _num_day;
    price = _price;
    tax = _tax;
};
void Hotel::Input(){
    cout << endl << "Input Room ID      : "; cin >> roomId;
    cout << "Input Level        : "; cin >> level;
    cout << "Input Price        : "; cin >> price;
    cout << "Input Num Day      : "; cin >> num_day;
    cout << "Input Tax          : "; cin >> tax;
};
void Hotel::Header(){
    cout << endl << setw(5) << "ID" << setw(12) << "Level" << setw(12) << "Price"
         << setw(14) << "Num_Day" << setw(10) << "Tax" << setw(12) << "Total"
         << setw(10) << "Dis" << setw(13) << "Payment\n" << endl;
}
void Hotel::Output(){
    cout << setw(5) << roomId << setw(12) << level << setw(11) << price << "$"
         << setw(14) << num_day << setw(10) << tax << setw(11) << Total() << "$"
         << setw(10) << Discount() << setw(12) << Payment() << "$" << endl;
}
float Hotel::Total(){
    return ((price * num_day) - (price * num_day * tax)/100);
}
float Hotel::Discount(){
    return(
        (Total() > 0 && Total() <= 20)? 5 :
        (Total() > 20 && Total() <= 50)? 7 :
        (Total() > 50 && Total() <= 100)? 10 : 15
    );
}
double Hotel::Payment(){
    return (
        Total() - (Total() * Discount())/100
    );
}
int Hotel::getRoomId(){
    return roomId;
};
int Hotel::getLevel(){
    return level;
};
void Hotel::setPrice(float _price){
    price = _price;
};
void Hotel::setNumDay(int _num_day){
    num_day = _num_day;
};
// @Sub Function Main
int Search(Hotel obj[],int n,int sIdRoom){
    int index = -1;
    for(int i = 0; i <n; i++){
        if(obj[i].getRoomId() == sIdRoom){
            index = i;
        }
    }
    return index;
};











// Home Work
// 26/2/2024

// class Persion{
//     private:
//         int id,age,hour;
//         char name[50];
//         float price,rate,tax;
//     public:
//         Persion();
//         Persion(int _id,int _age,char *_name,float price);
//         void Input();
//         void Output();
//         float Total();
//         float Bunus(){
//             // %salary;
//             float b;
//             if(hour > 40){
//                 cin >> b;
//             }else if(hour == 40){
//                 b = 0;
//             }else{
//                 b= -10%(salary);
//             }
//         };
//         float Income();
// }