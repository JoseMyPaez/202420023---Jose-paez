# include <iostream>

using namespace std;

int main (){

    cout<<"se imprimiran las tablas "<<endl;

    for (int i = 1; i < 11; i++)
    {
            cout<<"tabla del "<< i << endl <<endl;
        for(int j=1;j<11;j++)
        {
            int result = i*j;
            cout <<i<<" * "<< j <<" = "<<result<<endl;

        }
        cout <<endl<<endl;
    }
    


}