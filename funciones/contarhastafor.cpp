#include<iostream>

using namespace std;

void foring(int number){

    for (int i=0 ; i < number+1; i++)
    {
        cout<<i<<endl;
    }
    
}

void foringWhile(int numer){
    int temporalNumber=0;
    while (numer>=temporalNumber)
    {
        cout<<temporalNumber<<endl;
        temporalNumber++;
    }  
}
void inverforing(int number)
{
    for (int i=number ; i > -1; i--)
    {
        cout<<i<<endl;
    }    
}

void invertForingWhile(int number){
    int temporalNumber=number;
    while (0<=temporalNumber)
    {
        cout<<temporalNumber<<endl;
        temporalNumber--;
    }  
}


int main(){
    int entry;
    cout<<"Ingrese un numero"<<endl;
    cin>>entry;
    invertForingWhile(entry);

    return 0;    
}