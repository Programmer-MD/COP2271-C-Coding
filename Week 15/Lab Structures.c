#include <stdio.h>
#include <stdlib.h>

// Program 1
struct metal
{

    char name[20];
    double resistivity;
    double rPower;
    double length_in_m;
    double radius_in_mm;

};

int main ()
{
    struct metal c =  { "Copper", 1.688, -8, 80, 5};

    printf("Name: %s\nResisivity: %.4lf *10^%.2lf\nLength in Meters: %.2lf\nRadius in mm: %.2lf\n", c.name, c.resistivity, c.rPower, c.length_in_m, c.radius_in_mm);


    struct metal a1;

    struct metal *ptr;

    ptr = &a1;

    strcpy(ptr->name, "strcpy");
    ptr->resistivity = 1;
    ptr->rPower   = 1;
    ptr->length_in_m = 1;
    ptr->radius_in_mm = 1;

    printf("Name: %s\nResisivity: %.4lf *10^%.2lf\nLength in Meters: %.2lf\nRadius in mm: %.2lf\n", ptr->name, ptr->resistivity, ptr->rPower, ptr->length_in_m, ptr->radius_in_mm);

    return 0;
}