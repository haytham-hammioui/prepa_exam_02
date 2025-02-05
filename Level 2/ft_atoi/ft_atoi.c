#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str){
	int i = 0;
	int sign = 1;
	int f = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if(str[i] == '-' || str[i] == '+'){
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i]){
		f = f * 10 + str[i] - '0';
		i++;
	}
	return (f * sign);
}
int main(){
	char *str= "2000";
	printf("%d\n", ft_atoi(str));
}