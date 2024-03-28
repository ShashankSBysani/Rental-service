// rental service application
#include<stdio.h> //header files
#include<string.h> //string hedar files
// Function to rent a car
void car_rent()
{
    char car_Brand[6][20]={"FORD","TATA","MERCEDES","AUDI","ISUZU"};//brands available is used to stored in array
    int RENT[6]={250,500,650,750,850};
    char user_brand[20]; // to store the input of user array is used
	unsigned int days=0;
	int RENT_PRICE;
	//TAKE INPUT FROM USER TO ASK HOW MANY DAYS USING SCAN 
	printf("NO OF DAYS YOU WANT TO RENT:");
	scanf("%u",&days);
	printf("BRANDS AVAILABLE");
	printf("\n'FORD','TATA'',''MERCEDES','AUDI'','ISUZU'\n");// these are the brands available for the renting of cars
	printf("|*|PER DAY RENT DEPEND ON CAR BRAND|*|\n ||FORD       -  250|| \n ||TATA       -  500|| \n ||MERCEDES   -  650|| \n ||AUDI       -  750|| \n ||ISUZU      -  850|| ");//PRICE OF THE CAR HAS DIFFERENT PRICES
	printf("\nENTER THE CAR BRAND NAME: ");
	scanf("%s",user_brand);
	int found = 0;
	// for loop is used to check every element in array
    for(int i = 0; i < 5; i++)
	 {
        if(strcmp(car_Brand[i], user_brand) == 0)
		{
            printf("%s IS AVAILABLE FOR RENT.\n", user_brand);
            found = 1;
             RENT_PRICE=days*RENT[i];
            printf("\nTOTAL RENT: %d",RENT_PRICE);
            break;
        }
    }
        if (!found) {
        printf("%s IS NOT AVAILABLE FOR RENT.\n", user_brand);
        printf("PLEASE SELECT OTHER CAR BRANDS");
    }
}
//FUNCTION TO RETURN CAR
void car_return()
{
	printf("car returned.\n");
}
int main()
{
		int x;//1=display choice
    
    printf("Welcome to the rental sevices\n");
	do{
	

	printf("\n TO RENT  PRESS 1\n TO RETURN PRESS 2\n PRESS 3 TO EXIT \n");
	scanf("%d",&x);//'x'Receive The Input From Customer//
	switch(x)
	{
		case 1: 
		car_rent();
			break;
		case 2: 
		car_return();
			break;
		case 3:
    printf("Thank you for using our  application 1.1\n");
    break;
		default:
		printf("WRONG CHOICE!! Try again.\n");	
	}
}
while(x!=3);{
}
}
