#include <iostream>
using namespace std;
int main () {
	int M [3] [3];
	
	for (int i = 0; i < 3; i++)
	{
		for (int j =0; j<3; j++)
		{
			
			 cin >> M [i] [j];
			 
		}
	}
cout <<"|\t" << M [0] [0] << "|\t" << M [0] [1] << "|\t" << M [0] [2] << endl; 
cout <<"|\t" << M [1] [0] << "|\t" << M [1] [1] << "|\t" << M [1] [2] << endl; 
cout <<"|\t" << M [2] [0] << "|\t" << M [2] [1] << "|\t" << M [2] [2] << endl; 

return 0;	

} 