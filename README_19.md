# Miscellaneous
This repository contains experiments which are related to miscellaneous stuff in C++.

# Queues
# EXPERIMENT 19:
## Aim: 
To study and implement queues in C++.
## Theory: 
Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front.

Queues use an encapsulated object of deque or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements.

~~~
CODE:
#include <iostream>
using namespace std;
#define size 5
#define ERROR -9999
class Queue{
    int rear, front, ar[size];
    public:
    Queue(){
        rear = -1;
        front = -1;
        ar[0]=0;
    }
    void enqueue(int);
    int dequeue();
    void disp();
};
void Queue :: enqueue(int num){
    if (rear == (size+1)){
        cout<<"Queue is full"<<endl;
    }
    else{
        if(front == -1){
            ar[++front]=num;
            rear++;
        }
        else{
            ar[++rear]=num;
        }
    }

    }
int Queue ::dequeue(){
    if(front ==-1 || front ==(rear+1)){
        cout<<"Queue is empty"<<endl;
        return ERROR;
    }
    else{
        int val = ar[front++];
        return val;
    }
}
void Queue :: disp(){
    if(front ==-1 || front ==(rear+1)){
        cout<<"Quee=ue is empty"<<endl;
        return;
    }
    else{
        int i = front ;
        while (i!=(rear+1)){
            cout<<ar[i];
            i++;
        }
    }
}

int main(){
        Queue q1;
        q1.enqueue(4);
        q1.enqueue(8);
        q1.enqueue(3);
        q1.disp();
        int val = q1.dequeue();
        cout<<endl<<"Deleted element: "<<val<<endl;
        q1.disp();

}
~~~

## Conclusion
In C++ we have learnt about queues.

## Output
### Program 1
![image](https://github.com/user-attachments/assets/d8ad2764-aa17-4a68-bae2-2b273a09def7)
