#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Input three numbers"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    if(a>b){
        if(a>c)
            cout<<a<<endl;
        else
            cout<<c<<endl;
    }
    else{
        if(b>c)
            cout<<b<<endl;
        else 
            cout<<c<<endl;
    }

}