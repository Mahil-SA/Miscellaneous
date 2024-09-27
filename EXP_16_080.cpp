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
