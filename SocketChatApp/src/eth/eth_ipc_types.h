#ifndef SOCKET_H
#define SOCKET_H

// include POSIX socket library
#include <sys/socket.h>

// include POSIX socket types
#include <sys/types.h>

#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>


typedef enum
{
    SOCKET_STATUS_FAIL = 0x00u,
    SOCKET_STATUS_SUCCESS = 0x001u,
    SOCKET_STATUS_AVAILABLE,
    SOCKET_STATUS_CONNECTED
}t_SocketStatus;

typedef struct
{
    struct sockaddr_in socketConn;  // storing ip address, port
    u_int8_t socketFD;              // file discriptor
    t_SocketStatus status;          // status showing if socket is in use
}t_SocketConnector;


#define IPV4_ADDR_MASTER 124.0.0.1
#define TCP_PORT_MASTER 8088

#define IPV4_ADDR_CLIENT 124.0.0.2
#define TCP_PORT_CLIENT 8089

#endif // SOCKET_H
