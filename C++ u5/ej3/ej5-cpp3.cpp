#include <iostream>
using namespace std;

void es_primo(int n){
    int div = 1;
    int cantidad = 0;

    while (div <= n)
    {
        if (n % div == 0)
        {
            cantidad = cantidad + 1;
        }
        div++;
    }

    if (cantidad == 2)
    {
        cout<<"es numero primo"<< endl;
    }

    if(cantidad != 2)
        {
            cout<<"no es numero primo"<< endl;
        }   
    }


int main(){
    int n;
    cout<< "ingrese numero positivo" << endl;
    cin >> n;
    es_primo(n);
    cout<<n;
}
