#include<stdio.h>

#define YES 1
#define NO 0
 
main()
{
    int c, nw, inword;
    inword = NO;
    nw = 0;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            inword = NO;
            printf("\n");
        } else if (inword == NO){
            inword == YES;
            printf("%c");
        }
    }
    
    printf("\n");
    return 0;
}
