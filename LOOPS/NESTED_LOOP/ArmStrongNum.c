#include <stdio.h>  
  
int main()  
{  
    int num, count = 1, rem, sum;  
  
    while(count <= 500)  
    {  
        num = count;  
        sum = 0;  
  
        while(num)  // num != 0;
        {  
            rem = num % 10;  
            sum = sum + (rem * rem * rem);  
            num /= 10;  // num = num / 10;  
        }  
  
        if(count == sum)  
        {  
            printf("%d is a Armstrong number\n", count);  
        }  
  
        count++;  
    }  
  
     return 0;  
}  
