#include <unistd.h>
#include <fcntl.h>
#include "../../includes/ft.h"

void ft_open() {
    int fd = open("numbers.dict", O_RDONLY);
    if (fd == -1) {
        ft_putstr("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    char buffer[1024];
    ssize_t bytesRead;

    while ((bytesRead = read(fd, buffer, sizeof(buffer))) > 0) {
        write(1, buffer, bytesRead);
    }

    close(fd);
}

int main() {
    ft_open();
    return 0;
}