#include <iostream>

using namespace std;

void printMultiplicationTableRange(int table, int start, int end){
    for(int i = start; i <= end; i++){
        cout<<table<<" x "<<i<<" = "<<table * i<<endl;
    }

}

void printMultiplicationTable(int number){
    for(int i = 1; i <= 10; i++){
        cout<<number<<" x "<<i<<" = "<<number * i<<endl;
    }
}

int main(){
    int table, start, end;
    cout<<"Dame el numero de una tabla de multiplicar: "<<endl;
    cin>>table;
    printMultiplicationTable(table);
    cout<<"Dame el numero de inicio: "<<endl;
    cin>>start;
    cout<<"Dame el numero de fin: "<<endl;
    cin>>end;
    printMultiplicationTableRange(table, start, end);

    return 0;

}