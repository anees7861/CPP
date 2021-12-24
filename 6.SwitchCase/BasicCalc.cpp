#include<iostream>

using namespace std;

int main()
{
    int a,b;
    char c;

    cout<<"Input two number"<<endl;
    cin>>a>>b;

    cout<<"Input a char"<<endl;
    cin>>c;

    switch(c){
        case '+':
            cout<< a + b << endl;
            break;
        case '-':
            cout<< a - b << endl;
            break;
        case '*':
            cout<< a * b << endl;
            break;

        case '/':
            cout<< a / b << endl;
            break;
        case '%':
            cout<< a % b << endl;
            break;
        default:
            cout<<"Enter a correct operator"<<endl;
            break;    
    }

}