#include<iostream>
using namespace std; 
main( ) 
{  
      int  s[2][2];
      int  i, j;
      cout<<"\n2D Array Input:\n";
	  for(i=0;i<2;i++)
	  {
	  	for(j=0;j<2;j++)
	  	{
	  		cout<<"\ns["<<i<<"]["<<j<<"]=  ";
	  		cin>>s[i][j];
		}
	  } 
	  
	  cout<<"\nThe 2-D Array is:\n";
      for(i=0;i<2;i++)
	  {
	  	for(j=0;j<2;j++)
	  	{
	  		cout<<"\t"<<s[i][j];
		}
		cout<<endl;
	  } 
}

OUTPUT:-------

  2D Array Input:

s[0][0]=  2

s[0][1]=  4

s[1][0]=  5

s[1][1]=  1

The 2-D Array is:
	2	4
	5	1
