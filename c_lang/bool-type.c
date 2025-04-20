#include <stdio.h>
#include <stdbool.h> // Include this header for using bool type

int main() {
    int a; 
    printf("Enter value of a: ");
    scanf("%d", &a);
    int b;
    printf("The Enter Number is: ");
    scanf("%d", &b);
    bool result = a > b; // Use bool after including stdbool.h
    printf("Result is: %d\n", result); // Prints 1 if true, 0 if false
    // Direct assign
    char name[] = "shruti gayli";
    int age = 20;
    printf("Name: %s\n", name);
    printf("Age: %d\n", age); 
    return 0;
}
