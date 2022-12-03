//Create a class CString to represent a string.
//a) Overload the + operator to concatenate two strings.
//b) == to compare 2 strings.
#include<iostream>
#include<string.h>
using namespace std;
class CString
{
private:
    char str[30];
public:
    void get_string()
    {
        cout<<"Enter the string"<<endl;
        cin>>str;
    }
    void display()
    {
        cout<<str<<endl;
    }
    CString operator +(CString x)
    {
                CString s;
                strcat(str, x.str);
                strcpy(s.str, str);
                return s;
    }
    int operator==(CString &t);
};
int CString::operator==(CString &t)
{
        for(int i=0; str[i]!=' '; i++)
        {
                for(int j=0; t.str[j]!=' '; j++)
                {
                        if(str[i]==t.str[j])
                        {
                                return 0;
                        }
                        else
                        {
                                return 1;
                        }
                }
        }
}
int main()
{
        CString str1, str2, str3;
        int result=0;

        str1.get_string();
        str2.get_string();

        cout<<"\n ----------------------------------------------";
        cout<<"\n\n First String is           :  ";
        str1.display();
     cout<<"\n\n Second String is          :  ";
        str2.display();
     cout<<"\n ----------------------------------------------";
        str3=str1+str2;
        cout<<"\n\n Concatenated String is    :  ";
        str3.display();

        result=str1==str2;
        if(result==0)
        {
                cout<<"\n\n Both Strings are Equal";
        }
        else
        {
                cout<<"\n\n Both Strings are Not Equal";
        }
        return 0;
}
