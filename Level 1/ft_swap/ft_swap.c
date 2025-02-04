#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b){
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(){
	int a = 5;
	int b = 8;
	ft_swap(&a, &b);
	printf("a : %d ; b : %d", a, b);
}