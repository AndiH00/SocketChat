#ifndef ETHSOCKET_H
#define ETHSOCKET_H

#include "eth_ipc_types.h"

t_SocketStatus EthSocket_Connect(t_SocketConnector* p_socket, uint32_t ip, uint8_t port);

t_SocketStatus EthSocket_Disconnect(t_SocketConnector* p_socket);

#endif // ETHSOCKET_H
