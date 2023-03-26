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

    friend  ostream & operator<<(ostream & outr, Rectangle & r);

    int getLength()
    {
      return length;
    }
     int getwidth()
    {
      return width;
    }
};

    ostream & operator<<(ostream & outr, Rectangle & r)
    {
       outr << "Length = " << r.width << "  " << "Width = " << r.length << endl;
       
       return outr;
    }


int main ()
{
  Rectangle r(2,4);
  Rectangle r2(4,6);
  Rectangle r4 = r + r2; 
  
  cout << r4 << " = " << r << " + " << r2 << endl;
  
}
