#ifndef CBACKEND_H
#define CBACKEND_H

/**
 * @brief The CBackend class
 * 后台工作类
 */
class CBackend
{
public:
    CBackend();

    void sighandler( int signum );
    void loop();
};

#endif // CBACKEND_H
