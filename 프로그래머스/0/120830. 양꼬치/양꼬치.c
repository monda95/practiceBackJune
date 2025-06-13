#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int service_drinks = n / 10;
    int total_price = (n * 12000) + ((k - service_drinks) * 2000);
    return total_price;
}