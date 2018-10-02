#include <iostream>
#include <list>
using namespace std;
int main(){
 list<int > l1,l2;
 char c;
 int n,x;
 cin>>n;
 list<int> :: iterator it;

 for(int i=0; i<n; i++){
  cin>>c;
  if(c=='+'){
   cin>>x;
   l1.push_back(x);
  }
  else if(c=='-'){
   cout<<l1.front()<<endl;
   l1.pop_front();
  }
  else if(c=='*'){
   cin>>x;
   it=l1.begin();if(l1.size()%2==0){
   for(int i=0; i<l1.size()/2; i++)it++;
   l1.insert(it,x);
  }
  else {
   for(int i=0; i<l1.size()/2; i++)it++;
    it++;
   l1.insert(it,x);
  }
 }
 }

}