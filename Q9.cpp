 //Consider the following class mystring
//Class mystring
//{
//char str [500];
//Public:
// methods
//};Overload operator �!� to reverse the case of each alphabet in the string
//(Uppercase to Lowercase and vice versa).
#include<iostream>
#include<string.h>
using namespace std;

class mystring
{
        char str[500];
    public:
        void operator!();    //Overloaded '!' Operator
        void accept_string()
        {
                cout<<"\n Enter String  :  ";
                cin>>str;
        }
        void display_string()
        {
                cout<<str;
        }
};
void mystring::operator!()
{
        for(int i=0; str[i]!=' '; i++)
        {
                if(str[i]>=65&&str[i]<=96)
                {
                        str[i]=str[i]+32;
                }
                else if(str[i]>=97&&str[i]<=122)
                {
                        str[i]=str[i]-32;
                }
        }
        cout<<"\n\n Reverse Case String is  :  "<<str;
}
int main()
{
        mystring s1;
        s1.accept_string();
        cout<<"\n\n String is  :  ";
        s1.display_string();
        !s1;
        return 0;
}

