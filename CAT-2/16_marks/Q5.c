 #include <stdio.h>
 union Marks {
    float m;
 };
 struct Student {
    union Marks physics, chemistry, maths;
    float cutoff;
 };
 int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++) {
        printf("Enter Physics, Chemistry, Maths marks: ");
        scanf("%f %f %f", &s[i].physics.m, &s[i].chemistry.m, &s[i].maths.m);
        s[i].cutoff = (s[i].physics.m / 2) + (s[i].chemistry.m / 2) + (s[i].maths.m);
    }
    printf("\nCutoff Details:\n");
    for (int i = 0; i < n; i++)
        printf("Student %d: %.2f\n", i + 1, s[i].cutoff);
    return 0;
 }