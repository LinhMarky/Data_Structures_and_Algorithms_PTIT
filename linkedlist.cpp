#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};

int main(){
    node* head = new node(3);
    head->next = new node(2);
    head->next->next = new node(5);
    head->next->next->next = new node(6);
    head->next->next->next->next = new node(1);
    head->next->next->next->next->next = new node(4);
    head->next->next->next->next->next->next = new node(7);

    node* p = head;
    while(p){
        cout << p->data << " ";
        p = p->next;
    }
}