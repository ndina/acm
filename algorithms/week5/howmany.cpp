#include <iostream>
#include <cmath>
#include <map>
using namespace std;

map<int, int> m;

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

int b[100001];
int h = 0;
node * add(int x, node * root){
	node * n = new node(x);
		if(root == NULL){
			root = n;
			b[x] = 1;

			root->level = 1;
			h = max(h, root->level);

		}else{
		    if(x < root->val){
				if(root->left == NULL){
					root->left= n;
					b[x] = 1;
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
					b[x] = 1;
					root->right->level = root->level + 1;
					h = max(h, root->right->level );
				}
				else{
					add(x, root->right);
					
				}
			}
			else {
				b[x]+=1;
			}
		}
		return root;
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

	for(int i = 0; i < 100001; i++){
		if(b[i] != 0){
			cout << i << " " << b[i] << endl;
		}
	}
   return 0;
}