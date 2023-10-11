#include <stdio.h>

float tonghaiso(int num1, int num2){
    float tong = num1 + num2;
    return tong;
}
float hieuhaiso(int num1, int num2){
    float hieu = num1 - num2;
    if(num2>num1){
        hieu=num2-num1;
    }
    return hieu;
}
float thuonghaiso(int num1, int num2){
    float thuong = num1/num2;
    return thuong;
}
float tichhaiso(int num1, int num2){
    float tich = num1*num2;
    return tich;
}
int lololo(){
//int main() {
    printf("Calculation:\n");
    printf("=================\n");
    float num1;
    float num2;
    int choice;
    int tong;
    int hieu;
    int thuong;
    int tich;
    do {
        printf("1. Input Number\n");
        printf("2. Calculate Sum\n");
        printf("3. Calculate Substraction\n");
        printf("4. Calculate Mutiplication\n");
        printf("5. Calculate Divison\n");
        printf("6. Exit");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("nhap vao so thu 1:\n");
                scanf("%f", &num1);
                printf("nhap so thu 2:\n");
                scanf("%f", &num2);
                break;
            case 2:
                float tong = tonghaiso(num1, num2);
                printf("the sum of the two numbers is: %f\n", tong);
                break;
            case 3:
                float hieu = hieuhaiso(num1, num2);
                printf("The difference between two numbers is: %f\n", hieu);
                break;
            case 4:
                float thuong = thuonghaiso(num1, num2);
                printf("The quotient of two numbers is: %f\n", thuong);
                break;
            case 5:
                float tich = tichhaiso(num1, num2);
                printf("The product of two numbers is: %f\n", tich);
                break;
            default:
                printf("invalid choice.\n");
                break;
        }
    } while (choice != 6);
    return 0;
}






