#include "signal++.h"
#include "CBackend.h"

/**
 * @brief main
 * @return
 * CSignal example
 */
int main()
{
    CBackend backend;

    CSIG_DEFAULT->set<CBackend,&CBackend::sighandler>( &backend,SIGINT,SA_RESTART );

    backend.loop();
}
