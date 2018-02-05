#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int first_num = 0;
    int second_num = 1;
    int third_num = 0;

    if (argc < 2)
    {
        printf("Argument should be passed in as './a.out <N>'\n");
        return 1;
    }

    printf("0. %d\n", first_num);
    printf("1. %d\n", second_num);
    
    for (i = 2; i <= atoi(argv[1]); i++)
    {
        third_num = first_num + second_num;
        printf("%d. %d\n", i, third_num);
        first_num = second_num;
        second_num = third_num;
    }

    return 0;
}
