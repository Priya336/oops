#include<bits/stdc++.h>
using namespace std;

template<class T>
class tree{
    struct s{
        T data;
        s*left;
        s*right;
    };
    struct s*root;
    struct s*ptr;
    public:
    tree(T a){
    struct s *newnode=(struct s*)malloc (sizeof(struct s));
    root=ptr=newnode;
    newnode->data=a;
    newnode->left=NULL;
    newnode->right=NULL;
    }


void left(T a ,T b){
    struct s *newnode= (struct s*)malloc (sizeof(struct s));
    newnode->data=a;
    newnode->left=NULL;
    newnode->right=NULL;
    ptr->left=newnode;
    
      struct s *newnode1= (struct s*)malloc (sizeof(struct s));
    newnode1->data=b;
    newnode1->left=NULL;
    newnode1->right=NULL;
    ptr->right=newnode1;
    ptr=newnode;
}
void right(T a ,T b){
    struct s *newnode= (struct s*)malloc (sizeof(struct s));
    newnode->data=b;
    newnode->left=NULL;
    newnode->right=NULL;
    ptr->right=newnode;
        struct s *newnode2= (struct s*)malloc (sizeof(struct s));
    newnode2->data=a;
    newnode2->left=NULL;
    newnode2->right=NULL;
    ptr->left=newnode2;
     ptr=newnode;
}

void print(){
    struct s* temp=root;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        if(temp->left->left==NULL){
              cout<<temp->left->data<<endl;
            temp=temp->right;
        }
        else{
              cout<<temp->right->data<<endl;
          temp=temp->left;
        }
    }
}

};


int main(){
    tree<string>t("priya");
    t.left("ritu","golu");
    t.right("raju","geeta");
    t.left("harsh","manohar");
    t.left("jyoti","nanda");
    t.print();
    return 0;
}

    //               1
    //       5                6
    //   6        7
    //         5     8
    //      8    9