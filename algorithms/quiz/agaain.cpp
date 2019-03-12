#include <iostream>
#include <stack>

int main()
{
	int j;
	int T;
	cin>>T;
	for(j=1;j<=T;j++)
	{
		init();
		int len,n;
		cin>>len>>n;
		int num,t;
		char str[11];
		cout<<"Case "<<j<<":\n";
		while(n--)
		{
			memset(str,0,sizeof(str));
			cin>>str;
			if (str[4]=='L')
			{
				if (length()>=len)
				{
					cin>>num;
					cout<<"The queue is full"<<"\n";
				}
				else
				{
					cin>>num;
					lastin(num);
					cout<<"Pushed in left: "<<num<<"\n";
				}
			}
			else if (str[4]=='R')
			{
				if (length()>=len)
				{
					cin>>num;
					cout<<"The queue is full"<<"\n";
				}
				else
				{
					cin>>num;
					headin(num);
					cout<<"Pushed in right: "<<num<<"\n";
				}
			}
			else if (str[3]=='L')
			{
				if (length()==0)
				{
					cout<<"The queue is empty"<<"\n";
				}
				else
				{
					t=lastout();
					cout<<"Popped from left: "<<t<<"\n";
				}
			}
			else if (str[3]=='R')
			{
				if (length()==0)
				{
					cout<<"The queue is empty"<<"\n";
				}
				else
				{
					t=headout();
					cout<<"Popped from right: "<<t<<"\n";
				}
			}
		}
	}
	return 0;
}