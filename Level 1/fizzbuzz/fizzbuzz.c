#include <unistd.h>

int main(){
	int i = 1;
	int k = 0;
	int l =0;
	while(i <= 100){
		if((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else if (i >= 10){
			k = i / 10 + '0';
			write(1, &k, 1);
			l = i % 10 + '0';
			write(1, &l, 1);
		}
		else
		{
			k = i + '0';
			write(1, &k, 1);
		}
		write(1, "\n", 1);
		i++;
	}
}