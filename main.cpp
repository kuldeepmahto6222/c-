#include <iostream>
#include<string>
using namespace std;

int main()
{
    int x=0,y=0;
    string str,a;
    cout << "Enter any word" << endl;
    cin>>str;
    y=str.length();
    for(int i=0;i<y;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            x++;
    }
    cout<<"No of vowel="<<x<<"\n";
    cout<<"No. of consonents="<<y-x;
    return 0;
}
