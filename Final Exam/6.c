// 6. Write a C program that writes any 3 employees' name along with their role(designation) in a file called data.txt by taking input from user dynamically.
#include <stdio.h>

int main() {
    FILE *file;
    char name[50], role[50];

    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Error");
        return 1;
    }

    for (int i = 1; i <= 3; i++) {
        printf("Enter name of employee %d: ", i);
        scanf("%s", name);

        printf("Enter role of employee %d: ", i);
        scanf("%s", role);

        fprintf(file, "Employee %d: Name: %s, Role: %s\n", i, name, role);
    }

    fclose(file);


}
