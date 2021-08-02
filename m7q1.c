#include <stdio.h>
#include <string.h>

int main()
    {
        char string[100];
        int count[26]={0};

        printf("Enter a line of text : ");
        scanf("%[^\t\n]s",string);

        char *ptr=&string[0];

        while (*ptr!='\0' || *ptr==' ')
            {
                /* Consider characters from 'a' to 'z' only */
                if ( *ptr >= 'a' && *ptr <= 'z' )

//*ptr is the character stored on that position in the string and *ptr-'a' is giving index to count array.
		count[*ptr-'a']++;
                ptr++;
            }

        for(int c=0;c<26;c++)
            {
                if(count[c]!=0)
                printf("\n%c occurs %d times in string.\n",c+'a',count[c]);
            }
    return 0;
}
