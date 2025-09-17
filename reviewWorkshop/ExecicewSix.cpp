#include <iostream>

using namespace std;

int biggerOfThree(int firstnumber, int secondnumber, int thirdnumber){
    if(firstnumber >= secondnumber && firstnumber >= thirdnumber){
        return firstnumber;
    } else if (secondnumber >= firstnumber && secondnumber >= thirdnumber){
        return secondnumber;
    } else {
        return thirdnumber;
    }
}

int main(){
    int firstnumber, secondnumber, thirdnumber;
    cout<<"Dame el primer número: "<<endl;
    cin>>firstnumber;
    cout<<"Dame el segundo número: "<<endl;
    cin>>secondnumber;
    cout<<"Dame el tercer número: "<<endl;
    cin>>thirdnumber;
    cout<<"El número mayor es: "<<biggerOfThree(firstnumber, secondnumber, thirdnumber)<<endl;
    return 0;
}