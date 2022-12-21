#ifndef _Joseph
#define _Joseph

//每个人都是一个节点
class LinkNode{
    //RLList类是LinkNode的友元
    friend class RLList;
    private:
        int data;
        LinkNode *next;
};

class RLList{
    private:
        LinkNode *sentinel;
    public:
        RLList(int n){
            sentinel = new LinkNode;
            LinkNode *p = sentinel;
            p->data = 1;
            for(int i=2;i<=n;++i){
                LinkNode *q = new LinkNode;
                q->data = i;
                p->next = q;
                p = q;
            }
            p->next = sentinel;
        }
        void del(int i);
};

#endif