#include <elf.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include <stdio.h>

#include <stdlib.h>

/**
 *
 *  * closes_file - Closes a file.
 *
 *   * @fil: ELF file.
 *
 *    * Return: none.
 *
 *     */

void closes_file(int fil)

{

	if (close(fil) == -1)

	{

		dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", fil);

		exit(98);

	}

}

/**
 *
 *  * check_file - Checks if file is ELF.
 *
 *   * @rem: Remaining file content.
 *
 *    * Return: none.
 *
 *     */

void check_file(unsigned char *rem)

{

	int i;



	for (i = 0; i < 4; i++)

		if (rem[i] != 127 && rem[i] != 'E' &&

				rem[i] != 'L' && rem[i] != 'F')

			dprintf(STDERR_FILENO, "Error: Not ELF file\n"),

				exit(98);

}

/**
 *
 *  * check_file - Checks if file is ELF.
 *
 *   * q
 *
 *    
