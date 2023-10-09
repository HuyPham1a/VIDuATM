#include <stdio.h>
void abCC(int num1, int num2);

//int review1(){
    int main(){
    int num1, num2;
    printf("nhap gia tri num1: ");
    scanf("%d", &num1);
    printf("nhap gia tri num2: ");
    scanf("%d", &num2);

    if( num1 < num2){
        printf("cac so chia het cho 50 tu %d den %d la :\n", num1,num2);
        abCC(num1, num2);

    }else{
        printf("cac so chia het cho 50 tu %d den %d la :\n", num2, num1);
        abCC(num2, num1);
    }
    return 0;
}
void abCC (int num1, int num2){
    for (int num = num1; num <= num2; num++){
        if (num % 50 == 0){
            printf("%d\n", num);
        }
    }
}