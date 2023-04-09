#include "main.h"
/**
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
	if (*s)
		return(accept);
	return(s);
}
