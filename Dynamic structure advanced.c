#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[30];
    int marks;
} Student;

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    Student *s = malloc(n * sizeof(Student));

    for(int i = 0; i < n; i++) {
        printf("Enter name & marks: ");
        scanf("%s %d", s[i].name, &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for(int i = 0; i < n; i++) {
        printf("%s - %d\n", s[i].name, s[i].marks);
    }

    free(s);
    return 0;
}
