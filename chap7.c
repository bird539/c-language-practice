#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    //1
    /*
    printf("양의 정수 입력: ");
    int sum = 0,n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
    return 0;
    */

    //2
    /*
    double x, y;
    for (x = 0; x <= 10; x += 0.5) {
        y = (3 * (x * x * x)) + (2*(x * x)) + x + 5;
        printf("x = %.2lf y = %.2lf\n", x, y);
    }
    */

    //3
    /*
    int count = 0; 
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            continue; 
        }
        printf("%d ", i);
        count++;
        if (count == 10) {
            printf("\n");
            count = 0;
        }
    }
    */

    //4
    /*
    int tem, tem2;
    for (tem = -60; tem <= 140; tem += 20) {
        tem2 = (9.0 / 5.0) * tem + 32;
        printf("섭씨온도: %d = 화씨온도: %d\n", tem, tem2);
        tem2 = 0;
    }
    */

    //5
    /*
    printf("출력할 구구단 2 ~ 9 사이의 정수 입력 >> ");
    int gugu,i;
    scanf("%d", &gugu);
    if (gugu > 0 && gugu <= 9) {
        for (i = 1; i < 10; i++) {
            printf("%d * %d = %d ", gugu, i, gugu * i);
        }
    }
    else {
        printf("잘못된 입력");
    }
    */

    //6
    /*
    printf("정수입력 >> ");
    int nns,sum=0;
    scanf("%d", &nns);
    while (nns != 0) {
        sum *= 10;
        sum += nns % 10;
        nns /= 10;
    }
    printf("입력한 수를 바내로 출력 >>> %d\n", sum);
    */

    //7
    /*
    printf("1부터 n까지의 합 중에서 10000를 넘지 않는 가장 큰 합은?\n");
    int count=0, sum=0;
    while(1) {
        if (sum < 10000) {
            sum += count;
            count += 1;
        }
        else {
            sum -= count-1;
            break;
        }
    }
    printf("1부터 %d까지의 합이 %d입니다.\n",count,sum);
    */

    //8
    /*
    printf("1부터 n까지의 곱 중에서 10000를 넘지 않는 가장 큰 곱은?\n");
    int count=1, sum=1,sum2;
    while(1) {
        sum *= count;
        count++;
        if (sum < 10000) {
            sum2 = sum;
        }
        else {
            break;
        }

    }
    printf("1부터 %d까지의 곱이 %d입니다.\n",count,sum2);
    */
    
    //9
/*
    int n, i, bit = 32;
    do {

        printf("정수 또는 0(종료)을 입력 >> ");
        scanf("%d", &n);

        for (i = bit - 1; i >= 0; i--) {
            printf("%d", n >> i & 1);
        }
        printf("\n");
    } while (n != 0);
    printf("종료합니다.");
    */



    //10
    /*
    printf("2부터 100까지의 소수\n");
    int a, b, c;
    for (a = 1; a < 100; a++) {
        c = 0;
        for (b = 1; b < a; b++) {
            if (a % b == 0) {
                c++;
            }
        }
        if (c == 1) {
            printf(" %d", a);
        }
    }
    printf("\n");
    */

    //11
    /*
    int year; double inter= 4.5 / 100, count = 1000000;
    for (year = 1; year < 11; year++) {
        printf("%d년 총금액: %.2lf \n", year, count*inter*year + count);
    }
    */

    //12
    /*
    int year; double inter = 4.5 / 100, count = 1000000;
    for (year = 1; year < 11; year++) {
        count += count * inter;
        printf("%d년 총금액: %.2lf \n", year,count);
    }
    */

    //13
    /*
    int i, b, k;
    for (i = 1; i <= 5; i++) {

        for (k = 5; k >= i; k--) {
            printf(" ");
        }

        for (b = i; b > 0; b--) {
            printf("%d", b);

        }
        printf("\n");
    }
    */

    //14
    /*
    int i, b, k;
    for (i = 5; i >= 0; i--) {
        
        for (k = 5; k >= i; k--) {
            printf(" ");
        }

        for (b = 5, k=i; k > 0; k--) {
            printf("%d", b);
            b -= 1;

        }
        printf("\n");
    }
    */


    //15
/*
int i, j, k, l;
for (i = 0; i <= 7; i++)
{
    for (j = 7; j > i; j--)
        printf(" ");
    for (k = i; k > 0; k--)
        printf("%d", k);
    for (l = 0; l <= i; l++)
        printf("%d", l);
    printf("\n");
}
*/


    return 0;
}