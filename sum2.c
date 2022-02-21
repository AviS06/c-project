#include <stdio.h>
void sum2() {    

    int number1, number2, sum;
    
    printf("\nEnter two integers to find their sum :  ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d\n", number1, number2, sum);
//    return 0;
}

