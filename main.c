#include "libft.h"
#include <libc.h>

int		main(int argc, char **argv)
{
	char buf1[50];
	strcpy(buf1, argv[2]);
	printf("%zu\n", ft_strlcpy(argv[1], buf1, 0));
	printf("%s\n", buf1);
	strcpy(buf1, argv[2]);
	printf("%zu\n", strlcpy(argv[1], buf1, 0));
	printf("%s\n", buf1);
	return (0);
}
