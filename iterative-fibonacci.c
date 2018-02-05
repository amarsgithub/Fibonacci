#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int *array = malloc(sizeof(int) * 3);
    array[0] = 0;
    array[1] = 1;
    array[2] = 0;

    if (argc < 2)
    {
        printf("Argument should be passed in as './a.out <N>'\n");
        return 1;
    }

    for (i = 0; i <= atoi(argv[1]); i++)
    {
        if (i == 0 || i == 1)
        {
            printf("%d. %d\n", i, array[i]);
        }
        else
        {
            array[2] = array[0] + array[1];
            printf("%d. %d\n", i, array[2]);
            array[0] = array[1];
            array[1] = array[2];
        }
    }
    free(array);
    return 0;
}
