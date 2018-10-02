#include <bits/stdc++.h>


using namespace std;


int main()
{


  int primes[100100];
  int MAX_PRIME = 9733;
  int k = 1;
  primes[1] = 2;
  for (int i = 3; i <= MAX_PRIME; i++) 
  {
    cerr << i << endl;
    
    bool ok = true;
    for (int j = 2; j <= (int)sqrt(i); j++) 
    {
      if (i % j == 0) ok = false;
    }
    
    if (ok) 
    {
      
      k++;
      primes[k] = i;
    }
  }

  
  

  stack<int> st1[100000];
  stack<int> st2[100000];
  int a, b;
  cin >> a >> b;


  for(int i = 0; i < a; i++)
  {
    int s;
    cin >> s;
    st1[0].push(s);
  }
  for(int i = 1; i <= b; i++)
  {
    while(!st1[i - 1].empty())
    {
      int t = st1[i - 1].top();
      if(t % primes[i] == 0)
      {
        st2[i].push(t);
      }
      else 
      {
        st1[i].push(t);
      }
      st1[i - 1].pop();
    }
  }
  for(int i = 1; i <= b; i++)
  {
    while(!st2[i].empty())
    {
      int top1 = st2[i].top();
      cout << top1 << endl;
      st2[i].pop();
    }
  }
  for(int i = 1; i <= b; i++)
  {
    while(!st1[i].empty())
    {
      int top2 = st1[i].top();
      cout << top2 << endl;
      st1[i].pop();
    }
  }
}