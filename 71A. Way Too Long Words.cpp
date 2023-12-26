#include<stdio.h>
#include<string.h>

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

int main()
{
    int t;
    scanf("%d",&t);
    char word[100];
    for (int i =0;i<t;i++)
    {
        scanf("%s",word);
        int length = strlen (word);
        if (length > 10)
        {
          printf("%c%d%c\n",word[0],length-2,word[length-1]);
        }
        else printf("%s\n",word);

    }
}
