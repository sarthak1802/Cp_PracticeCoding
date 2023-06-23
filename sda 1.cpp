#include <iostream>
using namespace std;
//program to store any 15 number and print all the number // using single dimensional array 

int main()
{
	int n[15],i;
	
	for (i=0;i<15;i++)
	{
		cout << "enter number"<<endl;
		cin>>n[i];
	}
	for(i=0;i<15;i++)
	{
		cout<<"no is "<<n[i]<<endl;
	}
}