#include <stdio.h>
#include <string.h>

double expo(double a, double b){   
    if (b == 1.0)
        return a;
    else
        return a * expo(a, b-1.0);
}


double main(){
    double operand1, operand2;
    double result;
    int times;
    int i;
    char operator[10]; 
    
    scanf("%d", &times);
    for (i = 0; i < times; i++) {
        scanf ("%lf %s %lf", &operand1, operator, &operand2);

        if (strcmp(operator,"+") == 0){
            result = operand1 + operand2;
            printf("%lf\n", result);
        }
        if (strcmp(operator,"-") == 0){
            result = operand1 - operand2;
            printf("%lf\n", result);
        }
        if (strcmp(operator,"/") == 0){
            if (operand2 != 0){
            result = operand1 / operand2;
            printf("%lf\n", result);
            }
            else
                printf("Can't divide by 0!\n");            
        }
        if (strcmp(operator,"*") == 0 ){
            result = operand1 * operand2;
            printf("%lf\n", result);   
        }       
        if (strcmp(operator,"**") == 0)
            printf("%lf\n", expo(operand1, operand2));
    }
}



