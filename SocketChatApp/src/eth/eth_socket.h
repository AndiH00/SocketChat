#ifndef ETHSOCKET_H
#define ETHSOCKET_H

#include "socket.h"

t_SocketStatus EthSocket_Connect(t_SocketConnector* p_socket, uint32_t ip, uint8_t port);

#endif // ETHSOCKET_H
