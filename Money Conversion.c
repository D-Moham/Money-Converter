#include <stdio.h>
#include <string.h>
#include <math.h>
#include <float.h>

int main() {

    int choiceOne;
    int choiceTwo;
    float currencyAmount;
    float currencyConversion;
    

    printf("Chose Currency you are converting from: (Select a number)\n");
    printf("1. US Dollar\n");
    printf("2. Mexican Peso\n");
    printf("3. Japanese Yen\n");
    printf("4. Egyptian Pound\n");
    printf("5. Indian Rupee\n");
    printf("6. Euro\n");
    scanf("%d", &choiceOne);

    switch (choiceOne){
        case 1:

            printf("Chose Currency you are converting to: (Select a number)\n");
            printf("1. US Dollar\n");
            printf("2. Mexican Peso\n");
            printf("3. Japanese Yen\n");
            printf("4. Egyptian Pound\n");
            printf("5. Indian Rupee\n");
            printf("6. Euro\n");
            scanf("%d", &choiceTwo);

            switch(choiceTwo){
                case 1:
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*1;
                    printf("Your converted amount is: $%.2f \n", currencyConversion);
            
                break;
                case 2: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*18.09;
                    printf("Your converted amount is: $%.2f \n", currencyConversion);
                break;
                case 3: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*133.56;
                    printf("Your converted amount is: ¥%.2f \n", currencyConversion);
                break;
                case 4: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount/30.90;
                    printf("Your converted amount is: £%.2f \n", currencyConversion);
                break;
                case 5: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*81.99;
                    printf("Your converted amount is: ₹%.2f \n", currencyConversion);
                break;
                case 6: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*0.91;
                    printf("Your converted amount is: €%.2f \n", currencyConversion);
                break;
            
            }
        break;
        case 2: 
         printf("Chose Currency you are converting to: (Select a number)\n");
            printf("1. US Dollar\n");
            printf("2. Mexican Peso\n");
            printf("3. Japanese Yen\n");
            printf("4. Egyptian Pound\n");
            printf("5. Indian Rupee\n");
            printf("6. Euro\n");
            scanf("%d", &choiceTwo);

            switch(choiceTwo){
                case 1:
                    printf("Enter the Amount: \n");
                    scanf("%.2f", &currencyAmount);

                    currencyConversion = currencyAmount*0.06;
                    printf("Your converted amount is: $%.2f \n", currencyConversion);
            
                break;
                case 2: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*1;
                    printf("Your converted amount is: $%.2f \n", currencyConversion);
                break;
                case 3: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*7.56;
                    printf("Your converted amount is: ¥%.2f \n", currencyConversion);
                break;
                case 4: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*1.71;
                    printf("Your converted amount is: £%.2f \n", currencyConversion);
                break;
                case 5: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*4.53;
                    printf("Your converted amount is: ₹%.2f \n", currencyConversion);
                break;
                case 6: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*0.05;
                    printf("Your converted amount is: €%.2f \n", currencyConversion);
                break;
            
            }
        break;
        case 3: 
         printf("Chose Currency you are converting to: (Select a number)\n");
            printf("1. US Dollar\n");
            printf("2. Mexican Peso\n");
            printf("3. Japanese Yen\n");
            printf("4. Egyptian Pound\n");
            printf("5. Indian Rupee\n");
            printf("6. Euro\n");
            scanf("%d", &choiceTwo);

            switch(choiceTwo){
                case 1:
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*0.007;
                    printf("Your converted amount is: $%.2f \n", currencyConversion);
            
                break;
                case 2: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*0.13;
                    printf("Your converted amount is: $%.2f \n", currencyConversion);
                break;
                case 3: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*1;
                    printf("Your converted amount is: ¥%.2f \n", currencyConversion);
                break;
                case 4: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*0.23;
                    printf("Your converted amount is: £%.2f \n", currencyConversion);
                break;
                case 5: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*0.6;
                    printf("Your converted amount is: ₹%.2f \n", currencyConversion);
                break;
                case 6: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*0.007;
                    printf("Your converted amount is: €%.2f \n", currencyConversion);
                break;
            
            }
        break;
        case 4: 
         printf("Chose Currency you are converting to: (Select a number)\n");
            printf("1. US Dollar\n");
            printf("2. Mexican Peso\n");
            printf("3. Japanese Yen\n");
            printf("4. Egyptian Pound\n");
            printf("5. Indian Rupee\n");
            printf("6. Euro\n");
            scanf("%d", &choiceTwo);

            switch(choiceTwo){
                case 1:
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*0.03;
                    printf("Your converted amount is: $%.2f \n", currencyConversion);
            
                break;
                case 2: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*0.58;
                    printf("Your converted amount is: $%.2f \n", currencyConversion);
                break;
                case 3: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*4.41;
                    printf("Your converted amount is: ¥%.2f \n", currencyConversion);
                break;
                case 4: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*1;
                    printf("Your converted amount is: £%.2f \n", currencyConversion);
                break;
                case 5: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*2.65;
                    printf("Your converted amount is: ₹%.2f \n", currencyConversion);
                break;
                case 6: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*0.03;
                    printf("Your converted amount is: €%.2f \n", currencyConversion);
                break;
            
            }
        break;
        case 5: 
         printf("Chose Currency you are converting to: (Select a number)\n");
            printf("1. US Dollar\n");
            printf("2. Mexican Peso\n");
            printf("3. Japanese Yen\n");
            printf("4. Egyptian Pound\n");
            printf("5. Indian Rupee\n");
            printf("6. Euro\n");
            scanf("%d", &choiceTwo);

            switch(choiceTwo){
                case 1:
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*0.01;
                    printf("Your converted amount is: $%.2f \n", currencyConversion);
            
                break;
                case 2: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*0.22;
                    printf("Your converted amount is: $%.2f \n", currencyConversion);
                break;
                case 3: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*1.67;
                    printf("Your converted amount is: ¥%.2f \n", currencyConversion);
                break;
                case 4: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*0.38;
                    printf("Your converted amount is: £%.2f \n", currencyConversion);
                break;
                case 5: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*1;
                    printf("Your converted amount is: ₹%.2f \n", currencyConversion);
                break;
                case 6: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*0.01;
                    printf("Your converted amount is: €%.2f \n", currencyConversion);
                break;
            
            }
        break;
        case 6: 
         printf("Chose Currency you are converting to: (Select a number)\n");
            printf("1. US Dollar\n");
            printf("2. Mexican Peso\n");
            printf("3. Japanese Yen\n");
            printf("4. Egyptian Pound\n");
            printf("5. Indian Rupee\n");
            printf("6. Euro\n");
            scanf("%d", &choiceTwo);

            switch(choiceTwo){
                case 1:
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*1.10;
                    printf("Your converted amount is: $%.2f \n", currencyConversion);
            
                break;
                case 2: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*19.85;
                    printf("Your converted amount is: $%.2f \n", currencyConversion);
                break;
                case 3: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*150.23;
                    printf("Your converted amount is: ¥%.2f \n", currencyConversion);
                break;
                case 4: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*34.06;
                    printf("Your converted amount is: £%.2f \n", currencyConversion);
                break;
                case 5: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*90.09;
                    printf("Your converted amount is: ₹%.2f \n", currencyConversion);
                break;
                case 6: 
                    printf("Enter the Amount: \n");
                    scanf("%f", &currencyAmount);

                    currencyConversion = currencyAmount*1;
                    printf("Your converted amount is: €%.2f \n", currencyConversion);
                break;
            
            }
        break;

    
    }

    return(0);
}