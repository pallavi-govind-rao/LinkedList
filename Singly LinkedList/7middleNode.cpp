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
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    int count = 0;
    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
            count++;
        }
        cout<<endl;
    }
    void findMid(){
        int n = count/2 + 1;
        int a = 1;
        Node* temp = head;
        while(a < n){ //3
            temp = temp->next;
            a++;
        }
        while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        }
    };
};

int main(){
    List ll;
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.push_back(8);
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.push_back(8);
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);

    ll.print();
    ll.findMid();

}