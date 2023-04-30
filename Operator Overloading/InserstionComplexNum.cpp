#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex()
    { }

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

   friend ostream &operator<<(ostream &out, Complex &c);
   friend istream &operator>>(istream &in, Complex & c);
};

    ostream &operator<<(ostream &out, Complex &c)
    {
        out << c.real << "+i" << c.img << endl;
        return out;
    }

    istream &operator>>(istream &in, Complex & c)
    {
        int r;
        int i;
        char p;
        char im;

        in >> r >> p >> im >> i ;

        c = Complex(r,i);

        return in;
    }


int main()
{
    Complex c;

    cout << "Enter a complex number: ";
    cin >> c;
    cout << c;

    return 0;
}
