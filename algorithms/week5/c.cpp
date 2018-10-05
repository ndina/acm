#include <iostream>

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

int maxi = -100;

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

int find_max(node* root)
{
    while(root->right != NULL)
    {
        root = root->right;
    }
    return root->val;
}

int sec(node * root){
	node * ans = root;

	if(ans->right==NULL){
		return ans->left->val;
	}
	while(ans->right->right){
		ans = ans->right;
	}
	if(ans->right->left ==NULL){
		return ans->val;
	}
	return max(ans->val,find_max(ans->right->left));
}


int main(){

	node * root = NULL;
	while(true){
		int x;
		cin >> x;

		if(x == 0){
			break;
		}
		else{
			root = add(x, root);
		}

	}

	cout << sec(root);

	return 0;
}


