//Consider a class Matrix
//Class Matrix
//{int a[3][3];
//Public:
//methods;
//};
//Overload the - (Unary) should negate the numbers stored in the object.Output -
#include<iostream>
using namespace std;
class Matrix
{
private:
    int a[3][3];
public:
    void accept();
    void display();
    void operator -();
};
void Matrix::accept()
{
  cout<<"Enter Element of Matrix 3*3" <<endl;
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          cout<<" ";
          cin>>a[i][j];
      }

  }
}
  void Matrix::display()
  {
      cout<<"\n Matrix is : \n\n";
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
              cout<<a[i][j];

          }
          cout<<"\n";
      }
  }
  void Matrix::operator-()
  {
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
              a[i][j]=-a[i][j];
          }
      }
  }
int main()
{
        Matrix m;
        m.accept();
        m.display();
        -m;
        m.display();
        return 0;
}
