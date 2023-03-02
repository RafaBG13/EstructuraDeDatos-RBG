#include <stack>
#include <iostream>
#include <conio.h>
using namespace std;
int main () {
    stack<int> pila;
    pila.push(1);
    pila.push(3);
    pila.push(13);

    cout<<pila.size()<<endl;
    cout<<pila.top()<<endl;
    pila.pop();
    cout<<pila.top()<<endl;
    
    return 0;
}