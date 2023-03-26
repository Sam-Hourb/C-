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
    
    int getLength()
    {
      return length;
    }
     int getwidth()
    {
      return width;
    }
    
    friend Rectangle operator+(Rectangle r, Rectangle r2);
};

Rectangle operator+(Rectangle r, Rectangle r2)
{
  Rectangle temp;
  temp.length = r.length + r2.length;
  temp.width = r.width + r2.width;
  return temp;
}


int main ()
{
  Rectangle r(2,4);
  Rectangle r2(4,6);
  Rectangle r4 = r + r2; 

  cout << r4.getwidth()  << " " << r4.getLength() ;

}
