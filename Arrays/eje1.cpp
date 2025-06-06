#include <iostream>

using namespace std;

int main(void){

    int numero[100], suma = 0, cantidad;

    cout<<"Ingrese la cantidad de nums del array: ";
    cin>>cantidad;

    cout<<"Ingrese los nums que desea sumar: ";
    for (int i = 0; i < cantidad; i++)
    {
        cin>>numero[i];

        suma = suma + numero[i];
    }
    
    cout<<"La suma de todos los nums es: "<<suma;

    return 0;
}