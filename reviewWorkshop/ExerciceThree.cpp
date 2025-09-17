#include <iostream>

using namespace std;

void printMultiplicationTable(int number){
    for(int i = 1; i <= 10; i++){
        cout<<number<<" x "<<i<<" = "<<number * i<<endl;
    }
}

int main(){
    int table;
    cout<<"Dame el numero de una tabla de multiplicar: "<<endl;
    cin>>table;
    printMultiplicationTable(table);
    return 0;

}