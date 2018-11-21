#include <stdio.h>
#include <stdlib.h>

int main()
{
   float sales;
   float profit;
   int year;
   sales = 10000000;
   int totals[10];
   int totalsales[10];
   year=1;
   printf("\t\t\tSales and Profit Projection\n");
   printf("\t\t\t---------------------------\n");
   printf("Year\t\tExpected Sales\t\tProjected profits\n");
   printf("------------------------------------------------------\n");

   for (int x=1;x<=10;x++)
   {

    profit =sales/10;
    totals[x]=sales;
    printf("%d\t\t$%.2f\t\t$%.2f\n",year,sales,profit);
    sales=sales-(0.03999999*sales);
   // int k=a;
    totalsales[x]=profit;
    year++;
   }
   float sum_sales=totals[1]+totals[2]+totals[3]+totals[4]+totals[5]+totals[6]+totals[7]+totals[8]+totals[9]+totals[10];
   float sum_profit=totalsales[1]+totalsales[2]+totalsales[3]+totalsales[4]+totalsales[5]+totalsales[6]+totalsales[7]+totalsales[8]+totalsales[9]+totalsales[10];
   printf("\t\t---------\t\t--------\nTotals:");
   printf("\t\t$%.2f\t\t$%.2f\n\n",sum_sales,sum_profit);
}
