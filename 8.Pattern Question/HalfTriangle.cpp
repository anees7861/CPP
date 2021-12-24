#include<iostream>

using namespace std;

int main(){

    // print a half pyramid w 180 rotation
    int n =4;

    for(int i = 0;i<n;i++){
        
        for(int j = 1;j<=n;j++){
            if(j>=(n-i)){
                cout<<"* ";               
            }            
            else
                cout<<"  ";               
        }
        cout<<endl;
    }
}