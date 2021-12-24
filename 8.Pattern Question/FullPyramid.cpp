#include<iostream>

using namespace std;

int main(){
    // print a double pyramid

    int n =5;

    for(int i = 0;i<n;i++){
        
        for(int j = 1;j<=n;j++){
            if(j>=(n-i)){
                cout<<"*";
                if((j+i)<(n+i))
                    cout<<"*";
            }            
            else
                cout<<" ";               
        }
        
        

       
        cout<<endl;
    }

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(j>=i){
                cout<<"*";
                if((j+i)<(n+i))
                    cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }

    

}