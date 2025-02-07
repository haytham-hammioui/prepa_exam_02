#include <stdio.h>
#include <string.h>


size_t	ft_strspn(const char *s, const char *accept)
{
	int i;
	int	j;
	int check;

	i = 0;
	while (s[i])
	{
		j = 0;
		check = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				check = 1;
			j++;
		}
		if (check == 0)
			return (i);
		i++;
	}
	return (i);
}
int main(){
	char *str1 = "5951234tham8";
	char *str2 = "01234556789";
	printf("%zu\n", ft_strspn(str1, str2));
	printf("%zu", strspn(str1, str2));

}