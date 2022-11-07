#include <iostream>
using namespace std;

struct loop{
    int data;
    loop *next; 
};
int main(){
    int n;
    cin >> n;
    loop *begin = new loop;
    loop *end = begin;
    loop *p;
    begin->data = 0;
    for(int i=1;i<n;++i){
        p = new loop;
        p->data = i;
        end->next = p;
        end = p;
    }
    end->next = begin;
    p=begin;
    while(p->next!=p){
    p=p->next;
    loop *del_ptr = p->next;
    p->next = del_ptr->next;
    delete del_ptr;
    p=p->next;
    }

    cout << p->data+1;
}