#include "monty.h"

/**
 * getting_stream_failed - handle error when open the file.
 * @filename: na,ed of the file.
*/

void getting_stream_failed(char *filename)
{
	fprintf(stderr, "Error: can't open file %s\n", filename);
	/*free_arguments();*/
	exit(EXIT_FAILURE);
}

/**
 * get_stream - gets stream to reading from the file
 * @filename: na,ed of the file.
*/
void get_stream(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		getting_stream_failed(filename);
	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		getting_stream_failed(filename);
	}
}
