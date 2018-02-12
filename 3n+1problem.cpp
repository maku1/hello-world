/**
 *3n+1 problem
 *
 *
 */
//3n+1 problem
#include <iostream>
#include <fstream>
	using std::cout;
	using std::cin;
	using std::ios;
	using std::ifstream;
int main()
{

//	ifstream infile;
//	infile.open("file.txt" );
	
	int n1 = 0,
		n2 = 0;
	int a = 0, cycle = 0, max = 0;
	int temp1 = 0, temp2 = 0;
	while(cin >> n1 >> n2)
	{
		temp1 = n1,
		temp2 = n2;
	   if(n1 > 1000000 || n2 > 1000000)
		{
			exit(0);
		}
	   if(n1 < n2)
	   {
		 int c = n1;
			n1 = n2;
			n2 = c;
	   }
	    
		while(n2 <= n1)
		{
			int n = n2;
			cycle = 1;
			while(n != 1)
			{
			    if(n % 2 == 1)
				{
					n = 3*n +1;
				}
				else
				{
				   n = n/2;
				}
				cycle++;
			}
			if(cycle > max)
			{
				max = cycle;
			
				
			}
			n2++;
		}
		

		cout << temp1 << " " << temp2  << " "<<  max << "\n";
		max = 0;
	}
	
	
	//infile.close();
	
	return 0;
}