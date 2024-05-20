#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    char menuOption;
    char tempOption;
    char currOption;
    char currFromAudOption;
    char currToAudOption;
    char massOption;
    char massMgOption;
    char massGramOption;
    char massKgOption;

    float userInputFarenheit;
    float userInputCelsius;

    float jpy;
    float aud;
    float php;
    float jpyToAud;
    float audToJpy;
    float phpToAud;
    float audToPhp;

    float g;
    float mg;
    float kg;

    float farenheitToCelsius;
    float celsiusToFarenheit;

    bool tempMenuOn = false;
    bool currMenuOn = false;
    bool currFromAudMenuOn = false;
    bool currToAudMenuOn = false;
    bool massMenuOn = false;
    bool massMgMenuOn = false;
    bool massGramMenuOn = false;
    bool massKgMenuOn = false;
    bool menuOn = true;

    while (menuOn != false)
    {
        printf("\n---------------------------------------------------------------------------------------\n\n");

        printf("\nCool Unit Converter!\n");
        printf("------------------------------\n");

        printf("List of conversion types:\n");
        printf("a) Temperature\n");
        printf("b) Currency\n");
        printf("c) Mass\n");
        printf("x) to exit\n");
        printf("Enter Choice: ");
        scanf(" %c", &menuOption); // space needed

        switch (menuOption)
        {
        case 'a':
            tempMenuOn = true;

            while (tempMenuOn != false)
            {
                printf("\n---------------------------------------------------------------------------------------\n\n");

                printf("\nWelcome to Temperature Converter!\n\n");
                printf("Please choose conversion type: \n");
                printf("(a) for Farenheit to Celsius. \n");
                printf("(b) for Celsius to Farenheit \n");
                printf("(x) back \n");
                printf("Enter Choice: ");
                scanf(" %c", &tempOption);

                switch (tempOption)
                {
                case 'a':
                    printf("\nPlease enter the Farenheit degree: ");
                    scanf(" %f", &userInputFarenheit);

                    farenheitToCelsius = (userInputFarenheit - 32) / 1.8;

                    printf("%.2f degrees celsius\n", farenheitToCelsius);

                    break;

                case 'b':
                    printf("\nPlease enter the Celsius degree: ");
                    scanf(" %f", &userInputCelsius);

                    celsiusToFarenheit = (userInputCelsius * 1.8) + 32;

                    printf("%.2f degrees Farenheit\n", celsiusToFarenheit);

                    break;

                case 'x':
                    tempMenuOn = false;

                    break;

                default:
                    printf("\nInvalid Choice, Please Try Again\n");

                    break;
                }
            }

            break;
        case 'b':
            currMenuOn = true;

            while (currMenuOn != false)
            {
                printf("\n---------------------------------------------------------------------------------------\n\n");

                printf("\nWelcome to Currency Converter!\n\n");
                printf("Please choose conversion type: \n");
                printf("(a) From AUD \n");
                printf("(b) To AUD \n");
                printf("(x) back \n");
                printf("Enter Choice: ");
                scanf(" %c", &currOption);

                switch (currOption)
                {
                case 'a':

                    currFromAudMenuOn = true;

                    while (currFromAudMenuOn != false)
                    {
                        printf("\nChoose a country to convert from: \n");
                        printf("(a) JPY \n");
                        printf("(b) PHP \n");
                        printf("(x) back \n");
                        printf("Enter Choice: ");
                        scanf(" %c", &currFromAudOption);

                        switch (currFromAudOption)
                        {
                        case 'a':
                            printf("\nPlease enter JPY: ");
                            scanf(" %f", &jpy);

                            jpyToAud = jpy * 0.0097;

                            printf("$%0.2f AUD\n", jpyToAud);

                            break;

                        case 'b':
                            printf("\nPlease enter PHP: ");
                            scanf(" %f", &php);

                            phpToAud = php * 0.026;

                            printf("$%0.2f AUD\n", phpToAud);

                            break;

                        case 'x':
                            currFromAudMenuOn = false;

                            break;

                        default:
                            printf("\nInvalid Choice, Please Try Again\n");

                            break;
                        }
                    }

                    break;

                case 'b':
                    currToAudMenuOn = true;

                    while (currToAudMenuOn != false)
                    {
                        printf("\nChoose a country to convert To: \n");
                        printf("(a) JPY \n");
                        printf("(b) PHP \n");
                        printf("(x) back \n");
                        printf("Enter Choice: ");
                        scanf(" %c", &currToAudOption);

                        switch (currToAudOption)
                        {
                        case 'a':
                            printf("\nPlease enter AUD: ");
                            scanf(" %f", &aud);

                            audToJpy = aud * 103.04;

                            printf("¥%0.2f JPY\n", audToJpy);

                            break;

                        case 'b':
                            printf("\nPlease enter AUD: ");
                            scanf(" %f", &aud);

                            audToPhp = aud * 38.36;

                            printf("₱%0.2f PHP\n", audToPhp);

                            break;

                        case 'x':
                            currToAudMenuOn = false;

                            break;

                        default:
                            printf("\nInvalid Choice, Please Try Again\n");

                            break;
                        }
                    }

                    break;

                case 'x':
                    currMenuOn = false;

                    break;

                default:
                    printf("\nInvalid Choice, Please Try Again\n");

                    break;
                }
            }

            break;
        case 'c':
            massMenuOn = true;

            while (massMenuOn != false)
            {
                printf("\n---------------------------------------------------------------------------------------\n\n");

                printf("\nWelcome to Mass Converter!\n\n");
                printf("Please choose conversion type: \n");
                printf("(a) for mg to ??  \n");
                printf("(b) for g to ??  \n");
                printf("(c) for kg to ?? \n");
                printf("(x) back \n");
                printf("Enter Choice: ");
                scanf(" %c", &massOption);

                switch (massOption)
                {
                case 'a':
                    massMgMenuOn = true;

                    while (massMgMenuOn != false)
                    {
                        printf("\nChoose a mass to convert To: \n");
                        printf("(a) g \n");
                        printf("(b) kg \n");
                        printf("(x) back \n");
                        printf("Enter Choice: ");
                        scanf(" %c", &massMgOption);

                        switch (massMgOption)
                        {
                        case 'a':
                            printf("\nPlease enter Milligrams: ");
                            scanf(" %f", &mg);

                            g = mg * 0.001;

                            printf("%0.2f g\n", g);

                            break;

                        case 'b':
                            printf("\nPlease enter Milligrams: ");
                            scanf(" %f", &mg);

                            kg = mg * 0.000001;

                            printf("%0.2f kg\n", kg);

                            break;

                        case 'x':
                            massMgMenuOn = false;

                            break;

                        default:
                            printf("\nInvalid Choice, Please Try Again\n");

                            break;
                        }
                    }

                    break;

                case 'b':
                    massGramMenuOn = true;

                    while (massGramMenuOn != false)
                    {
                        printf("\nChoose a mass to convert To: \n");
                        printf("(a) mg \n");
                        printf("(b) kg \n");
                        printf("(x) back \n");
                        printf("Enter Choice: ");
                        scanf(" %c", &massGramOption);

                        switch (massGramOption)
                        {
                        case 'a':
                            printf("\nPlease enter Grams: ");
                            scanf(" %f", &g);

                            mg = g * 1000;

                            printf("%0.2f mg\n", mg);

                            break;

                        case 'b':
                            printf("\nPlease enter Grams: ");
                            scanf(" %f", &g);

                            kg = g * 0.001;

                            printf("%0.2f kg\n", kg);

                            break;

                        case 'x':
                            massGramMenuOn = false;

                            break;

                        default:
                            printf("\nInvalid Choice, Please Try Again\n");

                            break;
                        }
                    }

                    break;

                case 'c':
                    massKgMenuOn = true;

                    while (massKgMenuOn != false)
                    {
                        printf("\nChoose a mass to convert To: \n");
                        printf("(a) mg \n");
                        printf("(b) g \n");
                        printf("(x) back \n");
                        printf("Enter Choice: ");
                        scanf(" %c", &massKgOption);

                        switch (massKgOption)
                        {
                        case 'a':
                            printf("\nPlease enter Kilograms: ");
                            scanf(" %f", &kg);

                            g = kg * 1000;

                            printf("%0.2f g\n", g);

                            break;

                        case 'b':
                            printf("\nPlease enter Kilograms: ");
                            scanf(" %f", &kg);

                            mg = kg * 1000000;

                            printf("%0.2f mg\n", mg);

                            break;

                        case 'x':
                            massKgMenuOn = false;

                            break;

                        default:
                            printf("\nInvalid Choice, Please Try Again\n");

                            break;
                        }
                    }

                    break;

                case 'x':
                    massMenuOn = false;

                    break;

                default:
                    printf("\nInvalid Choice, Please Try Again\n");

                    break;
                }
            }

            break;
        case 'x':
            printf("\nBye bye!\n\n");

            menuOn = false;
            break;
        default:
            printf("\nInvalid Choice! Please choose again :)\n");

            break;
        }
    }
    return 0;
}