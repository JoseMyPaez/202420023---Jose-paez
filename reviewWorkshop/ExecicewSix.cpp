#include <iostream>

using namespace std;

int biggerOfThree(int firstNumber, int secondNumber, int thirdNumber){
    if(firstNumber >= secondNumber && firstNumber >= thirdNumber){
        return firstNumber;
    } else if (secondNumber >= firstNumber && secondNumber >= thirdNumber){
        return secondNumber;
    } else {
        return thirdNumber;
    }
}

int main(){
    int firstNumber, secondNumber, thirdNumber;
    cout<<"Dame el primer número: "<<endl;
    cin>>firstNumber;
    cout<<"Dame el segundo número: "<<endl;
    cin>>secondNumber;
    cout<<"Dame el tercer número: "<<endl;
    cin>>thirdNumber;
    cout<<"El número mayor es: "<<biggerOfThree(firstNumber, secondNumber, thirdNumber)<<endl;
    return 0;
}