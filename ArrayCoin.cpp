#include <iostream>

using namespace std;



int uangmasukkan ;
int nominalexist [] = {5000,1000,500,100,50,5,1};
int n, result=0;
int temporator;
int main ()
{

 cout << "Masukkan nilai uang yang akan ditukar ... = ";
 cin >> uangmasukkan;	
 
 for ( n=0 ; n<=2 ; n++ )
 
 {
  	 if (nominalexist[n]<=uangmasukkan){

  	 	temporator = uangmasukkan/nominalexist[n];
  	 	cout << temporator << " pcs " << " Rp. " << nominalexist[n];
  	 	uangmasukkan-=temporator*nominalexist[n];
  	 }	
	  //   cout << nominalexist[n];
  	 cout << "  ";
 }

// cout << sizeof(billy); 
 //cout << result;
 cout <<" \n ";
  
  return 0;
} 
