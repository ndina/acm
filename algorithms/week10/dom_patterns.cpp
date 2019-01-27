#include<iostream>
#include<vector>
#include<map>
using namespace std;

const int p = 31;

void f(string s,map<string,int> list){

  vector<long long> p_pow;

  vector<long long> h;

  map<string,int>::iterator it;
    p_pow.push_back(1);

    for(int i = 1; i < s.size(); ++i){
        p_pow.push_back(p * p_pow[i-1]);
    }

    h.push_back(p_pow[0] * (s[0]-'a'+1));

    for(int i = 1; i < s.size(); ++i){
        h.push_back(h[i-1] + p_pow[i] * (s[i]-'a'+1));
    }

    for(it=list.begin();it!=list.end();it++){
      int k=it->first.length();
       long long h_t = 0;
       for(int i = 0; i < k; ++i){
        h_t += p_pow[i] * (it->first[i] - 'a' + 1);
    }

     for(int i=0;i<=s.size()-k;i++){
        long long cur_h=h[i+k-1];
        if(i) cur_h-=h[i-1];
        if(cur_h==h_t*p_pow[i])
          it->second++;
        
      }
    }

    int maxi=list.begin()->second;
    
    for(it=list.begin();it!=list.end();it++){
      if(it->second>=maxi)
        maxi=it->second;
    }

    cout<<maxi<<endl;

    for(it=list.begin();it!=list.end();it++){
      if(it->second==maxi)
        cout<<it->first<<endl;
      
    }
    

    
}
int main(){

int n;

while(cin>>n&&n!=0){

  map<string,int> list;

  map<string,int>::iterator it;

  string s;

  for(int i=0;i<n;i++){

    cin>>s;

    list.insert(pair<string,int>(s,0));
  }
  cin>>s;

  f(s,list);
  
}

return 0;
  }