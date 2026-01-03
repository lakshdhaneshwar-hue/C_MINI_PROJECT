/*Problem Statement: Salary Calculation System*/
#include <stdio.h>

int main()
{
  char name[50];
  float basic, hra, da, gross, tax, net;

  /* Input details */
  printf("Enter employee name: ");
  scanf("%s", name);

  printf("Enter basic salary: ");
  scanf("%f", &basic);

  /* Calculations */
  hra = 0.20 * basic;       // 20% HRA
  da = 0.10 * basic;        // 10% DA
  gross = basic + hra + da; // Gross Salary
  tax = 0.05 * gross;       // 5% Income Tax
  net = gross - tax;        // Net Salary

  /* Output details */
  printf("\n----- Salary Details -----\n");
  printf("Employee Name   : %s\n", name);
  printf("Basic Salary    : %.2f\n", basic);
  printf("HRA (20%%)       : %.2f\n", hra);
  printf("DA (10%%)        : %.2f\n", da);
  printf("Gross Salary    : %.2f\n", gross);
  printf("Income Tax (5%%) : %.2f\n", tax);
  printf("Net Salary      : %.2f\n", net);

  return 0;
}
