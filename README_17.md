# Miscellaneous
This repository contains experiments 13 which is related to miscellaneous stuff in C++.

# Exception Handling
# EXPERIMENT 17:
## Aim: 
To study and implement linked lists.
## Theory: 
In C++, a linked list is a linear data structure that allows the users to store data in non-contiguous memory locations.

A linked list is defined as a collection of nodes where each node consists of two members which represents its value and a next pointer which stores the address for the next node. In this article, we will learn about the linked list, its implementation, and its practical applications.

~~~
CODE:
//Program 1
#include<iostream>
using namespace std;
class Link{
    public:
    int data ;
    Link* next;
    Link(int num){
        data = num;
        next = NULL;
    }
};
void insert_head(Link* &head, int data){
    Link* new_node = new Link(data);
    new_node -> next= head;
    head = new_node;
}
void disp(Link*head){
    Link*temp = head;
    while (temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;

    }
    cout<<"NULL"<<endl;
}

int main(){
    Link*head = NULL;
    insert_head(head, 30);
    disp(head);
    insert_head(head, 32);
    disp(head);
    insert_head(head,35);
    disp(head);
    
}

//Program 2
#include<iostream>
using namespace std;
class Link{
    public:
    int data ;
    Link* next;
    Link(int num){
        data = num;
        next = NULL;
    }
};
int main(){
    Link* l1 = new Link(6);
    cout << l1->data<<"   "<<l1->next;

}
~~~

## Conclusion
In C++ we have learnt about how to create a node and about linked lists.

//Outputs

//Program 1
![image](https://github.com/user-attachments/assets/b2eb4c20-c9f8-4709-9a9f-10ad9cfc1903)

//Program 2
![image](https://github.com/user-attachments/assets/1e5bd0bc-8fbb-46de-8556-3e9cb9d5959e)
