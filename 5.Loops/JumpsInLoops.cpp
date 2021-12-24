#include<iostream>

using namespace std;

int main(){
    // continue

    /*for(int i = 1; i<=30; i++){
        if(i%2==0){
            continue; //will skip to the next iteration of the loop
        }
        cout<<i<<" go out today"<<endl;
    }*/

    // break

    /*int pocket = 3000;
    for(int i = 1;i<=30;i++){
        if(i%2==0)
            continue;
        if(pocket==0)
            break; // breaks the loop at the iteration
        
        cout<<i<<" go out today"<<endl;

        pocket-=300;
        
    }

    cout<<"pocket is "<<pocket<<endl;*/

    // dont print number divisible by 3
    /*for(int i = 0;i< 100; i++){
        if(i%3==0)
            continue;
        cout<<i<<endl;
    }*/

    // given number is prime
    /*int n;
    int i;
    cin>>n;
    for( i = 2; i<n; i++){
        if(n%i==0){
            cout<<"Non prime"<<endl;    
            break;
        }
    }

    if(i==n)
        cout<<"Prime"<<endl;*/

    // print prime numbers till n;

    int a,b;
    int i,j;
    cin>>a>>b;

    for(i = a;i<=b;i++){
        for( j =2;j<i;j++){
            if(i%j==0){
                break;
            }
            
        }
        if(i==j)
                cout<<i<<endl;
    }
}