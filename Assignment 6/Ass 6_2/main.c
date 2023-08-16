#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

int main() {
    struct Complex num1, num2, sum;

    // Get the first complex number from the user
    printf("Enter the real part of the first complex number: ");
    scanf("%f", &num1.real);

    printf("Enter the imaginary part of the first complex number: ");
    scanf("%f", &num1.imaginary);

    // Get the second complex number from the user
    printf("Enter the real part of the second complex number: ");
    scanf("%f", &num2.real);

    printf("Enter the imaginary part of the second complex number: ");
    scanf("%f", &num2.imaginary);

    // Adding the complex numbers
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;

    // Display the result
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}
