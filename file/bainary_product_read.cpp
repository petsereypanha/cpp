#include"./index.h"
class Products{
    private:
      int code,qty;
      char name[20];
      float price,tax,check_out;
    public:
      void Output();
      friend void Header();
};
void Products::Output(){
    cout << setw(12) << code << setw(10) << name
         << setw(10) << qty << setw(9) << price << "$"
         << setw(10) << tax << setw(9) << check_out << "$" << endl;

}
void Header(){
    cout << setw(12) << "Code" << setw(10) << "Name"
         << setw(10) << "Qty" << setw(10) << "Price"
         << setw(10) << "Tax" << setw(10) << "Payment" << endl;
}
int main(){
    Products obj;
    fstream file;
    file.open("./data_text/products.bin",ios::in|ios::binary);
    if(!file){
        cout << endl << "Create File Error ..!" << endl;
        exit(0);
    }
    Header();
    while(file.read((char*)&obj,sizeof(obj))){
        obj.Output();
    }
    file.close();
    return 0;
}