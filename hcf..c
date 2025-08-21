#include<stdio.h> 
int gcd(int a, int b) {
    while (b != 0) {
        b = a % b;
        a = b;
    }
    return a;
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int hcf_value = gcd(num1, num2);
    printf("HCF of %d and %d is %d\n", num1, num2, hcf_value);

    return 0;
}