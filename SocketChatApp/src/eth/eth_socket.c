#include "eth_socket.h"

t_SocketStatus EthSocket_Connect(t_SocketConnector* p_socket, uint32_t ip, uint8_t port)
{
    if (p_socket != nullptr || p_socket->status != SOCKET_STATUS_CONNECTED)
    {
        p_socket->socketConn.sin_addr = ip;
        p_socket->socketConn.sin_port = port;

#ifdef BUILD_ETH_CLIENT
        uint8_t ret = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
#else
        //test
#endif
        //bind
        //accept
        //see https://riptutorial.com/posix/example/22276/socket-basics

        return SOCKET_STATUS_CONNECTED;
    }
    return SOCKET_STATUS_FAIL;
}


t_SocketStatus EthSocket_Disconnect(t_SocketConnector* p_socket)
{
    if (p_socket != nullptr)
    {
        close(p_socket->socketFD);
        p_socket->status = SOCKET_STATUS_AVAILABLE;
    }

    return SOCKET_STATUS_FAIL;
}
