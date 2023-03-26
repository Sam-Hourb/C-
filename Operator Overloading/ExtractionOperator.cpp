#include<iostream>

using namespace std;

class Rectangle
{
  private:
    int width;
    int length;

  public:
    Rectangle(){ }

    Rectangle(int w, int l)
    {
       width = w;
       length = l;
    }

    Rectangle operator+(Rectangle r)
    {
       Rectangle temp;
       temp.width = width + r.width;
       temp.length = length + r. length;

       return temp;
    }

    friend istream & operator>>(istream & inst, Rectangle & r);

    int getLength()
    {
      return length;
    }
     int getwidth()
    {
      return width;
    }
};

istream & operator>>(istream & inst, Rectangle & r)
{
    inst >> r.width;
    inst >> r.length;

    return inst;
}


int main ()
{
  Rectangle r(2,4);
  Rectangle r2(4,6);
  Rectangle r3;

  cout << "enter two numbers: "; 

  cin >> r3; 

  Rectangle r4 = r + r3; 

  cout << r4.getwidth()  << " " << r4.getLength() ;

}
