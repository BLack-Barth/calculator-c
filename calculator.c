#include<stdio.h>

double calculator(double a,char c, double b){
    switch (c)
    {
    case '+':
        return a + b;
        break;
    
    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        if (b == 0)
        {
            printf("Error! division by 0\n");
            return 0;
        }
        
        return a / b;
        break;
    
    default:
        printf("Error! Invalid operator %c\n",c);
        return 0;
    }
}

int main(){
    int i = 1;
    while (i == 1)
    {
        
        double a,b;
        char c;
        scanf("%lf%c%lf",&a,&c,&b);
        printf("%.1f\n",calculator(a,c,b));
        printf("press 1 to continuos or 0 to stop:");
        scanf("%d",&i);
    }
    return 0;
}