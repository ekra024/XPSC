#include<stdio.h>
int main()
{
    char ch[3];
    scanf("%s",ch);
    printf("%d\n",(ch[0]-'0')*(ch[2]-'0'));
}
