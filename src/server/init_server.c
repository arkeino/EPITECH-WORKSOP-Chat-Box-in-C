/*
** EPITECH PROJECT, 2022
** EPITECH-WORKSOP-Chat-Box-in-C
** File description:
** init_server
*/

#include "server.h"

struct sockaddr_in addr_server;

int check_socket(int sockfd)
{
    if (sockfd == -1)
    {
        printf("socket creation failed...\n");
        exit(0);
    }
    else
        printf("Socket successfully created..\n");
}


server_t *init_server(char *ip_addr, int port)
{
    int create_socket;
    int client_sock, read_size;

    int portno;

    struct sockaddr_in serv_addr, cli_addr;

    server_t *server = malloc(sizeof(server_t));
    create_socket = socket(AF_INET , SOCK_STREAM , 0);
	if (create_socket == -1) {
		printf("Socket failed");
	}
	puts("Socket created");

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(portno);
     if (bind(create_socket, (struct sockaddr *) &serv_addr,
              sizeof(serv_addr)) < 0)
              error("ERROR on binding");


    return server;
}