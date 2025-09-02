# include <iostream>

using namespace std;

int main (){

    int ramdomValue, userValue ;
    cout<<"Dame el numero aleatorio que intentaras adivinar"<<endl;
    cin>>ramdomValue;
    userValue=0;

    while (userValue != ramdomValue)
    {
        cout<<"dame tu numero"<< endl;
        cin>>userValue ;

        if (userValue>ramdomValue)
        {
            cout<<"El numero proporcionado es mayor que el aleatorio"<<endl;
        }
        else if (userValue<ramdomValue)
        {
            cout<<"el numero proporcionado es menor que el aleatorio ;"<<endl;
        }
        else
        {
            cout<<"meeee"<<endl;
        }
        
    }
    


}
//