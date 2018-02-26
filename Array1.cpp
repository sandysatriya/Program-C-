#include <iostream>

using namespace std;

main()
{
	
	int B[10]={3,6,7,1,2,7,8,9,3,4};
	int i;
	
	cout << "Anggota Array B adalah = ";
	for (i=0; i<10; i++)
	cout << B[i]; cout << "\n";

	cout << "Anggota Array A adalah = ";
	for (i=0; i<5; i++)
	cout << B[i]; cout << "\n";

	cout << "Anggota Array C adalah = ";
	for (i=5; i<10; i++)
	cout << B[i]; cout << "\n";
}
