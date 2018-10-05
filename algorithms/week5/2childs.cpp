#include <iostream>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;
set<int>s;

vector<int>v;

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

void childs2(node * root){
	if((root->left != NULL) && (root->right != NULL)){
       v.push_back(root->val);
       	childs2(root->left);
       	childs2(root->right);
 	}

 	else if(root->left != NULL){
 		childs2(root->left);

 	}
 	else if(root->right != NULL){
 		childs2(root->right);
 	}
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

   childs2(root);

   sort(v.begin(), v.end());

 for(int i = 0; i < v.size(); i++){
 	cout << v[i] << endl;
 }

	return 0;
}



