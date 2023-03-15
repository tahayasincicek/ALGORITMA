#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int enkucuk(int dizi[], int esayisi){
	
	int k,gecici = dizi[0];
	
	for(k=1;k<esayisi;k++){
		
		if(gecici>dizi[k]){
			
			gecici=dizi[k];
		}
	}
	return gecici;
}

int main(int argc, char *argv[]) {
	
	int esayisi,k;

	
	printf("Lutfen eleman sayisini giriniz: ");
	scanf("%d", &esayisi);
	int dizi[esayisi];
	for(k=0;k<esayisi;k++){
		
		printf("Lutfen %d. elemani giriniz: ", k+1);
        scanf("%d", &dizi[k]);
        
	}
	
	printf("\nEn kucuk eleman: %d", enkucuk(dizi,esayisi));

	
	
	return 0;
}



/* *1* 1+(n+1)+n
   *2* 1
   *3* 1
   *4* 1
   T(n) = 2n+5*/

