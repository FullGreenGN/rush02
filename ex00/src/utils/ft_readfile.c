#include <unistd.h>
#include <fcntl.h>
#include "../../includes/ft.h"

t_list    ft_open() 
{
    int fd;
    char    buffer[1024];

    fd = open("numbers.dict", O_RDONLY);
    if (fd == -1) {
        ft_putstr("Error\n");
        return;
    }
    
    ssize_t bytesRead;

    while ((bytesRead = read(fd, buffer, sizeof(buffer))) > 0)
        write(1, buffer, bytesRead);
    close(fd);
}