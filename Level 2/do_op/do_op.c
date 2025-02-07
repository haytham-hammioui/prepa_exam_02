#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av){
	if(ac == 4){
		int j = 0;
		int l = 0;
		int f = 0;
		if (av[1][0])
			j += atoi(av[1]);
		if (av[3][0])
			l += atoi(av[3]);
		if(av[2][0] == '+' && av[2][1] == '\0')
			f = j + l;
		else if(av[2][0] == '-' && av[2][1] == '\0')
			f = j - l;
		else if(av[2][0] == '*' && av[2][1] == '\0')
			f = j * l;
		else if(av[2][0] == '/' && av[2][1] == '\0')
			f = j / l;
		else if(av[2][0] == '%' && av[2][1] == '\0')
			f = j % l;
		if (f != 0)
			printf("%d", f);
	}
	printf("\n");
}