#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Linked_List{
Node*head=NULL;
Node*tail=NULL;
public:
void push_front(int val){
    Node *newnode = new Node(val);

    if( head==NULL){
        head=newnode;
        tail=newnode;

    }
    else{
    newnode->next=head;
    head=newnode;
    }
}
void push_back(int val){
    Node *newnode= new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void printl(){
    Node*temp=head;
    while(temp!=NULL){
        cout<< temp->data << " -> ";
        temp=temp->next;
    }
    cout<< "NULL \n";
}
void pop_front(){
    if(head==NULL){
        cout<<"Empty List";
        return ;
    }
    if(head==tail){
        delete head;
        head=tail=NULL;
    }
    else{
        Node*temp=head;
        head=head->next;
        delete temp;
    }
}
void pop_back(){
    if(head==NULL){
        cout<<"Empty List";
        return;
    }
    if(head==tail){
        delete head;
        head=tail=NULL;
        return;
    }
    
        Node *temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        tail=temp;
        temp=temp->next;
        tail->next=NULL;
        delete temp;

    
}
void insert(int val,int pos){
    if(pos<0){
        cout<<"invalid position";
        return;
    }
    if(pos==0){
        push_front(val);
        return;
    }
    if(head ==NULL){
        cout<< " Invalid Position";
        return;
    }
    Node *temp=head;
    for(int i=0;i<pos-1;i++){
        if(temp==NULL){
            cout<< "Invalid Position";
            return;
        }
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Invalid Position";
        return;
    }
    Node *newnode= new Node(val);
    newnode->next=temp->next;
    temp->next=newnode;
    if(newnode->next==NULL){
        tail = newnode;
    }

}
void deleteN(int pos){
    
    if(pos<0 || head==NULL){
        cout<< "Inavalid Position";
        return;
    }
    if(pos==0){
        pop_front();
        return;
    }
    Node *temp=head;
    for(int i=0;i<pos-1;i++){
        if(temp==NULL||temp->next==NULL ){
            cout<<"Invalid Position";
            return;
        }
        temp=temp->next;

    }
    if(temp->next==NULL){
        cout<< "Invalid Position\n";
        return;
    }
    Node *temp1;
    temp1=temp->next;
    temp->next=temp1->next;
    delete temp1;
    if (temp->next==NULL ){
        tail=temp;
    }
    return;
}
void search(int val){
    Node *temp=head;
    int idx=0;
    while(temp!=NULL){
        if(temp->data==val){
            cout<< idx << "\n";
            return;
        }
        temp=temp->next;
        idx++;
    
}
cout << "-1 \n";
}
};
int main(){
    Linked_List l1;
l1.push_back(7);
l1.push_back(8);
l1.push_front(5);
l1.push_front(4);
l1.push_front(1);
l1.push_back(3);
l1.printl();
l1.pop_back();
l1.pop_front();
l1.printl();
l1.insert(6,2);
l1.insert(1,4);
l1.printl();
l1.deleteN(4);
l1.printl();
return 0;

}