#include <stdio.h>
 #include <string.h>
 struct Product {
    char name[50];
    float price;
 };
 float total = 0.0;
 void add_to_cart(struct Product p) {
    total += p.price;
    printf("%s added to cart. Current total: %.2f\n", p.name, total);
 }
 void apply_coupon_code(char code[]) {
    if (strcmp(code, "DISCOUNT10") == 0) {
        total = total * 0.9;
        printf("Coupon applied. New total: %.2f\n", total);
    } else {
        printf("Invalid coupon code.\n");
 }}
 void checkout() {
    printf("Checkout complete. Final total: %.2f\n", total);
 }
 int main() {
    struct Product p1 = {"Notebook", 50.0};
    struct Product p2 = {"Pen", 10.0};
    add_to_cart(p1);
    add_to_cart(p2);
    char code[20];
    printf("Enter coupon code: ");
    scanf("%s", code);
    apply_coupon_code(code);
    checkout();
    return 0;
 }