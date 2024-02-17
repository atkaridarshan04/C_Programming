#include <stdio.h>

int main()
{
    int arr[] = {10, 40, 20, 60, 50, 30};
    int i = 0, j, flag = 0;
    
    for(i=0;i<6;i++){
        for(j = 0; j<6-i;j++){
            if(arr[i]<arr[j]){
                int p = arr[i];
                arr[i] = arr[j];
                arr[j] = p;
            }
        }
    }

    for (j = 0; j < 6; j++)
        printf("%d ", arr[j]);

    return 0;
}