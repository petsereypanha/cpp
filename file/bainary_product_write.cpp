#include"./index.h"
class Products{
    private:
      int code,qty;
      char name[20];
      float price,tax,check_out;
    public:
      void Input();
      float Total();
      float Payment();
};
void Products::Input(){
    cout << endl << "Input Code     : "; cin >> code;
    cout << "Input Name     : "; cin.ignore();cin.getline(name,20);
    cout << "Input Qty      : "; cin >> qty;
    cout << "Input Price    : "; cin >> price;
    cout << "Input Tax      : "; cin >> tax;
    check_out = Payment();
};
float Products::Total(){
    return (
        qty * price
    );
}
float Products::Payment(){
    return (
        Total() + (Total()*tax)/100
    );
}
int main(){
    system("clear");
    fstream file;
    Products obj;
    int n;
    file.open("./data_text/products.bin",ios::app|ios::binary);
    if(!file){
        cout << endl << "Create File Error ..!" << endl;
        exit(0);
    }
    cout << endl << "Input Number Of Product : "; cin >> n;
    for(int i = 0;i < n; i++){
        cout << "++++++++| Product #" << i+1 << " |++++++++++++" << endl;
        obj.Input();
        file.write((char*)&obj,sizeof(obj));
    }
    cout << endl << "Written Info File Completed ..!" << endl;
    file.close();
    return 0;
}