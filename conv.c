#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int c, f, c_f(void), f_c(void), no(void), e(void);
float nm, ms, nm_ms(void), ms_nm(void), km, mi, km_mi(void), mi_km(void), mm, cm, mm_cm(void), mm_dm(void), mm_km(void), cm_mm(void), dm, cm_dm(void), dm_cm(void), cm_km(void), km_cm(void), ft, cm_ft(void), ih, cm_ih(void);
char op[10]; 

int main(void) {
	setbuf(stdout, NULL);
printf("----------------------------------------------------- \
 \n |c_f. Celsius to Fahrenheit,\n |f_c. Fahrenheit to Celsius,\n |cm_mm.Centimeters to Millimeters,\n |cm_dm. Centimeters to Decimeters, |cm_km. Centimeters to Kilometers, |cm_ft. Centimeters to Feet\n\
 |km_m. Kilometers to Miles,\n |m_km. Miles to Kilometers,\n |nm_ms. Nautical miles to Meters,\n |ms_nm. Meters to Natuical miles,\n |mm_cm. Millimeters to Centimeters,\n \
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
			} else if(!strcmp(op, "mm_cm")) {
				mm_cm(); 
			} else if(!strcmp(op, "mm_dm")) {
				mm_dm(); 
			} else if(!strcmp(op, "mm_km")) {
				mm_km();
			} else if(!strcmp(op, "mm_ft")) {
				mm_ft(); 
			} else if(!strcmp(op, "mm_ih")) {
				mm_ih();
			} else if(!strcmp(op, "cm_mm")) {
				cm_mm();
			} else if(!strcmp(op, "cm_dm")) {
				cm_dm();
			} else if(!strcmp(op, "dm_cm")) {
				dm_cm();
			} else if(!strcmp(op, "cm_km")) {
				cm_km(); 
			} else if(!strcmp(op, "cm_ft")) {
				cm_ft();
			} else if(!strcmp(op, "cm_ih")) {
				cm_ih(); 
			} else if(!strcmp(op, "dm_mm")) {
				dm_mm();
			} else if(!strcmp(op, "dm_cm")) {
				dm_cm();
			} else if(!strcmp(op, "dm_km")) {
				dm_km();
			} else if(!strcmp(op, "dm_ft")) {
				dm_ft();
			} else if(!strcmp(op, "dm_ih")) {
				dm_ih();
			} else if(!strcmp(op, "km_mm")) {
				km_mm();
			} else if(!strcmp(op, "km_cm")) {
				km_cm(); 
			} else if(!strcmp(op, "km_ft")) {
                		km_ft();	
			} else if(!strcmp(op, "km_ih")) {
				km_ih(); 
			} else if(!strcmp(op, "m_km")) { 
				m_km();
			} else if(!strcmp(op, "nm_ms")) { 
				nm_ms();
			} else if(!strcmp(op, "ms_nm")) {
				ms_nm(); 
			} else if(!strcmp(op, "km_cm")) {
				km_cm();
			} else if(!strcmp(op, "e")) {
				e();
			} else {
				printf("Invalid input");
				main();
			}
		}
	} 
int c_f(void) {
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
return c_f();
} 
int f_c(void) {	
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
return f_c();
}
float mm_cm(void) {
	printf("Enter the value in milimeters: ");
	scanf("%f", &mm);
	cm = (mm / 10);
	printf("Value in centimeters: %.2f", cm);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		mm_cm();
	} no();
return mm_cm();
}
float mm_dm(void) {
	printf("Enter the value in milimeters: ");
	scanf("%f", &mm);
	dm = (mm / 100);
	printf("Value in decimeters: %.2f", dm);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		mm_dm();
	} no();
return mm_dm();
}
float mm_km(void) {
	printf("Enter the value in milimeters: ");
	scanf("%f", &mm);
	km = (mm / 1000000);
	printf("Value in decimeters: %.6f", km);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		mm_km();
	} no();
return mm_km();
}
float mm_mi(void) {
	printf("Enter the value in milimeters: ");
	scanf("%f", &mm);
	mi = (mm * 0.00000062137);
	printf("Value in miles: %.7f", km);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		mm_mi();
	} no();
return mm_mi();
}
float mm_ft(void) {
	printf("Enter the value in milimeters: ");
	scanf("%f", &mm);
	ft = (mm / 304.8);
	printf("Value in decimeters: %.17f", ft);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		mm_ft();
	} no();
return mm_ft();
}
float mm_ih(void) {
	printf("Enter the value in milimeters: ");
	scanf("%f", &mm);
	ih = (mm / 25.4);
	printf("Value in decimeters: %.11f", ih);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		mm_ih();
	} no();
