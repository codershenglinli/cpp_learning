#include "class.h"
#include <iostream>
using namespace std;
void RLList::del(int i){
            LinkNode *p = sentinel;
            LinkNode *q = p;
            while(p->next!=p){
                for(int j=0;j<i-2;++j){
                    q = q->next;
                }
                p = q->next->next;
                cout << q->next->data;
                delete q->next;
                q->next = p;
                q=p;
                if(p->next!=p) cout << ' ';
            }
            cout << '\n' << p->data;
        }
