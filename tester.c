#include <stdio.h>
#include <string.h>
#include "ft_printf.h"

int main()
{
	int i = 9516284;
	printf("\n%d caracteres\n", printf("%s ceci est %d en hex :%x\net son adresse :%p\n%d", "coucou", i, i, &i, 654321));
	ft_printf("\n%d caracteres\n", ft_printf("%s ceci est %d en hex :%x\net son adresse :%p\n%d", "coucou", i, i, &i, 654321));
}
