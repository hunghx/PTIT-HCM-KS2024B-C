#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[20];
    int age;
    float gpa;
    char address[50];
};

void writeStudentsToFile(struct Student data) {
    FILE *f = fopen("student.bin", "ab");
    if (f == NULL) {
        printf("Kh�ng th? m? file\n");
        exit(1);
    }
    fwrite(&data, sizeof(struct Student), 1, f);
    fclose(f);
}

void readStudentsFromFile() {
    FILE *f = fopen("student.bin", "rb");
    if (f == NULL) {
        printf("Kh�ng th? m? file\n");
        exit(1);
    }
    struct Student stu;
    while (fread(&stu, sizeof(struct Student), 1, f) != 0) {
        printf("\n| T�N: %s | Tu?i: %d | GPA: %.2f | �?a ch?: %s |", stu.name, stu.age, stu.gpa, stu.address);
    }
    fclose(f);
}

int main() {
    while (1) {
        printf("--------MENU----------\n");
        printf("1. Nh?p th�ng tin sinh vi�n\n");
        printf("2. Hi?n th? danh s�ch sinh vi�n\n");
        printf("Nh?p l?a ch?n: ");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                int n;
                printf("Nh?p s? lu?ng sinh vi�n: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    struct Student s;
                    printf("Nh?p t�n: ");
                    getchar();  // d? an k� t? xu?ng d�ng c�n l?i t? scanf
                    fgets(s.name, 20, stdin);
                    printf("Nh?p tu?i: ");
                    scanf("%d", &s.age);
                    printf("Nh?p GPA: ");
                    scanf("%f", &s.gpa);
                    printf("Nh?p d?a ch?: ");
                    getchar();  // d? an k� t? xu?ng d�ng
                    fgets(s.address, 50, stdin);
                    writeStudentsToFile(s);
                }
                printf("Luu d? li?u th�nh c�ng\n");
                break;
            }
            case 2:
                readStudentsFromFile();
                break;
            default:
                printf("L?a ch?n kh�ng h?p l?\n");
        }
    }
    return 0;
}

