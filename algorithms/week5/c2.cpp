#include <iostream>
#include <cmath>
using namespace std;

struct node{
 int level;
 int val;
    node * left;
    node * right;
    node(int x){
     val=x; 
     left=NULL;
     right=NULL;
     level=-1;
    }
};
node * add(node * root,int x){
   node * n=new node(x);
   if(root==NULL){
    root=n;
   }
   else {
    if(x>root->val){
     if(root->right==NULL){
      root->right=n;
     }
     else{
      add(root->right,x);
     }
    }
    else if(x<root->val){
     if(root->left==NULL){
      root->left=n;
     }
     else{
      add(root->left,x);
     }
    }
   }
   return root;
  }

int  f(node * root){
 int ans;
 node* cur = root;
 node* par = NULL;
 bool ok = false;
 while(true) {
  if (cur->right != NULL) {
   par = cur;
   cur = cur->right;
  } 
  else  if (cur->left != NULL) {
   if (ok)
    return cur->val;
   
   ok = true;
   par = cur;
   cur = cur->left;
  } else {
   if (ok) return cur->val;
   return par->val;
  }
 }
}
int main(){
 int x;
 node * root=NULL;
     while(true){
         cin>>x;
         if(x==0){
          break;
         }else{
        root=add(root,x);
   }
        }
  cout<<f(root);
 return 0;


}