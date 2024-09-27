//Experiment 16 - To study and implement about exception handling.
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

//Program 1 (Prompt the suer to enter a +ve number. If user enters +ve number, display that number. If user enters -ve number throw an exception.
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

//Output
/*
Enter a positive number: -34
You have entered -34 which is a negative number.
*/

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

//Output
/*
Enter a year greater than 2000: 1999
You have entered a year less than 2000!
*/
