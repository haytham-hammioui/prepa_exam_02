#include <unistd.h>

void	ft_putstr(char *str){
	int i = 0;
	while(str[i]){
		write(1, &str[i], 1);
		i++;
	}
}

char    *ft_strcpy(char *s1, char *s2){
	int i = 0;
	while (s2[i]){
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main(){
	char *s2 = "haytham";
	char s1[8];
	ft_strcpy(s1, s2);
	ft_putstr(s1);
}