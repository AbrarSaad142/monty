#include "monty.h"

/**
 * close_stream - close the file stream end and sets it to null.
*/
void close_stream(void)
{
	if (arguments->stream == NULL)
	return;
	fclose(arguments->stream);
	arguments->stream = NULL;
}
