#include <iostream>
using namespace std;

int main()
{
	int n,i;
	
	i=1;
	do
	{
    cout << "enter number"<<endl;
	cin>>n;
	if(n>0)
	{
		cout<<"the number is positive"<<n<<endl;
	}
	i=i+1;
   }
   while(i<=12);
   
}