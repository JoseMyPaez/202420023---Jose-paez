#include <iostream>

using namespace std;

void countdownEvenOdd(int number){
    while (number >= 0)
    {
        if(number % 2 == 0){
            cout<<number<<" es par"<<endl;
        } else {
            cout<<number<<" es impar"<<endl;
        }
        number--;
    }
    
}

void countUp(int number){
    int i = 0;
    while (i <= number)
    {
        cout<<i<<" ";
        i++;
    }
    
    cout<<endl;
}

int main(){
    int number ;
    cout<<"Dame un número para desendiente: "<<endl;
    cin>>number;
    countdownEvenOdd(number);
    cout<<"Dame un número para ascendente: "<<endl;
    cin>>number;
    countUp(number);
    return 0;
}