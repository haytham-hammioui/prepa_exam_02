#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);
	int res = tab[0];
	unsigned int i = 0;
	while (i < len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}
int main(){
	int tab[5] = {1, 2, 7, 4, 7};
	printf("%d\n", max(tab, 5));
}