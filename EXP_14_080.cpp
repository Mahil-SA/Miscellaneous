//Experiment 14 - To study and implement Inheritance
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

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

//Output
/*
Enter the name of band: 
One Direction
Estalished: 
2003
The band is: One Direction
Established: 2003
*/

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

//Output
/*
Transmission shifts gear
Car is driving
*/

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

//Output
/*
Shark is hunting.
The shark caught it's prey.
*/

//Program 5 (Heirarchical Inheritance)
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

//Output
/*
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
*/
