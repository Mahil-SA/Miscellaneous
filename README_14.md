# Miscellaneous
This repository contains experiments 14 which are related to other types of inheritance in C++.

# Inheritance
# EXPERIMENT 14:
## Aim: 
To study and implement inheritance in C++.
## Theory: 
Inheritance in C++ is a fundamental object-oriented programming concept that allows a class (derived class) to inherit properties and behaviors (data members and member functions) from another class (base class).

This promotes code reusability and establishes a hierarchical relationship between classes.
The derived class can extend or modify the functionality of the base class.
C++ supports multiple inheritance, enabling a class to inherit from more than one base class.
Access specifiers (public, protected, and private) control the visibility of inherited members.
Overall, inheritance helps create a more organized and maintainable code structure.

~~~
CODE:

// Program 1 (Single Inheritance)
#include <iostream>
using namespace std;

class Bands {

public :
string bd;
string sr;
void genre(){

    cout<<"Enter the name of band: "<<endl;
    cin>>bd>>sr;
}
};

class Lz : public
Bands {
    public:
     int est;
    void estd(){
       
    cout<<"Estalished: "<<endl;
    cin>>est;
    
}
void display(){
    cout<< "The band is: "<<bd<<" "<<sr<<endl;
    cout<<"Established: "<<est<<endl;

}
};
int main()
{
    Lz d;
    d.genre();
    d.estd();
    d.display();
    
    return 0;
}

// Program 2 (Multiple Inheitance)
#include <iostream>
using namespace std;

class Engine {
    public :


    void start(){
        cout<< "Engine starts"<<endl;
        

    }
};
class Transmission{
    public:
   void shiftGear(){
    cout<<"Transmission shifts gear"<<endl;
   }
   };

    class Car : public Engine, public Transmission {
        public:
        void drive(){
            cout<<"Car is driving"<<endl;
        }
    };

int main()

{
    Car d;
    d.shiftGear();
    d.drive();
    return 0;
}

// Program 3 (Multilevel Inheritance)
#include<iostream>
using namespace std;
class Animal
{
public:
void speak()
{
  cout<<"Shark is searching for prey."<<endl;
}
};
class Shark : public
Animal
{
public:
void hunt()
{
  cout<<"Shark is hunting."<<endl;
}
};
class Fish : public
Shark
{
public:
void catch1()
{
  cout<<"The shark caught it's prey."<<endl;
}
};

int main()
{
    Fish d;
    d.hunt();
    d.catch1();
    return 0;
}

//Program 4 (Heirarchical Inheritance)
#include<iostream>
using namespace std;
class Bike
{
    public:
    void Horsepower()
    {
        cout<<"Higher horsepower means higher speed."<<endl;
    }
};
class Activa : public Bike
{
    public:
    void small()
    {
        cout<<"Activa has 7 bhp."<<endl;
    }
};
class RE_Classic_350 : public Bike
{
    public:
    void big()
    {
        cout<<"Classic 350 has 20 bhp."<<endl;
    }
};

int main()
{
    Activa d;
    RE_Classic_350 c;
    d.Horsepower();
    d.small();
    c.Horsepower();
    c.big();
    return 0;
}

~~~

## Conclusion
In C++ we have learnt about Single, multistage and multilevel inheritance.

## Output
### Program 1
![image](https://github.com/user-attachments/assets/77e3bab7-6f4f-47d0-a374-e2949fa22bf6)

### Program 2
![image](https://github.com/user-attachments/assets/e2eb34c8-7b0e-454a-9c36-2518ef5de609)

### Program 3
![image](https://github.com/user-attachments/assets/21565ac4-cf7c-4765-8f69-267bee253038)

### Program 4
![image](https://github.com/user-attachments/assets/501c6d19-cccc-4345-a469-80aa0cfde237)
