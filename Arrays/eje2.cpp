#include <iostream>
#include <string>

using namespace std;

int main(void){

    string frase, fraseInv;

    cout<<"Ingrese una frase: ";
    getline(cin,frase);

    /*for (int i = 0; i <= frase.length(); i++)
    {
        cout<<frase[i]<<endl;
    }*/

    for (int i = frase.length(); i >= 0; i--)
    {
        cout<<frase[i];
    }
    
    return 0;
}