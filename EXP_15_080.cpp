//Experiment 15 - To study and implement about recursion.
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

//Program 1 (Find factorial of number using recursion.)
#include<iostream>
using namespace std;
int factorial (int n)
    {
        if(n==0)
        {
            return 1;
        }
        else
        {
            return n*factorial(n-1);
        }
    }
int main()
{
    int n;
    cout<<"Enter the number you want factorial of: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n)<<"."<<endl;
}

//Output
/*
Enter the number you want factorial of: 5
The factorial of 5 is 120.
*/

//Program 2 (Find fibonacci number in the fibnacci sequence using recursion.)
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
        if(n==1)
        {
            return 1;
        }
        else
        {
            return fib(n-1)+fib(n-2);
        }
}
int main()
{
    int n;
    cout<<"Enter the numbers for fibonacci: "<<endl;
    cin>>n;
    cout<<"The fibonacci number is: "<<fib(n);
}

//Output
/*
Enter the numbers for fibonacci: 
10
The fibonacci number is: 55
*/
