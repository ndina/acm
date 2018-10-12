#include<bits/stdc++.h>

using namespace std;

struct Node
{
  int val;
  Node *prev,*next;
  Node(int _val) {
    val = _val;
    prev = next = NULL;
  }
};



struct LinkedList
{
public:
  Node *head,*tail;
  LinkedList() {
    head = tail = NULL;
  }
  int cnt(int x) {
    if(head == NULL) return 0;
    Node *cur = head;
    int res = 0;
    while(cur != tail && cur != NULL) {
      if(cur -> val == x) ++ res;
      cur = cur -> next;
    }
    if(tail != NULL && tail -> val == x) ++ res;
    return res;
  }
  int getNth(int x) {
    Node *cur = head;
    int res = 0,cnt = 0;
    while(cnt != x + 1) {
      if(cur == NULL) return -1;
      res = cur -> val;
      cur = cur -> next;
      ++ cnt;
    }
    if(cnt < x + 1) return -1;
    return res;
  }
  void insertLast(int x) {
    if(tail == NULL) {
      head = tail = new Node(x);
    }
    else {
      tail -> next = new Node(x);
      tail = tail -> next;
    }
  }
  void insertFirst(int x) {
    Node *node = new Node(x);
    if(head == NULL) {
      head = tail = node;
      return;
    }  
    head -> prev = node;
    node -> next = head;
    head = node;
  }
  void deleteFirst() {
    head = head -> next;
    if(head != NULL) {
      head -> prev = NULL;
    } else {
      tail = NULL;
    }
  }
  void deleteLast() {
    tail = tail -> prev;
    if(tail != NULL) {
      tail -> next = NULL;
    } else {
      head = NULL;
    }
  }
  void del(int x) {
    Node *cur = head;
    while(cur && cur -> val != x) {
      cur = cur -> next;
    }
    if(!cur) return;
    if(cur == head) deleteFirst();
    else if(cur == tail) deleteLast();
    else {
      cur -> next -> prev = cur -> prev;
      cur -> prev -> next = cur -> next;
    }
  }
  void print() {
    Node *cur = head;
    while(cur) {
      if(cur != head) cout << " ";
      cout << (cur -> val);
      cur = cur -> next;
    }
    cout << "\n";
  }
};

int main() {
  int n,x;
  cin >> n;
  string s;
  Node * linkedList = new LinkedList();
  for(int i = 1;i <= n;i ++) {
    cin >> s;
    if(s == "insertFirst") {
      cin >> x;
      linkedList -> insertFirst(x);
    }
    if(s == "delete") {
      cin >> x;
      linkedList -> del(x);
    }
    if(s == "deleteFirst") {
      linkedList -> deleteFirst();
    }
    if(s == "deleteLast") {
      linkedList -> deleteLast();
    }
    if(s == "insertLast") {
      cin >> x;
      linkedList -> insertLast(x);
    }
    if(s == "cnt") {
      cin >>x ;
      cout << linkedList -> cnt(x) << "\n";
    }
    if(s == "getNth") {
      cin >> x;
      cout << linkedList -> getNth(x) << "\n";
    }
  }
  linkedList -> print();
  return 0;
}