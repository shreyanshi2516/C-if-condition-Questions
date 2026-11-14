#include <stdio.h>

int main() {
    float m1, m2, m3, total, average;
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    // Fail if any subject < 35
    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Result: FAIL (marks less than 35 in a subject)\n");
        return 0;
    }

    total = m1 + m2 + m3;
    average = total / 3;

    printf("Total   = %.2f\n", total);
    printf("Average = %.2f\n", average);

    if (average >= 70)
        printf("Grade: Distinction\n");
    else if (average >= 60)
        printf("Grade: First\n");
    else if (average >= 50)
        printf("Grade: Second\n");
    else if (average >= 35)
        printf("Grade: Third class\n");
    else
        printf("Grade: Fail\n");

    return 0;
}
