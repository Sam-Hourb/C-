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

    int getLength()
    {
      return length;
    }
     int getwidth()
    {
      return width;
    }
};


int main ()
{
  Rectangle r(2,4);
  Rectangle r2(4,6);
  Rectangle r4 = r + r2; 

  cout << r4.getwidth()  << " " << r4.getLength() ;

}
