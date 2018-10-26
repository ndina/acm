#include <bits/stdc++.h>

using namespace std;

struct Node
{
	bool is_end;
	int prefix_cnt;
	struct Node *child[26];
	
};

void init(Node *head){
	head->prefix_cnt = 0;
	head->is_end = false;
}

void insert(string word, Node *head){
	Node *current = head;
	current->prefix_cnt++;
	for(int i = 0; i < word.size(); i++){
		int letter = word[i] - 'a';
		if(current->child[letter] == NULL){
			current->child[letter] = new Node();
			current->child[letter] ->prefix_cnt++;
			current = current->child[letter];
		}
	}
	current->is_end = true;
}

void search(string word, Node *head){
	Node *current = head;
	for(int i = 0; i < word.size(); i++){
		int letter = word[i] - 'a';
		if(current->child[letter] == NULL) return false;
		current = current->child[letter];
	}
	return current->is_end;
}

int words_with_prefix(string prefix, Node *head){
	Node *current = head;
	for(int i = 0; i < prefix.size(); i++){
		int letter = prefix[i] - 'a';
		if(current->child[letter] == NULL) return 0;
		else current = current->child[letter];
	}
	return current->prefix_cnt;
}
int main(){
	int n, q;
	cin >> n >> q;
	string s;
	Node *head = new Node();
	init(head);

	for(int i = 0; i < q; i++){
		cin >> s;
		cout << words_with_prefix(s, head) << endl;
	}
	cout << endl;


	return 0;
}