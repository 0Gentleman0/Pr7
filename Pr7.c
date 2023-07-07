#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;//Вводимо змінні для координат кіл

    printf("Введіть координати та радіус першого кола (x1, y1, r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1); // Введення координат та радіуса першого кола

    printf("Введіть координати та радіус другого кола (x2, y2, r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2); // Введення координат та радіуса другого кола

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // Обчислення відстані між центрами кіл

    int intersectionPoints = (distance == 0 && r1 == r2) ? -1 : (distance > r1 + r2 || distance < fabs(r1 - r2)) ? 0 : (distance == r1 + r2 || distance == fabs(r1 - r2)) ? 1 : 2;
   
    printf("Кількість точок перетину: %d\n", intersectionPoints); // Виведення кількості точок перетину

    return 0;
}