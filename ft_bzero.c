#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)s = '\0';
		s++;
		i++;
	}
}

int main()
{
	char s[90] = "najlaa";
	ft_bzero(s + 2, 2);
	printf("%s", s);

}