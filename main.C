/*Rental Service Application

*This APP Is Used For Renting Car

*This App Gives You A Wide Varity Of Cars To Chose

*This Also Has Differnt Pricing For Differnt Cars.*/
#pragma pack(1)
#include"main.h"
#include"rent.c"
#include<stdio.h>
#include<string.h> //String Headar Files
#include"return.c"
#include"display.c"
#include"upper.c"
int main()
{
		int x;//1=display choice

    printf("Welcome to the rental sevices\n");
	do{


	printf("\n TO RENT  PRESS 1\n TO RETURN PRESS 2\n PRESS 3 TO DISPLAY AVAILABLE CARS \n PRESS 4 TO EXIT \n");
	scanf("%d",&x);//'x'Receive The Input From Customer//


	//Switch Case Statement Is Used For Menu
	switch(x)
	{
		case 1:
		car_rent();
			break;
		case 2:
		car_return();
			break;
	    case 3:
	    	display_available_car();
	    	break;
		case 4:
    printf("Thank you for using our  application 1.1\n");
    break;
		default:
		printf("WRONG CHOICE!! Try again.\n");
	}
}
while(x!=4);{
}
}
