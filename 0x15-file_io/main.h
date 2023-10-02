#ifndef MAIN_H_
#define MAIN_H_

#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H_ */
