#include"../index.h"
/*
    struct name_struct{
        data member;
    };

    vs

    class name_class{
        data member;
        function member;
    };
*/
class Start_Class{
    private:
        int id,hour;
        string name,gender;  // data member;
        float salary,rate;
    public: // function member
        void Input(){
            cout << endl << "Input ID     : "; cin >> id;
            cout << "Input Name   : "; cin.ignore();getline(cin, name);
            cout << "Input Gender : "; cin >> gender;
            cout << "Input Salary : "; cin >> salary;
            cout << "Input Rate   : "; cin >> rate;
            cout << "Input Hour   : "; cin >> hour;
        };
        void Header(){
            cout << endl << setw(12) << "ID" << setw(14) << "Name"
            << setw(16) << "Gender" << setw(16) << "Salary"
            << setw(14) << "Rate" << setw(14) << "Hour"
            << setw(16) << "Income\n" << endl;
        };
        void Output(){
            cout << setw(12) << id << setw(14) << name << setw(16)
            << gender << setw(15) << salary << "$" << setw(14) << rate
            << setw(14) << hour << setw(15) << Income() << "$" << endl;
        };
    private:
        float Income(){
            return (salary + (rate*hour));
        }
};
int main(){
    system("clear");
    Start_Class obj[5];
    Start_Class test;
    int n;
    cout << endl << "Input Number : ";cin >> n;
    for(int i = 0; i < n; i++){
        obj[i].Input();
    }
    test.Header();
    for(int i = 0; i < n; i++){
        obj[i].Output();
    }
    return 0;
}


/*
    Home Work

    class Product {
        private:
            int code,qty;
            char name[20];
            float price;
        public:
            void Input();
            void Output(;
            void Header();
        private:
            float Total(){
                return (price * qty);
            };
            float Discount(){
               return(
                    (Total() > 0 && Total() <= 100)? 0.5 :
                    (Total() > 100 && Total() <= 500)? 1 :
                    (Total() > 500 && Total() <= 1000)? 3 : 5
               );
            };
            float Payment(){
                return (
                    Total() - (Total() * Discount())/100
                );
            };
    };

*/