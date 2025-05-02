// İlk versiyon: if-else ile switch yerine
#include <stdio.h>

int main() {
    int grade;
    printf("Enter grade (0-100): ");
    scanf("%d", &grade);
    int score = grade / 10;

    if (score >= 9) printf("A\n");
    else if (score == 8) printf("B\n");
    else if (score == 7) printf("C\n");
    else if (score == 6) printf("D\n");
    else if (score < 6) printf("F\n");
    else printf("Invalid grade\n");

    return 0;
}