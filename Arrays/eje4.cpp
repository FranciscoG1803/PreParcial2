#include <iostream>

using namespace std;

int main(void){

    int n = 0;

    /*while (n >= 0)
    {
        cout<<n<<endl;
        n--;
    }*/

    do
    {
        cout<<n<<endl;
        n++;
    } while (n <= 5);
    
    
    for (int i = 0; i <= 5; i++)
    {
        n = i;
        cout<<n<<endl;
    }
    
    return 0;
}