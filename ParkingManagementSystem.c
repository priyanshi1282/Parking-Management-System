// date : 25-07-2021
// project : Parking management system for vehicals like cycles,motor-bikes,cars and buses
// author : Priyanshi Agrawal
// co-author : Atharv Vani

#include <stdio.h>
#include <stdlib.h>
int no_of_cycle = 0, //global var to store number of all vehicals and amount
    no_of_motorbike = 0,
    no_of_car = 0,
    no_of_bus = 0,
    total_vehicals = 0,
    total_amt = 0;

char show_menu();       //to select option
void show_details();    //shows record of parking lot
void count_cycle();     //counts total number of cycle
void count_motorbike(); //counts total number of motorbikes
void count_car();       //counts total number of cars
void count_bus();       //counts total number of buses
void delete_details();  //sets value of all variables to Zero
void main()
{
    char confirm_exit;
    char confirm_delete;
    printf("\n\t\tWelcome to the parking lot managment system %c", 1);
    printf("\n----------------------------------------------------");
    while (1) // infinite loop
    {
        switch (show_menu())
        {
        case '1':
            count_cycle();
            printf("Entry recorded successfully\n");
            break;
        case '2':
            count_motorbike();
            printf("Entry recorded successfully\n");
            break;
        case '3':
            count_car();
            printf("Entry recorded successfully\n");
            break;
        case '4':
            count_bus();
            printf("Entry recorded successfully\n");
            break;
        case '5':
            printf("\n********************************************");
            show_details();
            printf("\n********************************************");

            break;
        case '6':
            printf("\nAre you sure you want to DELETE ALL details ? Press y/Y to confirm : ");
            getchar();
            scanf("%c", &confirm_delete);
            if (confirm_delete == 'y' || confirm_delete == 'Y')
            {
                delete_details();
            }
            break;
        case '7':
            printf("\nAre you sure you eant to EXIT the program ? Press y/Y to confirm : ");
            getchar();
            scanf("%c", &confirm_exit);
            if (confirm_exit == 'y' || confirm_exit == 'Y')
            {
                exit(0);
            }
            break;
        default:
            printf("\nPlease select valid code\n");
        }
        getchar(); //gets the enter hitted by user
    }
}
void count_cycle()
{
    if (no_of_cycle < 200)
    {
        no_of_cycle++;
        total_amt += 5;
        total_vehicals++;
    }
    else
        printf("\nSorry, no free space left for cycle parking.");
}
void count_motorbike()
{
    if (no_of_motorbike < 150)
    {
        no_of_motorbike++;
        total_amt += 10;
        total_vehicals++;
    }
    else
        printf("\nSorry, no free space left for motor-bike parking.");
}
void count_car()
{
    if (no_of_car < 100)
    {
        no_of_car++;
        total_amt += 20;
        total_vehicals++;
    }
    else
        printf("\nSorry, no free space left for care parking.");
}
void count_bus()
{
    if (no_of_bus < 15)
    {
        no_of_bus++;
        total_amt += 20;
        total_vehicals++;
    }
    else
        printf("\nSorry, no free space left for bus parking.");
}
void delete_details()
{
    no_of_cycle = 0,
    no_of_motorbike = 0,
    no_of_car = 0,
    no_of_bus = 0,
    total_vehicals = 0,
    total_amt = 0;
}
void show_details()
{
    printf("\n\t\t\tDETAILS OF PARKING LOT");
    printf("\n1.Cycle Details - ");
    printf("\ntotal cycles parked : %d", no_of_cycle);
    printf("\ntotal free space left for cycle : %d/200", 200 - no_of_cycle);
    printf("\ntotal amount received for cycles : %d", no_of_cycle * 5);

    printf("\n\n2.Motor-bike Details - ");
    printf("\ntotal motor-bikes parked : %d", no_of_motorbike);
    printf("\ntotal free space left for motor-bikes : %d/150", 150 - no_of_motorbike);
    printf("\ntotal amount received for motor-bikes : %d", no_of_motorbike * 10);

    printf("\n\n3.Car Details - ");
    printf("\ntotal cars parked : %d", no_of_car);
    printf("\ntotal free space left for cars : %d/100", 100 - no_of_car);
    printf("\ntotal amount received for cars : %d", no_of_car * 20);

    printf("\n\n4.Bus Details - ");
    printf("\ntotal bus parked : %d", no_of_bus);
    printf("\ntotal free space left for bus : %d/15", 15 - no_of_bus);
    printf("\ntotal amount received for bus : %d", no_of_bus * 20);

    printf("\n\nTotal vehical parked : %d", total_vehicals);
    printf("\nTotal free space left : %d/465", 465 - total_vehicals);
    printf("\nTotal amount earned : %d\n", total_amt);
}
char show_menu()
{
    printf("\nSelect from following options :");
    printf("\n1 -> for cycle entry");
    printf("\n2 -> for motor-bike entry");
    printf("\n3 -> for car entry");
    printf("\n4 -> for bus entry");
    printf("\n5 -> for displaying details");
    printf("\n6 -> for deleting details");
    printf("\n7 -> for exiting program");
    printf("\nSELECT CODE : ");
    char code_selected;
    scanf("%c", &code_selected);
    return code_selected;
}
