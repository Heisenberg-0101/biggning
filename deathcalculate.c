#include <stdio.h>
#include <string.h>


int calculateLuck(char name[], int age) {
    int sum = 0;
    for (int i = 0; i < strlen(name); i++) {
        sum += name[i]; 
    }
    sum += age;  
    return (sum % 101);
}

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    int luck = calculateLuck(name, age);

    printf("\nHello Mr %s, age %d.\n", name, age);
    printf("Your death percentage is: %d%%\n", luck);

    return 0;
}