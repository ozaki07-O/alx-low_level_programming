#include "main.h"
/**
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	if (*haystack)
		return (haystack);
	if (*needle)
		return (needle);
	return ('\0');
}
