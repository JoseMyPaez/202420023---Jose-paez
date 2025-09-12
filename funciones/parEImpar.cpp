#include<iostream>

using namespace std;

bool parEImpar(int number){
    bool result;
    result=number%2==0;
    return result;
}

int main(){
    int entry;
    bool number;
    cout<<"Ingrese un numero"<<endl;
    cin>>entry;
    number=parEImpar(entry);
    if (number)
    {
        cout<<"el numero es par"<<endl;
    }
    else
    {
        cout<<"el numero es impar"<<endl;
    }

    return 0;    
}