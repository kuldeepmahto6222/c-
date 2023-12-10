#include<iostream>
using namespace std;
class Factorial
{
	int fact,n;
	public:
	Factorial()
	{
		fact=1;
	}
	void get(int a)
	{
		n=a;
		display();
	}
	void display()
	{
	if(n==0)
	 {
        cout<<"Factorial=1"; 
	}
	else 
	{
		
		 for(int i=1;i<=n;i++)
        {

        fact=fact*i;
        }
         cout << "Factorial of " <<n<<"="<<fact<< endl;

    }

};
int main()
{
	int x;
    cout<<"Enter any number\n";
    cin>>x;
    Factorial ob;
    ob.get(x);
    return 0;
}
    

