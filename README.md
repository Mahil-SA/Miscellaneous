# Miscellaneous

## Experiment 13 (Function Overloading)
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

![image](https://github.com/user-attachments/assets/4be9d0dc-ac3f-4323-b1dc-ce4bdba293eb)
*/
