# Miscellaneous
This repository contains experiments 15 which is related to recursion in C++.

# Recursion
# EXPERIMENT 15:
## Aim: 
To study and implement recursion.
## Theory: 
Recursion in C++ is a programming technique where a function calls itself to solve a problem.
It typically involves breaking down a complex problem into simpler subproblems.
Each recursive call reduces the problem's size, eventually reaching a base case that stops further recursion.

Key components of recursion include:

1. **Base Case**: The condition under which the recursion stops. This prevents infinite recursion.
2. **Recursive Case**: The part of the function where the function calls itself with modified arguments.

Common examples of recursion include calculating factorials, Fibonacci series, and traversing data structures like trees.
While recursion can make code more elegant and easier to read, it may also lead to performance issues, such as stack overflow, if not managed properly.
~~~
CODE:
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

//Program 3 (Find sum of n natural numbers using recursion, n is the value entered by the user.)
#include<iostream>
using namespace std;
int nat(int n)
{
    if(n==1)
    {
        return 1;
    }
        else
        {
            return n+nat(n-1);
        }
}
int main()
{
    int n;
    cout<<"Enter the numbers you want to add: "<<endl;
    cin>>n;
    cout<<"The sum of the numbers is: "<<nat(n);
}

~~~

## Conclusion
In C++ we have learnt about recursion in C++.

## Output
### Program 1
![image](https://github.com/user-attachments/assets/a16b13c4-dfe4-400b-963e-506d46a5f656)

### Program 2
![image](https://github.com/user-attachments/assets/cebb2569-19e4-44b9-9d03-63075449107c)

### Program 3
![image](https://github.com/user-attachments/assets/67a74a7c-198e-41c4-99f4-2ac189df98dc)
