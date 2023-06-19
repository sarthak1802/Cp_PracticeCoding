#include <iostream>
using namespace std;

int main()
{
	int a,s,c,f,ch,ans=0;
	
	do
	{
      cout<<"enter any one number"<<endl;
	  cin>>a;
	  
	  cout<<"the square is 1"<<endl;
	  cout<<"the cube is 2"<<endl;
	  cout<<"the factorial is 3"<<endl;
	  cout<<"the exit is 4"<<endl;
	  
	  cout<<"enter your choice"<<endl;
	  cin>>ch;
	  
	  switch(ch)
	  {
		  case 1:
		  {
			  s=a*a;
			  cout<<"the square is"<<s<<endl;
			  break;
		  }
		   case 2:
		  {
			  c=a*a*a;
			  cout<<"the cube is"<<c<<endl;
			  break;
		  }
		   case 3:
		  {
			  f=1;
			  for(int i=a;i>1;i--)
			  {
			    f=f*i;
			  }
				cout<<"the factorial is"<<f<<endl;
				break;
	      }
		    case 4:
		   {
			   break;
		   }
		    default:
		   {
			   cout<<"wrong choice"<<endl;
			   break;
		   }
		  
		  cout<<"continue your program yes=0,no=1"<<endl;
		  cin>>ans;
		  }
		 
		  }while(ans==0);
	  }
		  