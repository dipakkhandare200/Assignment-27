// Consider following class Numbers
//class Numbers
//{
//int x,y,z;
//public:
// methods
//};
//Overload the operator unary minus (-) to negate the numbers.
#include<iostream>
using namespace std;
class Numbers
{
private:
    int x,y,z;
public:
    void accept()
    {
        cout<<"Enter the three Numbers"<<endl;
        cout<<"______******_________"<<endl;
        cout<<"Enter the first number"<<endl;
        cin>>x;
        cout<<"Enter the second number"<<endl;
        cin>>y;
        cout<<"Enter the third number"<<endl;
        cin>>z;
    }
    void display()
    {
        cout<<"\t"<<x<<"\t"<<y<<"\t"<<z<<endl;
    }
    void operator -()
    {
        x=-x;y=-y;z=-z;
    }
};
int main()
{
    Numbers n1;
    n1.accept();
    cout<<"Entered number are : "<<endl;
    n1.display();
    -n1;
    cout<<"negated number are:"<<endl;
    n1.display();
}
