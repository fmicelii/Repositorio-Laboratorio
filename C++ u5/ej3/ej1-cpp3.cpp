#include <iostream>
#include <math.h>
using namespace std;

float area(int radio){
    return 3.14 * pow(radio,2);
}

int main(){
    int radio;

    cout<<"ingrese un radio: ";
    cin>>radio;

    cout<<"el area de su circulo teniendo en cuenta su radio es: "<<area(radio)<<endl;
}