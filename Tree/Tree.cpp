#include "stdio.h"
#include "stdlib.h"
typedef struct TreeNode{
    int data;
    struct TreeNode *lchild,*rchild;
    int ltag=0,rtag=0;
}*Tree,TreeNode;
TreeNode* pre;
TreeNode* p;
Tree InitTree(int x){
    Tree nt=(Tree) malloc(sizeof (Tree));
    nt->data=x;
    return nt;
}
bool CombinChild(TreeNode* &t1,TreeNode* &t2,TreeNode* &Ftree){
    Ftree->lchild=t1;
    Ftree->rchild=t2;
    return true;
}
void CreatTree(int x,Tree* &T){
    Tree TreeList[x];
    TreeList[0]=NULL;
    for (int i = 1; i < x; i++)
    {
        TreeList[i]=InitTree(i);
    }
    for (int i = 1; i < x; i++)
    {
        if (2*i<=x||2*i+1<=x)
        {
            TreeList[i]->lchild=TreeList[2*i];
            TreeList[i]->rchild=TreeList[2*i+1];
        }else{
            break;
        }
    }
    T=TreeList;
}
void FindPre(Tree &T){
    TreeNode* pre=NULL;
    TreeNode* p=T;
    if (p!=NULL)
    {
        FindPre(p->lchild);
        if (p->lchild==NULL)
        {
            p->lchild=pre;
            p->ltag=1;
        }
        if (pre!=NULL&&pre->rchild==NULL)
        {
            pre->rchild=p;
            pre->rtag=1;
        }
        pre=p;
        FindPre(p->rchild);
    }
    
}
void MidOrder(Tree T){
    MidOrder(T->lchild);
    FindPre(T);
    MidOrder(T->rchild);
}
int main(){
    
//    Tree* TreeList;
   
//    free(TreeList);
for (int i = 0; i < 5; i++)
{
    /* code */
    printf("%d",i);
    printf("1111");
}

   
    return 1;


}
