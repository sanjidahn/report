#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5

// function to print names of students who joined in a particular year
void print_students_by_year(int year, int ids[], char names[][50], char departments[][50], int courses[]) {
    printf("Students who joined in %d:\n", year);
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (ids[i] != 0 && year == (2022 + (i % 2))) {
            printf("%s\n", names[i]);
        }
    }
}

// function to print student data based on the ID number
void print_student_data(int id, int ids[], char names[][50], char departments[][50], int courses[]) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (ids[i] == id) {
            printf("ID: %d\nName: %s\nDepartment: %s\nCourse: %d\nYear of joining: %d\n",
                   ids[i], names[i], departments[i], courses[i], 2022 + (i % 2));
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

int main() {
    int ids[MAX_STUDENTS] = {1, 2, 3, 4, 5};
    char names[MAX_STUDENTS][50] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    char departments[MAX_STUDENTS][50] = {"Computer Science", "Mathematics", "Physics", "Biology", "Chemistry"};
    int courses[MAX_STUDENTS] = {101, 102, 103, 104, 105};

    // test print_students_by_year function
    int year;
    printf("Enter a year (2022 or 2023): ");
    scanf("%d", &year);
    print_students_by_year(year, ids, names, departments, courses);

    // test print_student_data function
    int id;
    printf("Enter a student ID (1 to 5): ");
    scanf("%d", &id);
    print_student_data(id, ids, names, departments, courses);

    return 0;
}
