#include <iostream>

using namespace std;

void biggestNumber(int firstnumber, int secondnumber){
    if(firstnumber > secondnumber){
        cout<<"El número mayor es: "<<firstnumber<<endl;
    } else if (secondnumber > firstnumber){
        cout<<"El número mayor es: "<<secondnumber<<endl;
    } else {
        cout<<"Los números son iguales"<<endl;
    }
}   

int main(){
    int fiirsnumbre, secondnumber;
    cout<<"Dame el primer número: "<<endl;
    cin>>fiirsnumbre;
    cout<<"Dame el segundo número: "<<endl;
    cin>>secondnumber;

}