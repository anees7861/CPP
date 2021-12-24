#include<iostream>

using namespace std;

int main(){
    int n = 3;

    for(int i = 1;i<=n;i++){
        for(int j = 1; j<=3*n;j++){

            if((i+j)%4==0)
                cout<<"* ";
            else if(i==2 && j%4==0)
                cout<<"* ";
            else
                cout<<"  ";
        }

        cout<<endl;
    }
}