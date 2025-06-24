#include <stdio.h>

int main() {
    int x, y, best_x = 0, best_y = 0;
    float profit, max = 0;

    for(x = 0; x <= 50; x++) {
        for(y = 0; y <= 50; y++) {
            if (5*x + y <= 1000 && x + y <= 100) {
                profit = 50*x + 40*y;
                if (profit > max) {
                    max = profit;
                    best_x = x;
                    best_y = y;
                }
            }
        }
    }

    printf("Max Profit = %.2f at x = %d, y = %d\n", max, best_x, best_y);
    return 0;
}
