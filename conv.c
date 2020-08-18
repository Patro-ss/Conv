#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <wctype.h>
//somethig more
int main()
{
    double c, f, km, m, nm, ms, mm, cm;
    char op;
    printf("\n1. Celsius to Fahrenheit, \n2. Fahrenheit to Celsius, \n3. Kilometers to Miles, \n4. Miles to Kilometers, \n5. Nautical miles to Meters, \n6. Meters to Natuical miles, \n7. Millimeters to Centimeters\
	\n8.Centimeters to Millimeters ");
    printf("\nEnter the operation: ");
    scanf("%s", &op);
    while(op != '0')
    {
        if(op == '1')
        {
            printf("Enter the temperature of celcius (°C): ");
            scanf("%lf", &c);

            f = (c * 1.8) + 32.0;
            printf("Temperature in fahrenheit: %.2lf (°F)", f);
            printf("\nAre u wanna continue, y or n\n");
            printf("Enter the operation: ");
            scanf("%s", &op);
            while(op != '0')
            {
                if(op == 'y')
                {
                    printf("Enter the temperature of celcius (°C): ");
                    scanf("%lf", &c);

                    f = (c * 1.8) + 32.0;
                    printf("Temperature in fahrenheit: %.2lf (°F)", f);
                    printf("\nAre u wanna continue, y or n\n");
                    printf("Enter the operation: ");
                    scanf("%s", &op);
                }
                if(op == 'n')
                {
                    return main();
                }
            }
        }
        if(op == '2')
        {
            printf("Enter the temperature of fahrenheit (°F): ");
            scanf("%lf", &f);

            c = (f - 32.0) * 5/9;
            printf("Temperature in celcius: %.2lf (°C)", c);
            printf("\nAre u wanna continue, y or n\n");
            printf("Enter the operation: ");
            scanf("%s", &op);
            while(op != '0')
            {
                if(op == 'y')
                {
                    printf("Enter the temperature of fahrenheit (°F): ");
		    scanf("%lf", &f);

                    c = (f - 32.0) * 5/9;
                    printf("Temperature in celcius: %.2lf (°C)", c);
                    printf("\nAre u wanna continue, y or n\n");
                    printf("Enter the operation: ");
                    scanf("%s", &op);
                }
                if(op == 'n')
                {
                    return main();
                }
            }
        }
        if(op == '3')
        {
            printf("Enter the value of kilometers: ");
            scanf("%lf", &km);

            m = (km * 0.62137);
            printf("Value in miles: %.2lf ", m);
            printf("\nAre u wanna continue, y or n\n");
            printf("Enter the operation: ");
            scanf("%s", &op);
            while(op != '0')
            {
                if(op == 'y')
                {
                    printf("Enter the value of kilometers: ");
                    scanf("%lf", &km);

                    m = (km * 0.62137);
                    printf("Value in miles: %.2lf ", m);
                    printf("\nAre u wanna continue, y or n\n");
                    printf("Enter the operation: ");
                    scanf("%s", &op);
                }
                if(op == 'n')
                {
                   return main();
                }
            }
        }
        if(op == '4')
        {
            printf("Enter the value of miles: ");
            scanf("%lf", &m);

            km = (m / 0.62137);
            printf("Value in kilometers: %.2lf ", km);
            printf("\nAre u wanna continue, y or n\n");
            printf("Enter the operation: ");
            scanf("%s", &op);
            while(op != '0')
            {
                if(op == 'y')
                {
                    printf("Enter the value of miles: ");
                    scanf("%lf", &m);

                    km = (m / 0.62137);
                    printf("Value in kilometers: %.2lf ", km);
                    printf("\nAre u wanna continue, y or n\n");
                    printf("Enter the operation: ");
                    scanf("%s", &op);
                }
                if(op == 'n')
                {
                    return main();
                }
            }
        }
        if(op == '5')
        {
            printf("Enter the value in meters: ");
            scanf("%lf", &ms);

            nm = (ms / 1852);
            printf("Value in nautical miles: %.2lf", nm);
            printf("\nAre u wanna continue, y or n\n");
            printf("Enter the operation: ");
            scanf("%s", &op);
            while(op != '0')
            {
                if(op == 'y')
                {
                    printf("Enter the value in meters: ");
                    scanf("%lf", &ms);

                    nm = (ms / 1852);
                    printf("Value in nautical miles: %.2lf", nm);
                    printf("\nAre u wanna continue, y or n\n");
                    printf("Enter the operation: ");
                    scanf("%s", &op);
                }
                if(op == 'n')
                {
                   return main();
                }
            }
        }
        if(op == '6')
        {
            printf("Enter the value in nautical miles: ");
            scanf("%lf", &nm);

            ms = (nm * 1852);
            printf("Value in meters: %.2lf", ms);
            printf("\nAre u wanna continue, y or n\n");
            printf("Enter the operation: ");
            scanf("%s", &op);
            while(op != 0)
            {
                if(op == 'y')
                {
                    printf("Enter the value in nautical miles: ");
                    scanf("%lf", &nm);

                    ms = (nm * 1852);
                    printf("Value in meters: %.2lf", ms);
                    printf("\nAre u wanna continue, y or n\n");
                    printf("Enter the operation: ");
                    scanf("%s", &op);
                }
                if(op == 'n')
                {
                    return main();
                }
            }
	}  
        if(op == '7')
		{
	    	printf("Enter the Milimeters value: ");	
			scanf("%lf", &mm);
			
			cm = (mm / 10);
			printf("Value in centimeters: %.2lf", cm);
			printf("\nAre u wanna continue, y or n\n");
			printf("Enter the operation: ");
			scanf("%s", &op);
			while(op != 0)
			{
				if(op == 'y')
				{
					printf("Enter the Milimeters value: ");	
					scanf("%lf", &mm);
			
					cm = (mm / 100);
					printf("Value in centimeters: %.2lf", cm);
					printf("\nAre u wanna continue, y or n \n");
					printf("Enter the operation: ");
					scanf("%s", &op);

				}
				if(op == 'n')
				{
					return main();
				}
			}		
		}
		if(op == '8')
		{
	    	printf("Enter the Centimeters value: ");	
			scanf("%lf", &cm);
			
			mm = (cm * 10);
			printf("Value in millimeters: %.2lf", mm);
			printf("\nAre u wanna continue, y or n\n");
			printf("Enter the operation: ");
			scanf("%s", &op);
			while(op != 0)
			{
				if(op == 'y')
				{
					printf("Enter the Centimeters value: ");	
					scanf("%lf", &cm);
			
					mm = (cm * 100);
					printf("Value in millimeters: %.2lf", mm);
					printf("\nAre u wanna continue, y or n\n");
					printf("Enter the operation: ");
					scanf("%s", &op);
				}
				if(op == 'n')
				{
					return main();
				}
			}		
		}
   		else
        {
            printf("Invalid operation");
            return main();
            break;
        }
    }
    return 0;
}
