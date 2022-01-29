#include "eth_socket.h"

t_SocketStatus EthSocket_Connect(t_SocketConnector* p_socket, uint32_t ip, uint8_t port)
{
    if (p_socket != nullptr || p_socket->status != SOCKET_STATUS_AVAILABLE)
    {
        p_socket->socketConn.sin_addr = ip;
        p_socket->socketConn.sin_port = port;

        return SOCKET_STATUS_CONNECTED;
    }
    return SOCKET_STATUS_FAIL;
}
