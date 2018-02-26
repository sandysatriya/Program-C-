#include <iostream>
#include <string.h>


using namespace std;

char inputanChecker [1000];

b2d()
{
    char b[8];
    int d=0,i=0;

    while(inputanChecker[i]!=0)
    {    if(inputanChecker[i]=='0'||inputanChecker[i]=='1')
        {
            d=d*2+inputanChecker[i]-48;
        }i++;
    }
    printf("\nBilangan desimal dari %s adalah = ",&inputanChecker);
    printf("%d\n",d); {
    printf("\n");
	
	return 0;
	
	}
}


int main(){

		cout << "Program Mencari Jumlah Kombinasi Bilangan \n";
		cout <<"\n";
		cout <<"\n";
		string sourceData= "10010101001011110101010001";
		
		cout <<"Masukkan bilangan yang ingin di cari kombinasinya : ";
		cin  >> inputanChecker;
		
		int cariLength = strlen(inputanChecker);
  		
	 	int i;
 	 	int indeks;
  
 		 for(i=0;i<sourceData.size();i++)	{
         int j=0;
    
	while(j<cariLength && sourceData[i+j] == inputanChecker[j])
    {
      j++; 
      if(j >= cariLength)
      {
        indeks = i;

	b2d();
					 			
  printf("Kombinasinya adalah = %d",indeks);
  
  return 0;
	
      }
    } 
  }
}

