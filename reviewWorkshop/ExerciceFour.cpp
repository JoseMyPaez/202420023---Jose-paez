#include <iostream>

using namespace std;

void countdown(int number){
    while (number >= 0)
    {
        cout<<number<<" ";
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
    countdown(number);
    cout<<"Dame un número para ascendente: "<<endl;
    cin>>number;
    countUp(number);
    return 0;

}