#include<iostream>

using namespace std;

int main()
{
    char c;
    cout<<"Input a char: "<<endl;
    cin>>c;

    switch (c){
        case 'a':
            cout<<"hello"<<endl;
            break;
        case 'b':
            cout<<"Namaste"<<endl;
            break;
        case 'c':
            cout<<"Salut"<<endl;
            break;
        case 'd':
            cout<<"Hola"<<endl;
            break;
        case 'e':
            cout<<"Ciao"<<endl;
            break;
        default:
            cout<<"soory not in option"<<endl;
            break;
    }
}