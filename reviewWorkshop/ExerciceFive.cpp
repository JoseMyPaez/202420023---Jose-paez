#include <iostream>

using namespace std;

void biggestNumber(int firstNumber, int secondNumber){
    if(firstNumber > secondNumber){
        cout<<"El número mayor es: "<<firstNumber<<endl;
    } else if (secondNumber > firstNumber){
        cout<<"El número mayor es: "<<secondNumber<<endl;
    } else {
        cout<<"Los números son iguales"<<endl;
    }
}   

int main(){
    int firstNumber, secondNumber;
    cout<<"Dame el primer número: "<<endl;
    cin>>firstNumber;
    cout<<"Dame el segundo número: "<<endl;
    cin>>secondNumber;

}