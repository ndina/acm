#include <iostream>
#include <map>


using namespace std;

struct Node{
  map<char,Node*>child;
  int howmany;
  bool isitEnd;
  Node(){
    howmany=0;
    isitEnd=false;
  }
};


void insertString(Node *root,string s){
  Node *current=root;
  //current->howmany++;
  for(int i =0;i<s.size();i++){
    char c=s[i];
    Node *node =current->child[c];
    if(!node){
      node=new Node();
      current->child[s[i]]=node;
    }
    current=node;
    current->howmany++;
  }
  current->isitEnd=true;
}

bool doestriehave(Node *root,string s){
  Node *current=root;
  for(int i =0;i<s.size();i++){
    char c=s[i];
    Node *node=current->child[c];
    if(!node){
      return false;
    }
    current=node;
  }
  return current->isitEnd;
}

int howmanyStarts(Node *root,string s){
  Node *current=root;
  for(int i=0;i<s.size();i++){
    char c=s[i];
    Node *node =current->child[c];
    if(!node){
      return 0;
    }
    current=node;
  }
  return current->howmany;
}

int main(){
  int n;
  cin>>n;
  int q;
  string s;
  //Node *root;
  for(int i =0;i<n;i++){
    cin>>q;
    string a[q];
    int cnt=0;
    bool b=true;
    Node *root=new Node();
    for(int j=0;j<q;j++){
      cin>>s;
      a[j]=s;
      insertString(root,s);
    }
    for(int k=0;k<q;k++){
      if(howmanyStarts(root,a[k])!=1){
        cout<<"NO"<<endl;
        b=false;
        break;
      }
    }
    if(b) cout<<"YES"<<endl;
  }
  return 0;
}