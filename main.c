#include <stdio.h>

int main(void) {
  int choice, choice2;
  float value, result;
  //unit coverter by mayank 
  
  printf("unit converter\n");
  printf("1.length\n");
  printf("2.weight\n");
  printf("3.temperature\n");
  printf("Enter the choice: ");
  scanf("%d", &choice);

  switch(choice)
    {
      case 1:
        printf("length converter\n");
        printf("1.meter to centimeter\n");
        printf("2.centimeter to meter\n");
        printf("3'kilometer to meter\n");
        printf("4.meter to kilometer\n");
    scanf("%d", &choice2);

        switch(choice2)
          {
            case 1:
            printf("Enter the value in meter: ");
            scanf("%f", &value);
            result = value * 100;
            printf("%.2f meter = %.2f centimeter\n", value, result);
            break;
            case 2:
            printf("Enter the value in centimeter: ");
            scanf("%f", &value);
            result= value / 100;
            printf("%.2f centimeter = %.2f meter\n", value, result);
            break;
            case 3:
            printf("enter the value in kilometer: ");
            scanf("%f", &value);
            result=value*1000;
            printf("%.2f is equaql tp %.2f meter\n", value, result);
            
          }
        case 2:
        printf("Weight Converter\n");
        printf("1. Kilogram to Gram\n");
        printf("2. Gram to Kilogram\n");
        printf("3. Ton to Kilogram\n");
        printf("4. Kilogram to Ton\n");
        printf("Enter your choice: ");
        scanf("%d", &choice2);

        switch (choice2) {
            case 1:
                printf("Enter value in kilograms: ");
                scanf("%f", &value);
                result = value * 1000;
                printf("%.2f kilograms is equal to %.2f grams\n", value, result);
                break;
            case 2:
                printf("Enter value in grams: ");
                scanf("%f", &value);
                result = value / 1000;
                printf("%.2f grams is equal to %.2f kilograms\n", value, result);
                break;
            case 3:
                printf("Enter value in tons: ");
                scanf("%f", &value);
                result = value * 1000;
                printf("%.2f tons is equal to %.2f kilograms\n", value, result);
                break;
            case 4:
                printf("Enter value in kilograms: ");
                scanf("%f", &value);
                result = value / 1000;
                printf("%.2f kilograms is equal to %.2f tons\n", value, result);
                break;
            default:
                printf("Invalid choice\n");
        }
        break;
        
  
      case 3:
                  printf("Temperature Converter\n");
                  printf("1. Celsius to Fahrenheit\n");
                  printf("2. Fahrenheit to Celsius\n");
                  printf("Enter your choice: ");
                  scanf("%d", &choice2);

                  switch (choice2) {
                      case 1:
                          printf("Enter value in Celsius: ");
                          scanf("%f", &value);
                          result = (value * 9 / 5) + 32;
                          printf("%.2f Celsius is equal to %.2f Fahrenheit\n", value, result);
                          break;
                      case 2:
                          printf("Enter value in Fahrenheit: ");
                          scanf("%f", &value);
                          result = (value - 32) * 5 / 9;
                          printf("%.2f Fahrenheit is equal to %.2f Celsius\n", value, result);
                          break;
                      default:
                          printf("Invalid choice\n");
                  }
                  break;

              default:
                  printf("Invalid choice\n");
          }

          return 0;
      }

  