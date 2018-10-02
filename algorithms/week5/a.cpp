#include <iostream>
#include <cmath>
#include <algorithm>
#include <queue>

using namespace std;

struct TreeNode{
	int key;
	TreeNode *left, *right;
	TreeNode(int x) : key(x), left(NULL), right(NULL){}
};

TreeNode *tree;

void insert(TreeNode *&tree, int n){
	if(!tree){
		tree = new TreeNode(n);
		return;
	}
	if(tree->key == n) return; //  2 раза не добавлять
	if(n < tree->key ) { 
		insert(tree->left, n);
	}
	else{
	    insert(tree->right, n);
	}
}

void InOrder(TreeNode *tree){
	if(!tree) return;
	bool flag;
	InOrder(tree->left);
	if((tree->left == NULL) && (tree->right == NULL)){
		if(flag) printf(" ");
		printf("%d", tree->key);
		flag = 1;
	}
	InOrder(tree->right);
}

int main(){
	int n;
     while(scanf("%d", &n), n);{
     	while(n != 0){
	insert(tree, n);
	InOrder(tree);
	printf("\n");
     	}
     }

	
}