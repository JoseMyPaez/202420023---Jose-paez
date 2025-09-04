#include<iostream>

using namespace std;

void passOrNot(float value ){
    float aprovatoriNote =3.0;
    if (value>aprovatoriNote)
    {
        cout<<"pasaste la materia"<<endl;
    }
    else if (value<aprovatoriNote)
    {
        cout<<"perdiste la materia"<<endl;
    }
    else
    {
        cout<<"Paso raspando"<<endl;
    }
}

int main()
{
    float Calification,valueOne;
    cout<<"Ingrese su primer valor"<<endl;
    cin>>valueOne;
    passOrNot(valueOne);
}