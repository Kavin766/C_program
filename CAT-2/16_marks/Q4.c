 #include <stdio.h>
 struct Employee {
    int id;
    char name[50];
    char dept[30];
    float basic, allow, deduc, net;
 };
 int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee e[n];
    for (int i = 0; i < n; i++) {
        printf("Enter ID, Name, Dept, Basic, Allowances, Deductions: ");
        scanf("%d %s %s %f %f %f", &e[i].id, e[i].name, e[i].dept, &e[i].basic, &e[i].allow,&e[i].deduc);
        e[i].net = e[i].basic + e[i].allow - e[i].deduc;
    }
    printf("\nPayroll Details:\n");
    for (int i = 0; i < n; i++)
        printf("%d %s %s %.2f\n", e[i].id, e[i].name, e[i].dept, e[i].net);
    return 0;
 }