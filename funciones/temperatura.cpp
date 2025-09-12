#include<iostream>

using namespace std;

void valorateTemp(int temperature ){
    if (temperature<15)
    {
        cout <<"Esta haciendo frio"<<endl;
    }
    else if (temperature>25)
    {
        cout <<"Esta haciendo calor"<<endl;
    }
    else
    {
        cout <<"El clima esta templado"<<endl;
    }
    
}

int main(){
    int temperature;
    cout<<"Ingrese la temperarura"<<endl;
    cin>>temperature;
    valorateTemp(temperature);
    
}