
#include <iostream>
#include <map>

using namespace std;

struct Node{
  
  bool is_end;
  int prefix_count;
  struct Node *child[26];

};

void init (Node *head){
  
  head->prefix_count = 0;
  head->is_end = false;

}

void insert (string word, Node *head){

  Node *current = head;
  current->prefix_count++;
  for (int i = 0; i < word.length(); i++){

    int letter = (int)word[i]-(int)'a';
    if (current->child[letter] == NULL) 
      current->child[letter] = new Node();
    current->child[letter] -> prefix_count++;
    current = current->child[letter];

  }
  current->is_end = true;
}

bool search (string word, Node *head){

  Node *current = head;
  for (int  i = 0; i < word.size(); i++){
    int letter = (int)word[i] - (int)'a';
    if (current->child[letter] == NULL) return false;
    current = current->child[letter];
  }
  return current->is_end;
}

int words_with_prefix(string prefix, Node *head){

  Node *current = head;
  for (int i = 0; i < prefix.length(); i++){
    int letter = (int)prefix[i] - (int)'a';
    if (current->child[letter] == NULL) return 0;
    else current = current->child[letter];
  }
  return current->prefix_count;
}

int main(){

  int n, q;
  cin >> n >> q;
  string s;
  Node *head = new Node();
  init(head);
  for (int i = 0; i < n; i++)
  {
    cin >> s;
    insert(s, head);
  }

  for (int i = 0; i < q; i++)
  {
    cin >> s;
    cout << words_with_prefix(s, head) << endl;
  }
  cout << endl;
}