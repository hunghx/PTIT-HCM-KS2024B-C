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
        printf("Không th? m? file\n");
        exit(1);
    }
    fwrite(&data, sizeof(struct Student), 1, f);
    fclose(f);
}

void readStudentsFromFile() {
    FILE *f = fopen("student.bin", "rb");
    if (f == NULL) {
        printf("Không th? m? file\n");
        exit(1);
    }
    struct Student stu;
    while (fread(&stu, sizeof(struct Student), 1, f) != 0) {
        printf("\n| TÊN: %s | Tu?i: %d | GPA: %.2f | Ð?a ch?: %s |", stu.name, stu.age, stu.gpa, stu.address);
    }
    fclose(f);
}

int main() {
    while (1) {
        printf("--------MENU----------\n");
        printf("1. Nh?p thông tin sinh viên\n");
        printf("2. Hi?n th? danh sách sinh viên\n");
        printf("Nh?p l?a ch?n: ");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                int n;
                printf("Nh?p s? lu?ng sinh viên: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    struct Student s;
                    printf("Nh?p tên: ");
                    getchar();  // d? an ký t? xu?ng dòng còn l?i t? scanf
                    fgets(s.name, 20, stdin);
                    printf("Nh?p tu?i: ");
                    scanf("%d", &s.age);
                    printf("Nh?p GPA: ");
                    scanf("%f", &s.gpa);
                    printf("Nh?p d?a ch?: ");
                    getchar();  // d? an ký t? xu?ng dòng
                    fgets(s.address, 50, stdin);
                    writeStudentsToFile(s);
                }
                printf("Luu d? li?u thành công\n");
                break;
            }
            case 2:
                readStudentsFromFile();
                break;
            default:
                printf("L?a ch?n không h?p l?\n");
        }
    }
    return 0;
}

