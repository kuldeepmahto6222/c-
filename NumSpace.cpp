#include <iostream>
#include<string>
using namespace std;

int main()
{
    int y,c=0,d=0,x=0;
    string s,a,b;
    cout <<"Enter any number3 " << endl;
    getline(cin,s);
    s=s+" ";
    y=s.length();
    for(int i=0;i<y;i++)
    {

        if(s[i]!=' ')
        {

          a=a+s[i];
        }
        else
        {
            cout<<i<<endl;
            x=a.find('.');
            	cout<<x<<endl;
            if(x>0)
            {


               d=a.length();

               cout<<a;
               for(int j=1;j<d-x;j++)
                cout<<"0";
                cout<<endl;
            }
            else
            {
                 cout<<a;
                 cout<<endl;
            }
        }
           a="";
           b="";
           c=0;
           d=0;
        }



       return 0;

    }


























