#include <iostream>

using namespace std;
void classifyNumbers(int number){
    if(number > 0){
        cout<<"Positivo"<<endl;
    } else if (number < 0){
        cout<<"Negativo"<<endl;
    } else if(number == 0){
        cout<<"Cero"<<endl;
    }else {
        cout<<"Error en el numero"<<endl;
    }
}
int main(){
    int number;
    cout<<"Dame un número: "<<endl;
    cin>>number;
    classifyNumbers(number);
    return 0;
}