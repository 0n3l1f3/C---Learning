#include <stdio.h>
#include <stdbool.h>


int main() {

    int age = 25;
    int year = 2026;
    int quantity = 2;
    float gpa = 2.5;
    float price = 10.99;
    float temperature = -10.1;
    double pi = 3.14159265358979323846;
    double e = 2.71828182845904523536;
    char grade = 'F';
    char symbol = '!';
    char currency = '$';
    char name[] = "Eghosa";
    char food[] = "Carbonara";
    char email[] = "fake123@gmail.com";
    bool isOnline = false;

    

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);
    printf("YOur GPA is %f\n", gpa);
    printf("The proce is $%.2f\n", price);
    printf("The temperature is %f°C\n", temperature);
    printf("Pi is approximately %.15lf\n", pi);
    printf("The value of e is approximately %.15lf\n", e);
    printf("Your grade is %c\n", grade);
    printf("Your favourite currency is %c\n", currency);
    printf("Your favourite symbol is %c\n", symbol);
    printf("Hello %s\n", name);
    printf("Your favourite food is %s\n", food);
    if(isOnline) {
        printf("You are online\n");
    } else {
        printf("You are offline\n");
    }

    return 0;
}