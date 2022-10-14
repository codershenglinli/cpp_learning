#include<iostream>
using namespace std;

struct linkRec{
    int data;
    linkRec *next;
};
int main(){
    int x;
    linkRec *head, *p, *rear;
    head = rear = new linkRec;
    while (true){
        cin >> x;
        if(x==0) break;
        p = new linkRec;
        p->data = x;
        rear->next = p;
        rear = p;
    }
    
    rear->next=NULL;

    cout << "链表的内容为：";
    p = head->next;
    while(p!=NULL){
        cout << p->data << endl;
        p=p->next;
    }
    return 0;
}