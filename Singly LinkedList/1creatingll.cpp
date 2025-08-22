#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){  //constructor
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){  //non-parameterised constructor
        head = tail = NULL;
    } 
};

int main(){ 
    List ll;
}   
