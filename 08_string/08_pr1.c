#include <stdio.h>
#include<string.h>
int main()
{
    char st1[32];
    char st2[32];
    int c;
    int i = 0;
    printf("Enter the value of first string\n");
    scanf("%s", st1);
    printf("Enter the value  of second string  character by character\n");
    while (c != '\n')
    {
        fflush(stdin); // whne we use two scanf back to back it get cinfused to avoid this problem we used fflush()function
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';
    printf("The value of st1 is %s\n", st1);
    printf("The value of st2 is %s\n", st2);
    printf("strcmp for these string returns %d", strcmp(st1, st2));
    return 0;
}