#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n!=0){
        int rem = n%10;
        cout<<rem;
        n = n/10;
    }

    /*
    int rev = 0
    while(!=0){
        int last = n%10;
        rev = rev*10 + last;
        n=n/10;
    }
    cout<<rev;
    */
}