#include <iostream> 
#include<cmath> 
  
using namespace std; 
  
int main() 
{ 
   float x; 
   float y; 
   float z; 
   float res;
   
   cin>>x>>y>>z; 
   res = x + y + z; 
        
   if(res>=90)cout<<"A"; 

   else if((res>=70) && (res<90)) cout<<"B"; 
   else if((res>=50) && (res<70))cout<<"C"; 
   else if(res<50) cout<<"F";    
   return 0; 
}