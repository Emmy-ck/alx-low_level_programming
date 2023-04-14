#include <stdio.h>
#include <stdlib.h>

size_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buf;
	size_t n;

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buf = (char*)malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	n = fread(buf, sizeof(char), letters, fp);
	fwrite(buf, sizeof(char),n, stdout);

	free(buf);
	fclose(fp);
	return (n);
}
