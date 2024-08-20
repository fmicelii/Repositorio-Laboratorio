#include <iostream>
using namespace std;

float cambio_a_fahrenheit(float temperatura){
    float temperaturaF = (temperatura * 9/5) + 32;
    return temperaturaF;
}

int main(){
    float temperaturaC;

    cout<<"poneme que temperatura tenes ahi: ";
    cin>>temperaturaC;
    
    cout<<cambio_a_fahrenheit(temperaturaC)<<endl;
}