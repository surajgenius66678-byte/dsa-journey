#include<iostream>
using namespace std;
#define n 5
class Stack{
    public:
    int arr[n];
    int top=-1;

    void push(int val){
        if(top==n-1){
            cout<<"Overflow";
            return;
        }
        top++;
        arr[top]=val;

    }
    void pop(){
        if(top==-1){
            cout<<"Underflow";
            return;
        }
        top--;
    }
    void peek(){
        if(top==-1){
            cout<<"Underfow \n";
            return;
        }
        cout<< arr[top];
        return;
    }
    void display(){
        if(top==-1){
            cout<<"Underfow \n";
            return;
        }
        for(int i=top;i>=0;i--){
            cout<< arr[i]<<" ";
        }
        cout << endl;
        return;
    }
};
class Node{
    public:
    int data;

    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Stackl{
    public:
    Node*head=NULL;
    Node*tail=NULL;
    void push(int val){
        Node *newnode= new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void pop(){
        if(head==NULL){
            cout<<"Underflow";
            return;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        Node *temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        delete tail;
        temp->next=NULL;
        tail=temp;
    }
    void peek(){
        if(head==NULL){
            cout<< "Underflow";
            return;
        }
        cout << tail->data << "\n";
        return;
    }
    Node* getHead(){
        return head;
    }
    void display(Node*temp){
        
        if(temp==NULL){
            return;
        }
        display(temp->next);
        cout<<temp->data<< " ";
        
    }
};
int main(){
    Stackl s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display(s.getHead());  // 10 20 30

    s.peek();     // 30

    s.pop();

    s.display(s.getHead());  // 10 20

    s.pop();
    s.pop();
    s.pop(); 
}