#include <unistd.h>

int main(int ac, char **av){
	if (ac == 3){
		int i = 0;
		int f[255] = {0};
		while(av[1][i]){
			if(f[(unsigned char)av[1][i]] == 0){
				write(1, &av[1][i], 1);
				f[(unsigned char)av[1][i]] = 1;
			}
			i++;
		}
		i = 0;
		while(av[2][i]){
			if(f[(unsigned char)av[2][i]] == 0){
				write(1, &av[2][i], 1);
				f[(unsigned char)av[2][i]] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}