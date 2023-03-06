#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;
int main()
{
    int N, random, cont = 1, max, min;
    srand(time(NULL));
    cout<<"Tiene que adivinar un numero\n";
    cout<<"Elige el numero del limite menor: \n";
    cin>>min;
    cout<<"Elige el numero del limite mayor: \n";
    cin>>max;

	random = srand()% max + min;
    do
    {
		cout<<"elija un numero: "; cin>>N;
        if (N == random)
        {
            cout<<"\nAdivinaste el numero\n";
	        cout<<"Numero de intentos: "<<cont + 1<<endl;
            abort();
        }
        if (cont == 5)
        {
            cout<<"\nEl numero que buscabas era " << random << "\n";
            abort();
        }
        
		if (N > random){
			cout<<"\nel numero es menor, elija otro \n";
		}
		else if (N <random){
			cout<<"\nel numero es mayor, elija otro \n";
		} 
        cont++;
	}while (N !=random);
    
	return 0;
}