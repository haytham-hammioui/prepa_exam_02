#include <stdio.h>
#include <string.h>


char	*ft_strpbrk(const char *s1, const char *s2){
	int i = 0;
	while(s1[i]){
		int j = 0;
		while(s2[j]){
			if(s1[i] == s2[j])
				return((char *)(s1 + i));
			j++;
		}
		i++;
	}
	return(NULL);
}
int main(){
	char *str1="haytham";
	char *str2="h";
	printf("%s\n", ft_strpbrk(str1, str2));
	printf("%s\n", strpbrk(str1, str2));
}