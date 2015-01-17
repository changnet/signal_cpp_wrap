#include "CBackend.h"

#include <signal.h>    /* for strsignal */
#include <unistd.h>    /* for sleep in ubuntu 14.04 */
#include <iostream>    /* for std::cout */
#include <cstring>     /* for strsignal */

CBackend::CBackend()
{
}

/**
 * @brief CBackend::sighandler
 * @param signum
 * 处理信号
 */
void CBackend::sighandler( int signum )
{
    std::cout << "catch signal " << signum << " -- " << strsignal( signum ) << std::endl;
}

/**
 * @brief CBackend::loop
 * 后台工作循环
 */
void CBackend::loop()
{
    while ( true )
    {
        std::cout << "I'm working ..." << std::endl;
        sleep( 1 );
    }
}
