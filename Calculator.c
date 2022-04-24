#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,result;
    char opr;
    scanf("Input 1st number : %d",&a);
    scanf("Input 2nd number : %d",&b);
    scanf("What operation do you want to perform? (+,-,*,/) : %c",&opr);
    if (opr=='+'){
        result=a+b;
    }
    else if (opr=='-'){
        result=a-b;
    }
    else if (opr=='*'){
        result=a*b;
    }
    else if (opr=='/'){
        result=a/b;
    }
    else{
        printf("Invalid operator");
    }
    printf("The result of your operation is : %d",result);
}
