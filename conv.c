#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int c_f(void), f_c(void), km_m(void),m_km(void), no(void);
int c, f, km, m;
float nm, ms, nm_ms(void), ms_nm(void);
char op[10]; 
int main(void) {
	setbuf(stdout, NULL);
printf("----------------------------------------------------- \
 \n |c_f. Celsius to Fahrenheit,\n |f_c. Fahrenheit to Celsius,\n |km_m. Kilometers to Miles,\n |m_km. Miles to Kilometers,\n |nm_m. Nautical miles to Meters,\n\
 |ms_nm. Meters to Natuical miles,\n |mm_cm. Millimeters to Centimeters,\n |cm_mm.Centimeters to Millimeters,\n |cm_dm. Centimeters to Decimeters,\n\
 |dm_cm. Decimeters to centimeters,\n |cm_km. Centimeters to Kilometers,\n |km_cm. Kilometers to Centimeters,\n |ms_km. Meters to Kilometers,\n |km_ms Kilometers to Meters,\n\
 |cm_m. centimeters to meters,\n |m_cm. meters to centimeters,\n |e - exit \n\
--------------------------------------------------");
	printf("\nEnter the operation: ");
	scanf("%s", op);
   	while(strcmp(op, "0") != 0) {
    		if(!strcmp(op, "c_f")) {
    	 		c_f();
            	} else if(!strcmp(op, "f_c")) {
                	f_c();		
    		} else if(!strcmp(op, "km_m")) {
                	km_m();	
    		} else if(!strcmp(op, "m_km")) { 
    			m_km();
    		} else if(!strcmp(op, "nm_ms")) { 
    			nm_ms();
    		} else if(!strcmp(op, "ms_nm")) {
    			ms_nm(); 
    		} else {
    			main();
    		}
	}
} int c_f(void) {
	printf("Enter the temperature of celcius ( C): ");
	scanf("%d", &c);
 	f = (c * 1.8) + 32.0;
	printf("Temperature in fahrenheit: %.2d ( F)", f);
	printf("\nAre u wanna continue: (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		c_f();
	} no(); 
} int f_c(void) {	
	printf("Enter the temperature of fahrenheit (°F): ");
	scanf("%d", &f);
	c = (f - 32.0) * 5/9;
	printf("Temperature in celcius: %.2d (°C)", c);
	printf("\nAre u wanna continue: (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		f_c();
	} no();
} int km_m(void) {
	printf("Enter the value of kilometers: ");
	scanf("%d", &km);
	m = (km * 0.62137);
	printf("Value in miles: %.2d ", m);
	printf("\nAre u wanna continue (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	 if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		km_m();
	} no();
} int m_km(void) {
	printf("Enter the value of miles: ");
	scanf("%d", &m);
	km = (m / 0.62137);
	printf("Value in kilometers: %.2d ", km);
	printf("\nAre u wanna continue (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		m_km();
	} no();
} float nm_ms(void) {
	printf("Enter the value in meters: ");
	scanf("%f", &ms);
	nm = (ms / 1852);
	printf("Value in nautical miles: %.2f", nm);
	printf("\nAre u wanna continue, (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		nm_ms();
	} no();
} float ms_nm(void) {
	printf("Enter the value in nautical miles: ");
	scanf("%f", &nm);
	ms = (nm * 1852);
	printf("Value in meters: %.2f", ms);
	printf("\nAre u wanna continue, y or n\n");
	printf("Enter the operation: ");
	scanf("%s", op);
} int no(void) {
	if(!strcmp(op, "n") || (!strcmp(op, "N"))) {
		main();
	}
}	
