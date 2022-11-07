#include<iostream>
using namespace std;

//单链表
struct LinkNode{
    int data;
    LinkNode *next;
};

int main(){
    LinkNode *begin = new LinkNode;
    LinkNode *end = begin;
    LinkNode *p;

    while(true){
        int x;
        cin >> x;
        if(x==0) break;
        p = new LinkNode;
        p->data = x;
        end->next = p;
        end = p; 
    }
    end->next=NULL;
    p = begin->next;
    while(p!=NULL){
        cout << p->data << ' ';
        p=p->next;
    }

    return 0;
}