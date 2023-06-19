#include <iostream>
using namespace std;

int main()
{
	int e;
	cout <<"enter a unit"<<endl;
	cin>> e;
	
	if (e<10)
	{ 
	 int t= e*2;
     cout<<"the total bill is"<<t<<endl;
	}
	else
	{
		if(e>=10&&e<50)
		   {
			 int t= e*3;
		    cout<<"the total bill is"<<t<<endl;
	       }
	else
	{
		 if(e>=50&&e<100)
		  {
			 int t= e*4;
		    cout<<"the total bill is"<<t<<endl;
	      }
	else
	{
		   if(e>=100&&e<200)
		    {
			   int t= e*5;
		      cout<<"the total bill is"<<t<<endl;
	        }
	else
	{
		     if(e>=200&&e<500)
		      {
			    int t= e*8;
		        cout<<"the total bill is"<<t<<endl;
	          }
	else
	{
		       if(e>=500)
		        {
			      int t= e*10;
	           	 cout<<"the total bill is"<<t<<endl;
	            }
	}
	}
	}
	}
	}
}

               
              
	       
	        