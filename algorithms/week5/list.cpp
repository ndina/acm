#include <iostream>
#include <cmath>
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

/*int list(node * root){
	
	node * ans = root;

	while(ans->right != NULL || ans->left != NULL ){
		if(ans->right ==NULL && ans->left == NULL){
			return ans->val;
		}
		else{
			list(ans)
		}

	}


}

*/
bool ok = false;

void childs(node * root){
//	node * ans = root;
    
   if(root == NULL){
    	return;
    }
  
	childs(root->left);

	if((root->left == NULL) && (root->right == NULL)){
		if(ok) cout << " ";
		cout << root->val;
		ok = true;
	}
	childs(root->right);

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

	childs(root);

	return 0;
}