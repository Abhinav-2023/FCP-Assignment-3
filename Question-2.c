#include <stdio.h>

struct Student {
    char name[20];
    char trade[20];
    int rollNumber;
    char gender;
};

void main(){
    struct Student student1;

    printf("Enter student name: ");
    scanf("%s", student1.name);
    
    printf("Enter trade: ");
    scanf("%s", student1.trade);

    printf("Enter roll number: ");
    scanf("%d", &student1.rollNumber);

    printf("Enter gender (M/F): ");
    scanf(" %c", &student1.gender); 

    printf("\nStudent Information:");
    printf("Name:%s\n",student1.name);
    printf("Trade:%s\n",student1.trade);
    printf("Roll Number:%d\n",student1.rollNumber);
    printf("Gender:%c\n",student1.gender);

}