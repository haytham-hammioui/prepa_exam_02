#include <unistd.h>
void ft_putchar(char c){
	write(1, &c, 1);
}

int main(int argc, char **argv){
	if (argc == 2){
		int i = 0;
		int k = 1;
		while(argv[1][i])
		{
			k = 1;
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				k = argv[1][i] - 96;
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				k = argv[1][i] - 64;
			while (k >= 1)
			{
				ft_putchar(argv[1][i]);
				k--;;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}