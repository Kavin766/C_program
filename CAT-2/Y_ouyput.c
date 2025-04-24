#include <stdio.h>
union test {
    int x;
    float y;
};
int main() {
    union test t;
    t.x = 10;
    printf("%f", t.y);  // Undefined behavior (due to memory overlap)
    return 0;
}
