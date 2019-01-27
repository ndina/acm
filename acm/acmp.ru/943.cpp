     #include<iostream>
      using namespace std; 
      int N,M,X,Y,a[100][100],k=0,sum=0; 
      int input() { 
      	cin >> N >> M >> Y >> X;
       } 
      int main() { 
      	input();
      	 for (int i = 0;i <=N+1;i++) {
      	  for(int j = 0;j<=M+1;j++) { 
      	  	a[i][j]=-2; } } 
      	  	for(int i = 1;i<=N;i++) {
      	  	 for(int j= 1;j<=M;j++) {
      	  	  a[i][j]=0; } } 
      	  	  for(int i = 1;i<=N;i++) {
      	  	   if(a[i][k]==-2) { 
      	  	   	for(int j = 1;j<=M;j++) { 
      	  	   		a[i][j]=sum; k++; sum++; }
      	  	   		 continue; }
      	  	   		  if(a[i][k+1]==-2) {
      	  	   		   for(int j = M;j>=1;j--) { a[i][j]=sum; k--; sum++; } continue; } k=0; } cout << a[Y][X]; }
