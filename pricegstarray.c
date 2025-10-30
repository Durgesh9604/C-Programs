#include<stdio.h>
#include<conio.h>
int main()
{
	float price[3];
	printf("enter the prices\n=");
	scanf("%f %f %f",&price[0],&price[1],&price[2]);
	
	printf("price of item 1 with gst=%.2f\n",price[0]+(0.18*price[0]));
	printf("price of item 2 with gst=%.2f\n",price[1]+(0.18*price[1]));
	printf("price of item 3 with gst=%.2f",price[2]+(0.18*price[2]));	
	
	getch();
	return 0;
}
