#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    scanf("%d", &i);
    while (i != -1)
    {
        switch (i)
        {
        case 1:
            sum += 6;
            break;
        case 2:
            sum += 8;
            break;
        case 3:
            sum += 12;
            break;
        case 4:
            sum += 3;
            break;
        case 5:
            sum += 9;
            break;
        }
        scanf("%d", &i);
    }
    printf("%d", sum);
    return 0;
}