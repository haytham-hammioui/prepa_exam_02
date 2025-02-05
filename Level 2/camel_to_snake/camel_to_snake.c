#include <unistd.h>

int main(int ac, char **av){
	if(ac == 2){
		int i = 0;
		while(av[1][i])
		{
			int f =0;
			if(av[1][i + 1] >= 'A' && av[1][i + 1] <= 'Z'){
				av[1][i + 1] += 32;
				f = 1;
			}
			write(1, &av[1][i], 1);
			if(f== 1)
				write(1, "_", 1);
			i++;
		}
	}
	write(1, "\n", 1);
}