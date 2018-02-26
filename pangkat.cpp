#include <iostream>
#include <string>

using namespace std;

main() {
int a = 1;
int b = 2;
	for (a=1; a<25; a++) {

		cout <<a <<"^" <<"2 + " <<b <<"^" <<"3 = " <<((a*a)+(b*b*b)) <<"\n";
		
	
	a=a+1;
	b=b+2;
	}
	return 0;
}
