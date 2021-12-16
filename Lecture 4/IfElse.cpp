#include<iostream>

using namespace std;

int main()
{
    int savings;
    cin>>savings;

    if(savings>5000){

        cout<<"Neha and ";
        if(savings>10000)
            cout<<"Roadtrip"<<endl;
        else
            cout<<"Shopping"<<endl;
            
    }
    else if(savings>2000)
        cout<<"Rashmi"<<endl;
    else 
        cout<<"Freinds"<<endl;
}