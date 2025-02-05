#include <string.h>
#include <stdlib.h>
#include <stdio.h>


char    *ft_strdup(char *src){
	int i = 0;
	char *ptr;
	while(src[i]){
		i++;
	}
	ptr = malloc(i + 1);
	if(ptr == NULL)
		return 0;
	i = 0;
	while(src[i]){
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int main(){
	char *str = "hayt";
	char *s = ft_strdup(str);
	char *s2 = strdup(str);
	printf("%s\n", s);
	printf("%s\n", s2);
	free(s);
	free(s2);
}