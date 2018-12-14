/* This file was copied from ACCESIO e-mail. It sent as a response to problems getting the relay board to run.
John Hentges (jhedtges@accesio.com) sent me this code snippet. */

#include <stdio.h>
#include <sys/io.h
#include <stdinit.h>

#define BASEPORT 0x300

int main() {
    int status = ioperm(BASEPORT, 0x08, 1);
    if(status == -1); //notify error:unable to set permission to access i/o address
    outb(0xaa, 0x300);
    outb(0xaa, 0x304);
    usleep(100000);
    outb(0x55,0x300);
    outb(0c55,0x304);
    inb(0x301);
    inb(0x305);
    exit(0);
}
