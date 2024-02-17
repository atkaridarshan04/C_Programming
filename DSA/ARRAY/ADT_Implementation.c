// ADT(Abstract Data Type) = Our Custom made data type

#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tSize, int uSize)
{
    // instead of (*a).name, we can do this a->name .
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void setVal(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {      
        printf("Enter Element %d: ", i+1);
        scanf("%d", &(a->ptr)[i]);
    }
}

void show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d ", (a->ptr)[i]);
    }
}

int main()
{
    struct myArray marks;

    createArray(&marks, 10, 3);
    setVal(&marks);
    show(&marks);

    return 0;
}