/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
/////////////////////////// SOLN LeetCode ////////////////////////////////////////////////
class Solution {
public:
    Node* getNext(Node* p){
        Node* t=p->next;
        while(t!=NULL){
            if(t->left!=NULL){
                return t->left;
            }
            else if(t->right!=NULL){
                return t->right;
            }
            else{
                return t->next;
            }
        }
        return NULL;
    }
    Node* connect(Node* p) {
        Node* temp;
        Node* root=p;
        if(!p)return NULL;
        p->next=NULL;//for root next is always NULL
        while(p!=NULL){
            Node* q=p;
            while(q!=NULL){
                if(q->left!=NULL){
                    if(q->right){
                        q->left->next=q->right;
                    }
                    else{
                        q->left->next=getNext(q); // padosh se check /// left ka no currrent right 
                    }
                }
                if(q->right!=NULL){
                    q->right->next=getNext(q);  // padosh ka check 
                }
                // inorder fashion me chalenge So.. 
                q=q->next;
            }
            // Now we have to Move to next levellll 
            if(p->left){
                p=p->left;
            }
            else if(p->right){
                p=p->right;
            }
            else{
                p=p->next;
            }
        }
      return root;  
    }
};