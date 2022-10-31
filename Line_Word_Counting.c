#include<stdio.h>
#define YES 1
#define NO 0

main()
{
    int c, nw, nl, inword;
    nw=nl=0;
    inword = NO;

    while((c = getchar()) != EOF){
        if(c == '\n'){
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t'){
            inword = NO;
        } else if (inword == NO){
            inword = YES;
            ++nw;
        }
    }
    printf("There are %d lines\n", nl);
    printf("And %d words\n", nw);
    return 0;
}