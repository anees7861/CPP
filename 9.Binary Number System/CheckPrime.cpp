#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag = true;

    for(int i = 2;i<n;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }

    if(n<=1){
        flag = false; // if number is less than 1
    }
    if(!flag)
        cout<<"Not Prime";
    else
        cout<<"Prime";
}