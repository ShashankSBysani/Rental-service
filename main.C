/*Rental Service Application

*This APP Is Used For Renting Car 

*This App Gives You A Wide Varity Of Cars To Chose

*This Also Has Differnt Pricing For Differnt Cars.*/



#include<stdio.h> 
#include<string.h> //String Headar Files

// Used To Store Customer Details
struct details {
    char customer_name[50];
    long long int number;
    int pincode;
};
//Used To Store Car Brands
struct store {
    char car_name[20];
    struct details customer;
};

// Void Function To Rent A Car
void car_rent()
{
//brands available is used to stored in array
    char car_Brand[6][20]={"FORD","TATA","MERCEDES","AUDI","ISUZU"};
    int RENT[6]={250,500,650,750,850};
    char user_brand[20]; // to store the input of user array is used
	unsigned int days=0;
	int RENT_PRICE;
	struct store rented;
	
	
	//TAKES INPUT FROM CUSTOMER
	printf("|| FORD \n|| TATA \n|| MERCEDES \n|| AUDI \n|| ISUZU \n");
    printf("Enter car brand: ");
    scanf("%s", rented.car_name);
    printf("Enter customer name: ");
    gets(rented.customer.customer_name);
    fgets(rented.customer.customer_name, sizeof(rented.customer.customer_name), stdin);
    printf("Enter customer number: ");
    scanf("%lld", &rented.customer.number);
    printf("Enter customer pincode: ");
    scanf("%d", &rented.customer.pincode);
	printf("BRANDS AVAILABLE");
	printf("\n'FORD','TATA'',''MERCEDES','AUDI'','ISUZU'\n");// these are the brands available for the renting of cars
	printf("|*|PER DAY RENT DEPEND ON CAR BRAND|*|\n ||FORD       -  250|| \n ||TATA       -  500|| \n ||MERCEDES   -  650|| \n ||AUDI       -  750|| \n ||ISUZU      -  850|| ");//PRICE OF THE CAR HAS DIFFERENT PRICES
    printf("\nNO OF DAYS YOU WANT TO RENT:");
	scanf("%u",&days);
	strcpy(user_brand, rented.car_name);
	int sucess = 0;
	
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
            break;
        }
    }
        if (!sucess) {
        printf("%s IS NOT AVAILABLE FOR RENT.\n", user_brand);
        printf("PLEASE SELECT OTHER CAR BRANDS");
    }
}

//FUNCTION TO RETURN CAR
void car_return()
{
	printf("car returned.\n");
}
void display_available_car()
{
	printf("Available Car For Rent is\n");
	printf("FORD \n TATA \n MERCEDES \n AUDI \n ISUZU\n");
}
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
