#include <iostream>

using namespace std;

void forWithString(){
    string example = "Hello World";
    for (int i = 0; i < example.size(); i++)
    {
        char textChar = example[i];
        cout<<"position : "<< i << " - "<<textChar<<endl;
    }  
}

void forWithStringVocals(){
    string example = "Hello World";
    int vocaksCount = 0;
    for (int i = 0; i < example.size(); i++)
    {
        char textChar = example[i];
        if (textChar == 'a' || textChar == 'e' || textChar == 'i' || textChar == 'o' || textChar == 'u')
        {
            vocaksCount++;
        }  
    }   
    cout<<"hay "<<vocaksCount<<" vocales"<<endl;
}

void forWhitStringALetter(){
    string example = "otorrinolaringologo";
    int vocaksCount = 0;
    for (int i = 0; i < example.size(); i++)
    {
        char textChar = example[i];
        if (textChar == 'o')
        {
            vocaksCount++;
        }  
    }   
    cout<<"hay "<<vocaksCount<<" letras o "<<endl;
}




int main (){
    //forWithString();
    //forWithStringVocals();
    forWhitStringALetter();
    return 0;
}