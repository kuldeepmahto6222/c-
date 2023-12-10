#include <iostream>

using namespace std;
int fact=1;
int factorial(int n)
{
     for(int i=1;i<=n;i++)
    {

        fact=fact*i;
    }

    return fact;
}

int main()
{
    int n;
    cout<<"Enter any number\n";
    cin>>n;
    if(n==0){
        cout<<"Factorial=1";
   } else {
cout << "Factorial of " <<n<<"="<<factorial(n)<< endl;}
    return 0;
}

    
