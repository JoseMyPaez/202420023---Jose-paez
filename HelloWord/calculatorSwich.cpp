#include <iostream>

using namespace std;

int main(){

    int inputValue1 , inputValue2 , selectOperation;
    int sumResult, restResult, multResult ,divResult, modResult;
    cout<<"Ingrese el primer valor : ";
    cin >> inputValue1; 
    cout<<"Ingrese el segundo valor:" ;
    cin >> inputValue2; 
    cout<<"Seleccione el tipo de operacion"<<endl;
    cout<<"1. suma"<<endl;
    cout<<"2. resta "<<endl;
    cout<<"3. multiplicacion"<<endl;
    cout<<"4. division"<<endl;
    cout<<"5. Modulo";
    cin>>selectOperation;

    switch (selectOperation)
    {
    case 1:
        sumResult = inputValue1 + inputValue2;
        cout <<"El resultado de la suma es: "<< sumResult<<endl;
        break;
    case 2:
        restResult = inputValue1 - inputValue2;
        cout <<"El resultado de la resta es: "<< restResult<<endl;
        break;
    case 3:
        multResult = inputValue1 * inputValue2;
        cout <<"El resultado de la multiplicacion es: "<< multResult<<endl;
        break;
    case 4:
        divResult = inputValue1 / inputValue2;
        cout <<"El resultado de la division es: "<< divResult<<endl;
        break;
    case 5:
        modResult = inputValue1 % inputValue2;
        cout <<"El resultado del modulo es: "<< modResult<<endl;
        break;
    default:
        cout<<"El tipo de operacion es incorrecto";
        break;
    }
    return 0;
}