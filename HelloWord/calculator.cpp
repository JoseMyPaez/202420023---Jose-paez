#include <iostream>

using namespace std;

int main(){

    int inputValue1 , inputValue2 , selectOperation;
    int sumResult, restResult, multResult ,divResult, modResult;
    cout<<"ingrese el primer valor : ";
    cin >> inputValue1; 
    cout<<"ingrese el segundo valor:" ;
    cin >> inputValue2; 
    cout<<"Seleccione el tipo de operacion"<<endl;
    cout<<"1. suma"<<endl;
    cout<<"2. resta "<<endl;
    cout<<"3. multiplicacion"<<endl;
    cout<<"4. division"<<endl;
    cout<<"5. Modulo";
    cin>>selectOperation;
    if (selectOperation == 1)
    {
        sumResult = inputValue1 + inputValue2;
        cout <<"el resultado de la suma es: "<< sumResult<<endl;
    }
    else if (selectOperation ==2)
    {
        restResult = inputValue1 - inputValue2;
        cout <<"el resultado de la resta es: "<< restResult<<endl;
    }
    else if (selectOperation == 3)
    {
                multResult = inputValue1 * inputValue2;
        cout <<"el resultado de la multiplicacion es: "<< multResult<<endl;
    }
    else if(selectOperation == 4)
    {
        divResult = inputValue1 / inputValue2;
        cout <<"el resultado de la division es: "<< divResult<<endl;
    }
    else if(selectOperation==5)
    {
        modResult = inputValue1 % inputValue2;
        cout <<"el resultado del modulo es: "<< modResult<<endl;
    }
    else
    {
        cout<<"El tipo de operacion es incorrecto";
    }
    return 0;
}