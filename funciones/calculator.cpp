#include <iostream>

using namespace std;

int sumTwoValues(int valueOne, int valueTwo){
    int sumResult= valueOne + valueTwo; 
    cout<<"La suma de sus valores es de "<<sumResult<<endl;
    return sumResult;
}

int subsTwoValues(int valueOne, int valueTwo){
    int subResult= valueOne - valueTwo; 
    cout<<"La suma de sus valores es de "<<subResult<<endl;
    return subResult;
}

int multTwoValues(int valueOne, int valueTwo){
    int multResult= valueOne + valueTwo; 
    cout<<"La suma de sus valores es de "<<multResult<<endl;
    return multResult;
}

void divTwoValues(int valueOne, int valueTwo){
    if (valueTwo == 0)
    {
        cout<<"la division es indeterminada "<<endl;
    }
    else
    {
        int divResult= valueOne + valueTwo; 
        cout<<"La suma de sus valores es de "<<divResult<<endl;
    }
   
}

void compareTwoValues(int valueOne,int valueTwo)
{
    if (valueOne>>valueTwo)
    {
        cout<<valueOne<<" es mayor que "<< valueTwo<<endl;
    }
    else
    {
        cout<<valueTwo<<" es mayor que "<< valueOne<<endl;
    }
    
}

void moduleTwoValues(int valueOne, int valueTwo)
{
    int moduleResult= valueOne % valueTwo; 
    cout<<"El modulo de sus valores es de "<<moduleResult<<endl;    
}

int squareValue(int valueOne)
{
    cout<<"Se generara el cuadrado del primer numero que ha proporcionado "<<endl;
    int squareValue = valueOne * valueOne;
    return squareValue;
}

int getGreater(int valueOne, int valueTwo)
{
int result =0;
    if (valueOne>valueTwo)
    {
        result = valueOne;
    }
    else if (valueTwo<valueOne)
    {
        result = valueTwo;
    }
    else
    {
        cout<<"Algo salio descomunalmente mal, pero no se que es"<<endl;
    }
    
    return result;
}

int main()
{
    int valueOne , valueTwo, operationValue, result;
    cout<<"Ingrese su primer valor"<<endl;
    cin>>valueOne;
    cout<<"Ingrese su segundo valor"<<endl;
    cin>>valueTwo;
    cout<<"Que operacioin desea realizar: "<<endl<<"1    Suma"<<endl<<"2    Resta"<<endl<<"3    Multiplicacion"<<endl<<"4    Division"<<endl<<"5    Modulo"<<endl<<"6    Cuadrado"<<endl<<"7    Numero Mayor"<<endl;
    cin>>operationValue;
    switch (operationValue)
    {
    case 1:
        result=sumTwoValues(valueOne,valueTwo);
        cout<<"El resultado de la suma es "<<result<<endl;
        break;
    case 2:
        result=subsTwoValues(valueOne,valueTwo);
        cout<<"El resultado de la resta es "<<result<<endl;
        break;
    case 3:
        result=multTwoValues(valueOne, valueTwo);
        cout<<"El resultado de la multiplicacion es "<<result<<endl;
        break;
    case 4: 
        divTwoValues(valueOne,valueTwo);
        break;
    case 5:
        moduleTwoValues(valueOne,valueTwo);
        break;
    case 6:
        result= squareValue(valueOne);
        cout<<"El valor cuadrado del numero "<<valueOne<<" es "<<result<<endl;
        break;
    case 7:
        result= getGreater(valueOne,valueTwo);
        cout<<"El numero "<<result<<" es el mayor"<<endl;
        break;
    default:
        cout<<"La operacion que selecciono es inexistente"<<endl;
        break;
    }
    return 0;
}
