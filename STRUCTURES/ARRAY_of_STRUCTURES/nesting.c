#include <stdio.h>

int main()
{
    struct address
    {
        char city[10];
        int phone;
        int pincode;
    };

    struct employee
    {
        char name[10];
        struct address a;
    };

    struct employee e = {"Vedant", "Pune", 911123456, 423203};

    printf("Name = %s \t   City = %s\n", e.name, e.a.city);
    printf("Phone = %d  PinCode = %d", e.a.phone, e.a.pincode);

    return 0;
}

// Like this only the can be continue forward 

// One more example 

// #include <stdio.h>
// struct s
// {
//     int i;
//     struct s *p;
// };
// int main()
// {
//     struct s var1, var2;

//     var1.i = 100;
//     var2.i = 200;

//     var1.p = &var2;
//     var2.p = &var1;
//     printf("%d %d\n", var1.p->i, var2.p->i);

//     return 0;
// }
