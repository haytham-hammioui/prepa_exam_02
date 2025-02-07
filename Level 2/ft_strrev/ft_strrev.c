#include <stdio.h>
#include <string.h>

int ft_strlen(char *str){
	int i = 0;
	while(str[i]){
		i++;
	}
	return i;
}
char    *ft_strrev(char *str){
	int i = ft_strlen(str) -1;
	int k = 0;
	char tmp;
	while(k < i){
		tmp = str[k];
		str[k] = str[i];
		str[i] = tmp;
		i--;
		k++;
	}
	return(str);
}
int main(){
	char str[] = "hello";
	printf("%s\n", ft_strrev(str));
}