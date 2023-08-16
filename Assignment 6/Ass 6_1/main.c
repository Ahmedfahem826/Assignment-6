#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char degree[50];
    char section[10];
};

int main() {
    const int numStudents = 5;
    struct Student students[numStudents];

    // Fill the data for each student
    for (int i = 0; i < numStudents; ++i) {
        printf("
               g Student %d:\n", i+1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Degree: ");
        scanf("%s", students[i].degree);

        printf("Section: ");
        scanf("%s", students[i].section);

        printf("\n");
    }

    // Print the data for each student
    printf("Student Database:\n");
    for (int i = 0; i < numStudents; ++i) {
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Degree: %s\n", students[i].degree);
        printf("Section: %s\n", students[i].section);
        printf("\n");
    }

    return 0;
}
