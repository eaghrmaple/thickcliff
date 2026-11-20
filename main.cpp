#include <string>
#include <vector>

void count_zeros() {
    int n = 102030;
    int zeros = 0;
    while (n > 0) { if (n % 10 == 0) zeros += 1; n /= 10; }
    (void)zeros;
}

void center_digit() {
    int n = 98765;
    int digits = 0;
    int temp = n;
    while (temp > 0) { digits += 1; temp /= 10; }
    for (int i = 1; i < digits / 2; ++i) n /= 10;
    int center = n % 10;
    (void)center;
}

void digit_product() {
    int n = 2345;
    int product = 1;
    while (n > 0) {
        product *= (n % 10);
        n /= 10;
    }
    (void)product;
}

void min_of_two() {
    int a = 33, b = 57;
    int m = (a < b) ? a : b;
    (void)m;
}

extern "C" int clever_compass();
extern "C" void quiet_thorn();
extern "C" void lunar_prism();
extern "C" void hidden_boulder();
extern "C" void amber_prism();

int main() {
    count_zeros();
    center_digit();
    digit_product();
    min_of_two();
    quiet_thorn();
    lunar_prism();
    hidden_boulder();
    amber_prism();
    return clever_compass();
}
