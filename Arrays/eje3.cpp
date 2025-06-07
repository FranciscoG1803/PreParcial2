#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase, reverso = "";

    cout << "Ingresa una frase: ";
    getline(cin, frase);

    // Construir el reverso
    for (int i = frase.length() - 1; i >= 0; i--) {
        reverso += frase[i];
    }

    // Comparar usando .compare()
    if (frase.compare(reverso) == 0) {
        cout << "Es un palíndromo exacto." << endl;
    } else {
        cout << "No es un palíndromo." << endl;
    }

    return 0;
}
