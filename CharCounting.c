#include<stdio.h>
#include<libio.h>

main()
{
    long nc;
    char c;
    nc = 0;

    while((c =getchar()) != EOF){
        ++nc;
        putchar(c);
    }
    
    printf("\n");
    printf("%4ld\n",nc);
    return 0;
}
