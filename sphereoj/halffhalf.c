
#include<stdio.h>

int main() {
    int T;
    scanf("%d",&T);
    char st[201];
    while(T--)
    {
        scanf("%s",st);
        int len=strlen(st)/2;
        for(int i=0;i<len;i++)
        {
            printf("%c",st[i]);
            i++;
        }
        printf("\n");
    }

    // your code here

    return 0;
}
