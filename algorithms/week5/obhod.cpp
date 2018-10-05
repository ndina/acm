#include <iostream>
#include <cmath>
#include <set>
using namespace std;

struct node{
	int val;
	int level;
	node * left;
	node * right;

	node(int x){
		val = x;
		level = -1;
		left = NULL;
		right = NULL;
	}
};

node * add(int x, node * root){
	node * n = new node(x);
		if(root == NULL){
			root = n;
			root->level = 1;
		}else{
			if(x < root->val){
				if(root->left == NULL){
					root->left= n;
					root->left->level = root->level + 1;
				}
				else{
					add(x,root->left);
				}
			}
			else if(x > root->val){
				if(root->right == NULL){
					root->right = n;
					root->right->level = root->level + 1;
				}
				else{
					add(x, root->right);
					
				}
			}
		}
	return root;
}

int rightmost(node * root){
	if(root->right == NULL) 
		return root->val;
	rightmost(root->right);
}

node * del(int x, node * root){
	node * cur = root;
	if(root == NULL) 
		return root;
	if(root->val == x){
		if(root->right == NULL && root->left == NULL){
			cur = root->right;
			delete root;
			return cur;
		}
		if(root->right != NULL && root->left == NULL){
           cur = root->right;
           delete root;
           return cur;
		}
		if(root->right == NULL && root->left != NULL){
           cur = root->left;
           delete root;
           return cur;
		}
		root->val = rightmost(root->left);
		root->left = del(root->left, root->val);
		return root;
	}
	if(x < root->val){
		root->left = del(root->right, x);
		return root;
	}

	if(x > root->val){
		root->right = del(root->right,x);
		return root;
	}

}

int list(node * root){

	node * ans = root;

	while(ans->left != NULL){
		ans = ans->left->val;
	}
	if(ans->left->left == NULL){
		return ans->left->val;
		del(ans->left);
	}
	if(ans->left->right != NULL){
		list(ans->left);
	}
	
}

int main(){

		node * root = NULL;

		while(1){
			int x;
			cin >> x;
			if(x == 0){
				break;
			}
			else{
				root = add(x, root);
			}
		}

		cout << list(root);

		return 0;
	}

