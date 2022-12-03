//Write a C++ program to add two complex numbers using operator overloaded by a friend function.
#include <iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        void setdata(int r, int i )
        {
            real = r;
            img = i;
        }
        void Display ()
        {
            cout << real << "+i" << img;
        }
        friend Complex operator + (Complex c1, Complex c2);
        friend Complex operator - (Complex c1, Complex c2);
        friend Complex operator * (Complex c1, Complex c2);
};

Complex operator + (Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
Complex operator - (Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.img = c1.img - c2.img;
    return temp;
}
Complex operator *(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real *c2.real;
    temp.img = c1.img *c2.img;
    return temp;
}

int main ()
{
    Complex C1, C2, C3;
    int m,n,o,p;
    cout<<"Enter the first two numbers"<<endl;
    cin>>m>>n;
    C1.setdata(m,n);
    cout<<"Enter the second  two numbers"<<endl;
    cin>>o>>p;
    C2.setdata(o,p);
    C1.Display();
    cout << " + ";
    C2.Display();
    cout << " = ";
    C3 = C1 + C2;
    C3.Display();
}
