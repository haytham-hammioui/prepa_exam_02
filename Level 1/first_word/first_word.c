#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}
int main(int argc, char **argv){
	if(argc == 2){
		int i = 0;
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while(argv[1][i] > ' ')
		{
			ft_putchar(argv[1][i]);
			if(argv[1][i + 1] == 32 || argv[1][i + 1] == 9 || argv[1][i + 1] == '\0')
			{
				ft_putchar('\n');
				return 0;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}