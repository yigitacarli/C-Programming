#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int gun,ay,yil,toplamgun;
	int guncelgun,guncelay,guncelyil;
	int toplamyil=0,toplamay=0,toplamzaman;
	int cevap;
	
	//bir yýl 365 gün.
	
	printf("Enter the day, month and year you were born: \n");
	scanf("%d%d%d",&gun,&ay,&yil);
	printf("Enter which day, month and year you are nown: ");
	scanf("%d%d%d",&guncelgun,&guncelay,&guncelyil);
	
	yil = yil*365;
	ay = ay*30;
	toplamgun = yil+ay+gun;
	
	toplamyil = guncelyil*365;
	toplamay = guncelay*30; 
	toplamzaman = toplamyil+toplamay+guncelgun;
	
	cevap = toplamzaman-toplamgun;
	
	printf("\nYou've been alive for %d days.",cevap);	
	return 0;
}
