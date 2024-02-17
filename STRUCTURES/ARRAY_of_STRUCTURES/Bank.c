#include <stdio.h>
#include <string.h>

struct data
{
    int accNo;
    char name[30];
    float balance;
};
struct data ppl[5];

void display()
{
    for (int i = 0; i < 5; i++)
    {
        if (ppl[i].balance > 0 && ppl[i].balance < 100)
        {
            printf("%s\n", ppl[i].name);
        }
    }
}

void tranction(int accNo, float amount, int code)
{
    int index = -1;
    for (int i = 0; i < 5; i++)
    {
        if (ppl[i].accNo == accNo)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("Invalid account number!. Please Enter again.");
    }
    else
    {
        if (code == 1) // deposite
        {
            ppl[index].balance += amount;
            printf("Deposit of Rs. %.2f successful. New balance: Rs. %.2f\n", amount, ppl[index].balance);
        }
        else if (code == 0) // Withdraw
        {
            if (ppl[index].balance - amount < 100)
            {
                printf("The balance is insufficient for the specified withdrawal.\n");
            }
            else
            {
                ppl[index].balance -= amount;
                printf("Withdrawal of Rs. %.2f successful. New balance: Rs. %.2f\n", amount, ppl[index].balance);
            }
        }
        else
        {
            printf("Invalid transaction code. Use 0 for withdrawal or 1 for deposit.\n");
        }
    }
}

int main()
{
    ppl[0].accNo = 1231;
    strcpy(ppl[0].name, "Mayur Chawan");
    ppl[0].balance = 90;

    ppl[2].accNo = 1215;
    strcpy(ppl[2].name, "Dinesh J");
    ppl[2].balance = 900;

    display();

    tranction(1231, 100, 0);
    tranction(1215, 9100, 1);

    return 0;
}