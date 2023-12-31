#include <stdio.h>

/**
 * print_elf_header - The entry point for program to get header of ELF file
 * @filename: The number of arguments
 * Return: 0
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * print_error - prints error message
 * @message: pinter to message
 * REturn: error
 */
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

void print_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	Elf64_Ehdr header;

	if (fd == -1)
	{
	print_error("Error opening file");
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Error reading ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}
	printf("Magic: %c%c%c%c\n", header.e_ident[EI_MAG0], header.e_ident[EI_MAG1], header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
	printf("Class: %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header.e_type);
	printf("Entry point address: %lx\n", header.e_entry);
	close(fd);
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	print_elf_header(argv[1]);
	return (0);
}

