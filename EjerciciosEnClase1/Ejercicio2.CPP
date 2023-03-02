#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int num, *dir_num;

    num=20;
    dir_num = &num;

    cout<<"Numero: "<<num<<endl;
    cout<<"Direccion de memoria: "<<&num<<endl;
    cout<<"apuntador: "<< dir_num<< '/n';

    getch();
    return 0;
}