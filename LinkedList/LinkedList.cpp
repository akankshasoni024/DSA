#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data ;
         Node * next;
         Node (int val)
         {
             data=val;
             next=NULL;
         }
};

class List {
    Node * head;
    Node * tail;
    
    public:
    
    List(){
        head=tail=NULL;
    }
    
    void push_front( int val){
        Node* newNode = new Node(val); //Create a Node
        if (head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head; //Dereferencing of newNode
            head=newNode; 
        }
    }
    
    void printLL(){
        Node* temp =head;
        
        while(temp!=NULL){
            cout<<temp->data<<" ->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    
    void push_back(int val){
        Node * newNode= new Node(val);
        if (head==NULL){
            head=tail=newNode;
        }
        else{
        tail->next =newNode;
        tail=newNode;
        }
    }
    
    void pop_front(){
        if(head==NULL){
            cout<<"List is empty ";
            return;
        }
        
        Node * temp =head;
        head=head->next;
        temp=temp->next;
        delete temp;
         
    }
    
     void pop_back(){
        if(head ==NULL ){
            cout<<"LL is empty";
            return;
            
        }
        
         Node * temp =head;
         
        while(temp->next!=tail){
            temp=temp->next;
            
        }
        temp->next =NULL;
        delete tail;
        tail= temp;
    }
    
    void insert(int val, int pos){
        if (pos<0){
            cout<<"Invalid Position";
            return;
            
        }
        if(pos==0){
            push_front(val);
            return;
        }
        
        Node * temp=head;
        Node * newNode = new Node(val);
        for (int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<< "Invalid Position";//greater than linked list size
                return;
            }
            temp=temp->next;
        }
         newNode->next=temp->next;
         temp->next= newNode;
        
        
    }
    
    int search (int key){
        Node * temp=head;
        int idx=0;
        while(temp!= NULL){
            if(temp->data==key){
                return idx;
            }
            else{
                temp=temp->next;
                idx++;
            }
            
        }
        return -1;
    }
};

int main() {
    List ll;
    
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    
    ll.printLL();
    
    ll.push_back(0);
    ll.push_back(-1);
    ll.insert(12, 2);
    ll.pop_back();
    
     ll.printLL();
     
     int index= ll.search(122);
    cout<<"Index "<<index<<endl;
	// your code goes here

}
