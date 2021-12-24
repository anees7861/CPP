#include<iostream>

using namespace std;

int main(){

    int n, a=0, b=1, c;

    cin>>n;
    if(n==1)
        cout<<a<<endl;
    else if(n==2){
        cout<<a<<endl;
        cout<<b<<endl;
    }
    else{
        for(int i = 1;i<=n;i++){
            c = a + b;
            cout<<c<<endl;
            a = b;
            b = c;

        }
    }
    
}