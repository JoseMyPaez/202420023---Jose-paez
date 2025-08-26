#include <iostream>

using namespace std;

int main(){

    int inputValue1 , inputValue2;
    int sumResult, restResult, multResult ,divResult;
    cout<<"ingrese el primer valor : ";
    cin >> inputValue1; 
    cout<<"ingrese el segundo valor:" ;
    cin >> inputValue2; 
    sumResult = inputValue1+inputValue2;
    cout << "el resultado de la suma es de: "<< sumResult << endl;
    restResult = inputValue1-inputValue2;
    cout << "el resultado de la resta es de: "<< restResult<<endl;
    multResult = inputValue1*inputValue2;
    cout << "el resultado de la multiplicacion es de: "<< multResult<<endl;
    divResult = inputValue1/inputValue2;
    cout << "el resultado de la division es de: "<< divResult<<endl;
    return 0;
}