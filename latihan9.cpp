#include <iostream>
using namespace std;

int main() { 
    
	int a = 21;
	int b = 10;  
	int c;

	if(a && b){ 
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}

	if(a != b){ 
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}
	
	if(a || b){ 
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}
    
    return 0;
}