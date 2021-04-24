#include <stdio.h>
#include <string.h>

int checkPalindrome(char str[])
{
    int i, j, flag = 1;

    for(i = 0, j = strlen(str)-1; i < strlen(str); i++, j--)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }
    if(flag ==  1)
        return 1;
    else
        return 0;
}

int main()
{
    int i, j, k, n = 8, p, flag, min;
    char str[10];
    char te[10];

    printf("Enter string : ");
    scanf("%s", str);
    printf("Enter minimum length of string (greater than 0) : ");
    scanf("%d", &min);
    min = min - 1;

    for(k = min; k < n; k++)
    {
        i = 0;
        for(j = i+k; j < n; j++)
        {
            flag = 0;
            int in = 0;
            for(p = i; p <= j; p++)
            {
                te[in] = str[p];
                in++;
            }
            te[in] = '\0';
            flag = checkPalindrome(te);
            if(flag == 1)

            printf("%s\n", te);

            i++;
        }
    }
    return 0;
}
