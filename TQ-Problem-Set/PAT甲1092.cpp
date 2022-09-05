#include<stdio.h>

int main()
{
    int counts[123] = {};
    char seller[1001];
    char littleRed[1001];
    gets(seller);
    gets(littleRed);

    for (int i = 0; seller[i] != '\0'; i++)
    {
        counts[(int)seller[i]]++;
    }

    for (int i = 0; littleRed[i] != '\0'; i++)
    {
        counts[(int)littleRed[i]]--;
    }

    int count = 0;
    for (int i = 0; i < 123; i++)
    {
        if (counts[i] < 0)
        {
            count += counts[i];
        }
    }
    if (count < 0)
    {
        printf("No %d\n", -count);
    }
    else
    {
        count = 0;
        for (int i = 0; i < 123; i++)
        {
            if (counts[i] > 0)
            {
                count += counts[i];
            }
        }
        printf("Yes %d\n", count);
    }
    return 0;
}