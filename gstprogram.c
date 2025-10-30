#include <stdio.h>
#include <conio.h>

int gstafter(float p1,float p2,float p3,float gst);

int main()
{
	float p1,p2,p3;
	float gst=0.18;
	printf("\nenter the price of item 1:");
	scanf("%f",&p1);
	
	
	printf("\nenter the price of item 2:");
	scanf("%f",&p2);
	
	printf("\nenter the price of item 3:");
	scanf("%f",&p3);
	
	printf(":::::::::::::::::ORIGINAL PRICES WITHOUT GST::::::::::::::::::::\n");
	printf("price of item 1=%.2f\n",p1);
	printf("price of item 2=%.2f\n",p2);
	printf("price of item 3=%.2f\n",p3);
	
	gstafter(p1,p2,p3,gst);

	
	getch();
	return 0;
}
int gstafter(float p1,float p2,float p3,float gst)
{
	p1=p1+p1*gst;
	p2=p2+p2*gst;
	p3=p3+p3*gst;
	
	printf(":::::::::::::::::PRICES WITH GST::::::::::::::::::::\n");
	printf("price of item 1=%.2f\n",p1);
	printf("price of item 2=%.2f\n",p2);
	printf("price of item 3=%.2f\n",p3);
	
	getch();
	return 0;
}
