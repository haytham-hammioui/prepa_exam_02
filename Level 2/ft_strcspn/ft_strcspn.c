#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject){
	int i= 0;
	while(s[i]){
		int j= 0;
		while(reject[j]){
			if(s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);

}
int main(){
	char *str1 = "hay1tham";
	char *str2 = "1";
	printf("%zu\n", ft_strcspn(str1, str2));
	printf("%zu", strcspn(str1, str2));

}