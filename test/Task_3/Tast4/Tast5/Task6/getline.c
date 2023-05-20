#include "main.h"

#define BUF_SIZE 1024
/*ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
		*lineptr = malloc(sizeof
	while ()
	{
		c = _getchar();
		if (c == EOF)
			return (-1);

		n--;
	}

}
*/
int _getchar(void)
{
	char buffer[BUF_SIZE];
	static ssize_t rd = 0;
	static int bu_p = 0;

       if (bu_p >= rd)
       {
		rd = read(STDIN_FILENO, buffer, BUF_SIZE);
		bu_p = 0;
		if (rd <= 0)
			return (EOF);
       }

	return ((int)buffer[bu_p++]);
}

void *_realloc(void *ptr, size_t size)
{
}
