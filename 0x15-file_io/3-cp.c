#include "main.h"

/**
 * main - calling system and copy information
 * Return: if in case of the dont write correct dates using return (97)
 * if in case of the error of the reading return (98)
 * if in case of the error of the moment writing return (99)
 * if in otherwise reaseon return (100)
*/

/**
 * @file_from: File to read and copy
 */

/**
 * @file_to: File to paste and write all info the file_from
*/

int cop(char *file_to, char *file_from);

int main(int arc, char **arv)
{
	int copy;

	if (arc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	copy = cop(arv[2], arv[1]);

	switch (copy)
	{
	case (98):
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]);
		exit(98);
	case (99):
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
		exit(99);
	case (100):
		exit(100);
	default:
		return (0);
	}
	return (0);
}

/**
 * cop - Function copy information of the one document to from other document
 * @file_to: File to paste and write all info the file_from
 * @file_from: File to read and copy
 * Return: if in case of the dont write correct dates using return (97)
 * if in case of the error of the reading return (98)
 * if in case of the error of the moment writing return (99)
 * if in otherwise reaseon return (100)
*/

int cop(char *file_to, char *file_from)
{
	char *buf[1024];
	int file_td, file_fd, file_r, file_w, file_c, file_tc;

	file_fd = open(file_from, O_RDONLY);
	if (file_fd < 0)
		return (98);
	file_td = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_td < 0)
		return (99);
	file_r = read(file_fd, buf, 1024);
	if (file_r < 0)
		return (98);

	while (file_r > 0)
	{
		file_w = write(file_td, buf, file_r);
		if (file_w < 0)
			return (98);
		file_r = read(file_fd, buf, 1024);
		if (file_r < 0)
			return (98);
	}

	file_c = close(file_fd);
	if (file_c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_c);
		return (100);
	}
	file_tc = close(file_td);
	if (file_tc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_tc);
		return (100);
	}

	return (0);
}
