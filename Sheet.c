#include<stdio.h>
int main()
{
    int items = 65;
    float cost_per_item = 23.33;
    float total_cost = cost_per_item * items;
    char currency = '$';
    printf("Total items: %d\n", items);
    printf("Cost Per Item: %.2f%c\n", cost_per_item);
    printf("Total Cost: %.2f%c\n", total_cost);
    return 0;
}
