#include <iostream>
#include<string>
using namespace std;

int main()
{
    int y;
    string s,a;
    cout <<"Enter any number " << endl;
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
         cout<<a<<endl;
        }

        a=" ";
    }
       return 0;

    }









