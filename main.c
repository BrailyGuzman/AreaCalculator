#include <stdio.h>

float circle(float radius) {
    float area = 3.14159265359 * (radius * radius);
    return area;
}

int square(int side) {
    int area = side * side;
    return  area;
}

double triangle(float base, float height) {
    double area = (base* height) / 2;
    return area;
}

int main() {
    printf("1) Circle \n2) Square \n3) Triangle \n");
    printf("Enter: ");
    int option = 0;
    scanf("%d", &option);

    if (option == 1) {
        float radius;
        printf("Enter Radius: ");
        scanf("%f", &radius);

        printf("\nArea: %f\n", circle(radius));
    }
    else if (option == 2) {
        printf("Enter Side: ");
        int side = 0;
        scanf("%d", &side);
        printf("\nArea: %d\n", square(side));
    }
    else if (option == 3) {
        printf("Enter Base: ");
        float base = 0;
        scanf("%f", &base);
        float height = 0;
        printf("Enter Height: ");
        scanf("%f", &height);

        printf("\nArea: %f\n", triangle(base, height));
    }
    else {
        printf("\nInvalid Option..\n");
    }
    return 0;
}
