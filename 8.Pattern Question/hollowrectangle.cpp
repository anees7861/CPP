#include<iostream>

using namespace std;

int main()
{
    int n = 7;

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i==1 || i == n||(n%j==0 && j==1)||(n%j==0 && j==n))
                cout<<"*";
           
            else
                cout<<" ";
            
        }

        cout<<endl;
    }
}