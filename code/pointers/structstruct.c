#include <stdio.h>   // printf()
#include <stdlib.h>  // malloc()
#include <string.h>  // strncpy()

struct inode {
    unsigned long i_blocks; // file size in blocks
    char *name;             // file name (not actually part of Linux inode)
};

struct file {
    unsigned short f_count; // number of file handles
    struct inode * f_inode; // inode pointing to cooresponding file
};

int main()
{
    static char *filename = "struct.c";
    struct file *myFile;
    myFile = (struct file*) malloc(sizeof(struct file));
    myFile->f_inode = (struct inode*) malloc(sizeof(struct inode));
    myFile->f_count = 1;
    myFile->f_inode->i_blocks = 10;
    myFile->f_inode->name = (char*) malloc(sizeof(char*) * (sizeof(filename)+1));
    strncpy(myFile->f_inode->name, filename, strlen(filename) + 1);

    return 0;
}
