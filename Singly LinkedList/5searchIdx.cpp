#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = tail = NULL;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

    int search(int val){
        int idx = 0;
        Node* temp = head;
        while(temp !=NULL){
            if(val==temp->data){
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        return -1;
    }

};

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(4);
    ll.push_back(9);
    ll.print();
    cout<<endl<<ll.search(9);
}