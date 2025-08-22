#include<iostream>
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

class List{
    Node* head;
    Node* tail;
public:
    List(){
    head=tail=NULL;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next = newNode;
            tail=newNode;
        }
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void insert(int val, int pos){
        if(pos<0){
            cout<<"invalid pos\n";
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i=0; i<pos-1; i++){ //jaha se naya node insert krna hai vo position aise track krte h
            if(temp == NULL){ //if pos is greater than ll size
                cout<<"invalid pos\n";
                return;
            }
            temp = temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp= temp->next;
        }
        cout<<endl;
    }
};

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    ll.push_front(0);
    
    ll.insert(9, 9);

    ll.print();    
} 