return mm_ih();
}
float cm_mm(void) {
	printf("Enter the value in centimeters: ");
	scanf("%f", &cm);
	mm = (cm * 10);
	printf("Value in milimeters: %.2f", mm);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		cm_mm();
	} no();
return cm_mm();
}
float cm_dm(void) {
	printf("Enter the value in centimeters: ");
	scanf("%f", &cm);
	dm = (cm / 10);
	printf("Value in decimeters: %.2f", dm);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		cm_dm();
	} no();
return cm_dm();
}
float cm_km(void) {
	printf("Enter the value in centimeters: ");
	scanf("%f", &cm);
	km = (cm / 100000);
	printf("Value in kilometers: %.6f", km);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		cm_km();
	} no();
return cm_km();
} 
float cm_ft(void) {
	printf("Enter the value in centimeters: ");
	scanf("%f", &cm);
	ft = (cm / 30.48);
	printf("Value in feets: %.16f", ft);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		cm_ft();
	} no();
return cm_ft();
}
float cm_ih(void) {
	printf("Enter the value in centimeters: ");
	scanf("%f", &cm);
	ih = (cm / 0.394);
	printf("Value in inches: %.8f", ih);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		cm_ih();
	} no();
return cm_ih();
}
float dm_mm(void) {
	printf("Enter the value in decimeter: ");
	scanf("%f", &dm);
	mm = (dm * 100);
	printf("Value in centimeter: %.2f", mm);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		dm_mm();
	} no();
return dm_mm();
} 
float dm_cm(void) {
	printf("Enter the value in decimeter: ");
	scanf("%f", &dm);
	cm = (dm * 10);
	printf("Value in centimeter: %.2f", cm);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		dm_cm();
	} no();
return dm_cm();
}
float dm_km(void) {
	printf("Enter the value in decimeter: ");
	scanf("%f", &dm);
	km = (dm / 10000);
	printf("Value in centimeter: %.4f", km);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		dm_km();
	} no();
return dm_km();
}
float dm_ft(void) {
	printf("Enter the value in decimeter: ");
	scanf("%f", &dm);
	ft = (dm / 3.048);
	printf("Value in centimeter: %.17f", ft);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		dm_ft();
	} no();
return dm_ft();
}
float dm_ih(void) {
	printf("Enter the value in decimeter: ");
	scanf("%f", &dm);
	ih = (dm * 3.9370);
	printf("Value in centimeter: %.15f", ih);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		dm_ih();
	} no();
return dm_ih();
}
float km_mm(void) {
	printf("Enter the value of kilometers: ");
	scanf("%f", &km);
	mm = (km * 1000000);
	printf("Value in miles: %.2f ", mm);
	printf("\nAre u wanna continue (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		km_mm();
	} no();
return km_mm();
} 
float km_cm(void) {
	printf("Enter the value in kilometers: ");
	scanf("%f", &km);
	cm = (km * 100000);
	printf("Value in kilometers: %.2f", cm);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		km_cm();
	} no();
return cm_km();
}
float km_dm(void) {
	printf("Enter the value in kilometers: ");
	scanf("%f", &km);
	cm = (km * 100000);
	printf("Value in kilometers: %.2f", cm);
	printf("\nContinue? (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		km_dm();
	} no();
return cm_dm();
}
float km_mi(void) {
	printf("Enter the value of kilometers: ");
	scanf("%f", &km);
	mi = (km * 0.62137);
	printf("Value in miles: %.2f ", mi);
	printf("\nAre u wanna continue (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		km_mi();
	} no();
return km_mi();
} 
float mi_km(void) {
	printf("Enter the value of miles: ");
	scanf("%f", &mi);
	km = (mi / 0.62137);
	printf("Value in kilometers: %.2f ", km);
	printf("\nAre u wanna continue (Y/N)\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		m_km();
	} no();
return mi_km();
} 
float nm_ms(void) {
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
return nm_ms();
} 
float ms_nm(void) {
	printf("Enter the value in nautical miles: ");
	scanf("%f", &nm);
	ms = (nm * 1852);
	printf("Value in meters: %.2f", ms);
	printf("\nAre u wanna continue, y or n\n");
	printf("Enter the operation: ");
	scanf("%s", op);
	if(!strcmp(op, "y") || (!strcmp(op, "Y"))) {
		ms_nm();
	} no();
return ms_nm();
} 
int no(void) {
	if(!strcmp(op, "n") || (!strcmp(op, "N"))) {
		main();
	}
return no();
}
int e(void) {
	exit(1);
return 0;
}	

