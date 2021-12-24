#include<iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int onum = n;
    while(n!=0){
        int rem = n%10;
        
        sum = sum + rem*rem*rem;

        n = n/10;
    }

    if(sum==onum){
        cout<<"ArmStrong Number";
    }
    else{
        cout<<"Not ArmStrong Number";
    }
}