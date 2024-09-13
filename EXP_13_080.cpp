//Experiment 13 - To study and implement constructor overloading.
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

//Program 1 (Function Overloading)
#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}
int add(int a, int b, int c)
{
    return a+b+c;
}
int main()
{
    cout<<"Addition of 2 integers: "<<add(3,4)<<endl;
    cout<<"Addition of 2 floats: "<<add(3.5f, 4.5f)<<endl;
    cout<<"Addition of 3 integers: "<<add(1, 2, 3)<<endl;
    return 0;
}

//Output
/*
Addition of 2 integers: 7
Addition of 2 floats: 8
Addition of 3 integers: 6
*/

//Program 2 (Operator Overloading)
//Program 2 (Operator Overloading)
#include<iostream>
using namespace std;
class Complex
{
    private:
    float real;
    float imag;
    public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator + (const Complex &obj)
    {
        Complex temp;
        temp.real = real+obj.real;
        temp.imag = imag+obj.imag;
        return temp;
    }
    void display()const
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex c1(3.5, 2.5);
    Complex c2(1.6, 3.7);
    Complex c3 = c1+c2;
    cout<<"First complex number: ";
    c1.display();
    cout<<"Second complex number: ";
    c2.display();
    cout<<"Third complex number: ";
    c3.display();
}

//Output
/*
First complex number: 3.5+2.5i
Second complex number: 1.6+3.7i
Third complex number: 5.1+6.2i
*/
