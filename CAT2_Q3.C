/*
Name : George Waweru Muriuki
Reg No :CT101/G/23698/24
*/
#include <stdio.h>

int main() {
    float hoursworked, hourlywage, grosspay, taxes, netpay ,overtimehours, overtimewage;

    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursworked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourlywage);

    
    if (hoursworked > 40) {
    	overtimehours = hoursworked - 40;
    	overtimewage = hourlywage * 1.5;
    	grosspay = 40 * hourlywage + overtimehours * overtimewage; 
	}else{
		grosspay = hoursworked * hourlywage;
	}
	
	if(grosspay<=600){
		taxes = grosspay * 0.15;
	}else{
		taxes = 600 * 0.15 + (grosspay - 600)* 0.2;
	}

    netpay = grosspay - taxes;

    printf("Gross Pay: %.2f\n", grosspay);
    printf("Taxes: %.2f\n", taxes);
    printf("Net Pay: %.2f\n", netpay);

    return 0;
}
