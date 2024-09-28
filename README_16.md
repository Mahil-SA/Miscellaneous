# Miscellaneous
This repository contains experiments 13 which is related to Exception Handling in C++.

# Exception Handling
# EXPERIMENT 13:
## Aim: 
To study and implement Exception Handling.
## Theory: 
Exception handling in C++ is a mechanism that allows a program to respond to runtime errors or exceptional conditions gracefully. It enables developers to separate error-handling code from regular code, improving readability and maintainability.

Key components of exception handling in C++ include:

**try Block**: Contains code that may throw an exception. If an error occurs, control is transferred to the corresponding catch block.

**throw Statement**: Used to signal that an exception has occurred. You can throw built-in types, user-defined types, or standard exceptions.

**catch Block**: Catches and handles the thrown exception. You can have multiple catch blocks to handle different types of exceptions.

**finally Block**: C++ does not have a built-in finally block like some other languages, but you can use destructors or RAII (Resource Acquisition Is Initialization) for resource management.

Using exception handling improves program robustness by allowing developers to handle errors without crashing the program, making it easier to diagnose and recover from issues.

~~~
CODE:
//Program 1 (Prompt the user to enter a +ve number. If user enters +ve number, display that number. If user enters -ve number throw an exception.
 #include<iostream>
 using namespace std;
  int main(){
     float n;
      cout<<"Enter a positive number: ";
      cin>>n;
       
      try{
          if(n<0){
              throw n;
          }
          cout<<"Enter a negative number: "; 
          
      }
      catch(const float n){
          cout<<"You have entered "<<n<<" which is a negative number."<< endl;
      }
          
}

//Program 2 (Prompt the user to enter a year greater than 2000. If user enters a year greater than 2000, then display that year. If user enters year less than 2000 throw an exception.)
 #include<iostream>
 using namespace std;
  int main(){
     float year;
      cout<<"Enter a year greater than 2000: ";
      cin>>year;
       
      try
      {
          if(year<2000)
          {
              throw "You have entered a year less than 2000!";
          }
          cout<<"The entered year is: "<<year; 
      }
      catch(const char *msg)
      {
          cout<<msg;
      }
}
~~~

## Conclusion
In C++ we have learnt about Exception Handling.

## Output
### Program 1
![image](https://github.com/user-attachments/assets/1731f86c-4083-464a-8ee7-1909e43e7f0c)

### Program 2
![image](https://github.com/user-attachments/assets/7948723c-dd0a-4cd5-93ea-eb2f41bb7407)
