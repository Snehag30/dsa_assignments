#include<iostream>
using namespace std;

struct node{
    
    
    int data;
    node * next;
    
    
};
class sll{
    public:
    node * head;
    node * temp;
    node * create();
    void inseart();
    void display();
};

node * sll :: create(){
    int r;
    cout<<"Enter data: "<<endl;
    cin>>r;
    node * p;
    p = new node;
    p->data=r;
    p->next= NULL;
    return p;
}

void sll :: inseart(){
    node * p = create();
    if(head == NULL){
        head =p;
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp= temp->next;
        }
        temp->next =p;
    }
}

void  sll :: display(){
    temp = head;
    cout<<"Singly linked list is : "<<endl;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
    cout<<endl;
}

int main(){
    sll s;
    for(int i=0;i<4;i++){
        s.inseart();
    }
    s.display();
}