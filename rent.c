#include"main.h"
#include<string.h>
// Void Function To Rent A Car
void car_rent()
{
	int sucess = 0;
	int RENT_PRICE;
	unsigned int days=0;
//brands available is used to stored in array
    char car_Brand[6][20]={"FORD","TATA","MERCEDES","AUDI","ISUZU"};
    int RENT[6]={250,500,650,750,850};
    char user_brand[20]; // to store the input of user array is used
	 store rented;
	//TAKES INPUT FROM CUSTOMER
	printf("BRANDS AVAILABLE");
	printf("\n'FORD','TATA'',''MERCEDES','AUDI'','ISUZU'\n");// these are the brands available for the renting of cars
	printf("|*|PER DAY RENT DEPEND ON CAR BRAND|*|\n ||FORD       -  250|| \n ||TATA       -  500|| \n ||MERCEDES   -  650|| \n ||AUDI       -  750|| \n ||ISUZU      -  850|| ");//PRICE OF THE CAR HAS DIFFERENT PRICES
    printf("\nEnter car brand: ");
    scanf("%s", rented.car_name);
    to_uppercase(rented.car_name);
    printf("Enter customer name: ");
    gets(rented.customer.customer_name);
    fgets(rented.customer.customer_name, sizeof(rented.customer.customer_name), stdin);
    printf("Enter customer number: ");
    scanf("%lld", &rented.customer.number);
    printf("Enter customer pincode: ");
    scanf("%d", &rented.customer.pincode);
	printf("\nNO OF DAYS YOU WANT TO RENT:");
	scanf("%u",&days);
	strcpy(user_brand, rented.car_name);

	// for loop is used to check every element in array
    for(int i = 0; i < 5; i++)
	 {
        if(strcmp(car_Brand[i], user_brand) == 0)
		{
            printf("%s IS AVAILABLE FOR RENT.\n", user_brand);
            sucess = 1;
             RENT_PRICE=days*RENT[i];
            printf("\nTOTAL RENT: %d",RENT_PRICE);
            printf("\nCar brand: %s\n", rented.car_name);
            printf("Customer name: %s\n", rented.customer.customer_name);
            printf("Customer number: %lld\n", rented.customer.number);
            printf("Customer pincode: %d\n", rented.customer.pincode);
            FILE *data ;
            data=fopen("rentedcars.txt","a");
            if(data!=NULL){
            fprintf(data,"\nTOTAL RENT: %u",days);
            fprintf(data,"\nTOTAL RENT: %d",RENT_PRICE);
            fprintf(data,"\nCar brand: %s\n", rented.car_name);
            fprintf(data,"Customer name: %s\n", rented.customer.customer_name);
            fprintf(data,"Customer number: %lld\n", rented.customer.number);
            fprintf(data,"Customer pincode: %d\n", rented.customer.pincode);
            fclose(data);}
            else{
                printf("error in writing");
            }
        }
    }
        if (!sucess) {
        printf("%s IS NOT AVAILABLE FOR RENT.\n", user_brand);
        printf("PLEASE SELECT OTHER CAR BRANDS");
    }
}
