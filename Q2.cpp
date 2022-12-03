//Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;
class incrdecr
{
private:
    int a,b;
public:
    void accept()
    {
        cout<<"Enter two numbers"<<endl;
        cin>>a>>b;
    }
    void operator ++()
    {
        a++;
        b++;
    }
    void operator --()
    {
        a--;
        b--;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;

    }
};
int main()
{
    incrdecr id;
    id.accept();
    ++id;
    cout<<"After incrementing ="<<endl;
    id.display();
    --id;
   cout<<"After decrementing ="<<endl;
   id.display();
}
