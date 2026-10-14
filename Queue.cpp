#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Queue{
    Node*head;
    Node*tail;
    public:
    Queue(){
        head=tail=NULL;
    }
    void push(int val){
        Node*newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }else{
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
        temp=temp->next;
        delete head;
        head=temp;
    }
    int front(){
        if (head==NULL)
        {
            cout<< "Underflow";
            return;
        }
        
        return head->data;
    }
    bool empty(){
        return head==NULL;
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
    cout<< endl;
    return;
}