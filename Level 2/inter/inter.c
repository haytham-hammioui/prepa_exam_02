#include <unistd.h>

int    main(int argc, char **argv)
{
    int    found[256] = {0};
    int    i, j;

    if (argc == 3)
    {
        i = 0;
        while (argv[1][i])
        {
            j = 0;
            while (argv[2][j])
            {
                if (argv[1][i] == argv[2][j] && found[(unsigned char)argv[1][i]] == 0)
                {
                    write(1, &argv[1][i], 1);
                    found[(unsigned char)argv[1][i]] = 1;
                    break ;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}