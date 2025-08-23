#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev  = NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;

public:
    DoublyList(){
        head = tail = NULL;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_back(){
        if(head ==NULL){
            cout<< "Doubly LinkedList is Empty";
            return;
        }

        Node* temp = tail;
        tail = tail->prev;

        if(tail != NULL){
            tail->next = NULL;
        }

        temp->prev = NULL;
        delete temp;
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<< temp->data<<" ";
            temp = temp-> next;
        }
        cout<<endl;
    }
};

int main(){
    DoublyList dll;
    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.push_back(4);  

    dll.print();

    dll.pop_back();

    dll.print();
}

