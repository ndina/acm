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
int h = 0;

node * add(int x, node * root){
	node * n = new node(x);
		if(root == NULL){
			root = n;
			root->level = 1;
			h = max(h, root->level);

		}else{
			if(x < root->val){
				if(root->left == NULL){
					root->left= n;
					root->left->level = root->level + 1;
					h = max(h, root->left->level );

				}
				else{
					add(x,root->left);
				}
			}
			else if(x > root->val){
				if(root->right == NULL){
					root->right = n;
					root->right->level = root->level + 1;
					h = max(h, root->right->level );
				}
				else{
					add(x, root->right);
					
				}
			}
		}
		return root;
	}


int count(node * root){
 if(root == NULL){
 	return 0;
 }
 	return count(root->right) + count(root->left) + 1;

}

int main(){

	node *root =NULL;

	while(true){
		int x;
        int res;
		cin >> x;

		if(x == 0){
			break;
		}

		else{
          root = add(x, root);
		}
	}

	cout << count(root);

	return 0;
}