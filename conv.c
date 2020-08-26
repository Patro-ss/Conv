#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//somethig more
int main()
{
	setbuf(stdout, NULL);
	double c, f, km, m, nm, ms, mm, cm, dm;
   	char op[10];
        printf("\nc_f. Celsius to Fahrenheit, \nf_c. Fahrenheit to Celsius, \nkm_m. Kilometers to Miles, \nm_km. Miles to Kilometers, \nnm_ms. Nautical miles to Meters, \nms_nm. Meters to Natuical miles, \
	\nmm_cm. Millimeters to Centimeters, \ncm_mm.Centimeters to Millimeters, \ncm_dm. Centimeters to Decimeters, \ndm_cm. Decimeters to centimeters, \ne - exit \n");
	printf("\nEnter the operation: ");
	scanf("%s", op); 
        
        while(strcmp(op, "0") != 0)
	{
	    if(strcmp(op, "c_f") == 0)
	    {
	        printf("Enter the temperature of celcius (°C): ");                
                scanf("%lf", &c);

		f = (c * 1.8) + 32.0;
		printf("Temperature in fahrenheit: %.2lf (°F)", f);
		printf("\nAre u wanna continue, y or n\n");
		printf("Enter the operation: ");
		scanf("%s", op);
		while(strcmp(op, "0") != 0)
		{
		    if(strcmp(op, "y") == 0)
		    {
		        printf("Enter the temperature of celcius (°C): ");
			scanf("%lf", &c);

			f = (c * 1.8) + 32.0;
			printf("Temperature in fahrenheit: %.2lf (°F)", f);
			printf("\nAre u wanna continue, y or n\n");
			printf("Enter the operation: ");
	    		scanf("%s", op);
		    }
                    else if(strcmp(op, "n") == 0)
		    {
		        return main();
		    }
		}
	    }
                else if(strcmp(op, "f_c") == 0)
		{
		    printf("Enter the temperature of fahrenheit (°F): ");
		    scanf("%lf", &f);

		    c = (f - 32.0) * 5/9;
		    printf("Temperature in celcius: %.2lf (°C)", c);
		    printf("\nAre u wanna continue, y or n\n");
		    printf("Enter the operation: ");
		    scanf("%s", op);
		    while(strcmp(op, "0") != 0)
		    {
			if(strcmp(op, "y") == 0)
			{
			    printf("Enter the temperature of fahrenheit (°F): ");
			    scanf("%lf", &f);

			    c = (f - 32.0) * 5/9;
			    printf("Temperature in celcius: %.2lf (°C)", c);
			    printf("\nAre u wanna continue, y or n\n");
			    printf("Enter the operation: ");
			    scanf("%s", op);
			}
                        else if(strcmp(op, "n") == 0)
			{
			    return main();
			}
		    }
	        }
                else if(strcmp(op, "km_m") == 0)
		{
		    printf("Enter the value of kilometers: ");
		    scanf("%lf", &km);

		    m = (km * 0.62137);
		    printf("Value in miles: %.2lf ", m);
		    printf("\nAre u wanna continue, y or n\n");
		    printf("Enter the operation: ");
	    	    scanf("%s", op);
		    while(strcmp(op, "0") != 0)
		    {
			if(strcmp(op, "y") == 0)
			{
			    printf("Enter the value of kilometers: ");
			    scanf("%lf", &km);

			    m = (km * 0.62137);
			    printf("Value in miles: %.2lf ", m);
			    printf("\nAre u wanna continue, y or n\n");
			    printf("Enter the operation: ");
			    scanf("%s", op);
			}
                        else if(strcmp(op, "n") == 0)
			{
			    return main();
			}
		    }
		}
                else if(strcmp(op, "m_km") == 0)
		{
		    printf("Enter the value of miles: ");
		    scanf("%lf", &m);

		    km = (m / 0.62137);
		    printf("Value in kilometers: %.2lf ", km);
		    printf("\nAre u wanna continue, y or n\n");
		    printf("Enter the operation: ");
		    scanf("%s", op);
		    while(strcmp(op, "0") != 0)
		    {
		        if(strcmp(op, "y") == 0)
			{
			    printf("Enter the value of miles: ");
			    scanf("%lf", &m);

			    km = (m / 0.62137);
			    printf("Value in kilometers: %.2lf ", km);
			    printf("\nAre u wanna continue, y or n\n");
			    printf("Enter the operation: ");
			    scanf("%s", op);
			}
                        else if(strcmp(op, "n") == 0)
			{
			    return main();
			}
		    }
		}
                else if(strcmp(op, "m_nm") == 0)
		{
		    printf("Enter the value in meters: ");
		    scanf("%lf", &ms);

		    nm = (ms / 1852);
		    printf("Value in nautical miles: %.2lf", nm);
		    printf("\nAre u wanna continue, y or n\n");
		    printf("Enter the operation: ");
		    scanf("%s", op);
		    while(strcmp(op, "0") != 0)
		    {
		        if(strcmp(op, "y") == 0)
			{
			    printf("Enter the value in meters: ");
			    scanf("%lf", &ms);

			    nm = (ms / 1852);
			    printf("Value in nautical miles: %.2lf", nm);
			    printf("\nAre u wanna continue, y or n\n");
			    printf("Enter the operation: ");
			    scanf("%s", op);
			}
                        else if(strcmp(op, "n") == 0)
			{
			    return main();
			}
		    }
		}
                else if(strcmp(op, "nm_m") == 0)
		{
		    printf("Enter the value in nautical miles: ");
	            scanf("%lf", &nm);

		    ms = (nm * 1852);
		    printf("Value in meters: %.2lf", ms);
		    printf("\nAre u wanna continue, y or n\n");
		    printf("Enter the operation: ");
		    scanf("%s", op);
		    while(strcmp(op, "0") != 0)
		    {
			if(strcmp(op, "y") == 0)
			{
			    printf("Enter the value in nautical miles: ");
			    scanf("%lf", &nm);

			    ms = (nm * 1852);
			    printf("Value in meters: %.2lf", ms);
			    printf("\nAre u wanna continue, y or n\n");
			    printf("Enter the operation: ");
			    scanf("%s", op);
			}
                        else if(strcmp(op, "n") == 0)
			{
			    return main();
			}
		    }
	        }  
                else if(strcmp(op, "mm_cm") == 0)
		{
		    printf("Enter the Milimeters value: ");	
		    scanf("%lf", &mm);
			
		    cm = (mm / 10);
	    	    printf("Value in centimeters: %.2lf", cm);
	    	    printf("\nAre u wanna continue, y or n\n");
		    printf("Enter the operation: ");
		    scanf("%s", op);
		    while(strcmp(op, "0") != 0)
		    {
		        if(strcmp(op, "y") == 0)
			{
			    printf("Enter the Milimeters value: ");	
			    scanf("%lf", &mm);
			
			    cm = (mm / 100);
			    printf("Value in centimeters: %.2lf", cm);
			    printf("\nAre u wanna continue, y or n \n");
			    printf("Enter the operation: ");
			    scanf("%s", op);
                        }
                        else if(strcmp(op, "n") == 0)
		        {
			    return main();
			}
		    }		
		}
                else if(strcmp(op, "cm_mm") == 0)
		{
		    printf("Enter the Centimeters value: ");	
		    scanf("%lf", &cm);
			
		    mm = (cm * 10);
		    printf("Value in millimeters: %.2lf", mm);
		    printf("\nAre u wanna continue, y or n\n");
		    printf("Enter the operation: ");
		    scanf("%s", op);
		    while(strcmp(op, "0") != 0)
		    {
		        if(strcmp(op, "y") == 0)
			{
			    printf("Enter the Centimeters value: ");	
			    scanf("%lf", &cm);
			
			    mm = (cm * 100);
			    printf("Value in millimeters: %.2lf", mm);
			    printf("\nAre u wanna continue, y or n\n");
			    printf("Enter the operation: ");
			    scanf("%s", op);
			}
                        else if(strcmp(op, "n") == 0)
			{
			    return main();
			}
		    }		
		}
                else if(strcmp(op, "cm_dm") == 0)
                {
                    printf("Enter the Centimeters value: ");	
		    scanf("%lf", &cm);
                        
                    dm = (cm / 10);
                    printf("Value in decimeters: %.2lf", dm);
                    printf("\nAre u wanna continue, y or n\n");
		    printf("Enter the operation: ");
		    scanf("%s", op);
		    while(strcmp(op, "0") != 0)
		    {
		        if(strcmp(op, "y") == 0)
			{
			    printf("Enter the Centimeters value: ");	
			    scanf("%lf", &cm);
                        
                            dm = (cm / 10);
                            printf("Value in decimeters: %.2lf", dm);
                            printf("\nAre u wanna continue, y or n\n");
			    printf("Enter the operation: ");
			    scanf("%s", op); 
                        }				
                        else if(strcmp(op, "n") == 0)
			{
			    return main();
			}
		    }		
		}
                else if(strcmp(op, "dm_cm") == 0)
                {
                    printf("Enter the Decimeters value: ");
                    scanf("%lf", &dm);

                    cm = (dm * 10);
                    printf("Value in centimeters: %.2lf", cm);
                    printf("\nAre u wanna continue, y or n\n");
                    printf("Enter the operation: ");	
		    scanf("%lf", &cm);
                    while(strcmp(op, "0") != 0)
		    {
		        if(strcmp(op, "y") == 0)
			{
                            printf("Enter the Decimeters value: ");
                            scanf("%lf", &cm);

                            cm = (dm * 10);
                            printf("Value in centimeters: %.2lf", cm);
                            printf("Enter the operation: ");	
		            scanf("%lf", &cm);
                        }
                        else if(strcmp(op, "n") == 0)
			{
			    return main();
			}
                    }
                }    
                else if(strcmp(op, "e") == 0)
                {
                    return 0;
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
