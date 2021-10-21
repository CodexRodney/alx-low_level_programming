##THIS DIRECTORY i/o SYSTEM CALLS
*HERE ARE SOME OF THE SYSTEM CALLS WE USE ARE
	- open() - It is used to open files that are to be written or read and has some flags
	Its protype is int open(char *filename, int flags, [int mode])
	where filename is the filename to be opened and its either relative path or absolute path depending on the location the program is written
	where flags are flags eg O_CREATE which creates the file if file named does not exist
	where mode refers to the file permissions and its optional.

	- write() - It is used to write to a file whose descriptor is specified.
	Its prototype is int write(int fd, void *buf, size_t cnt);
	where fd is the file descriptor
	where buf is buffer to write data to
	where cnt is length of buffer
