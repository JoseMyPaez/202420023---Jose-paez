#include<iostream>

using namespace std;

void dayOfWeek(int day ){
    switch (day)
    {
    case 1:
        cout<<"lunes"<<endl;
        break;
    case 2:
        cout<<"martes"<<endl;
        break;
    case 3:
        cout<<"miercoles"<<endl;
        break;
    case 4:
        cout<<"jueves"<<endl;  
        break;
    case 5:
        cout<<"Virnes"<<endl;
        break;
    case 6:
        cout<<"Sabado"<<endl;  
        break;
    case 7:
        cout<<"Domingo"<<endl;
        break;
    
    default:
        cout<<"dia dela semana incorrecto"<<endl;
        break;
    }
    
}

int main(){
    int day;
    cout<<"Ingrese e numero de la semana "<<endl;
    cin>>day;
    dayOfWeek(day);

    return 0;

}