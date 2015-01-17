# signal_cpp_wrap
a c++ wrap for signal
一个linux下处理信号的C++类，方便回调类的成员函数。解决sigaction只能回调C函数的问题。
要使用该类，只需要#include "signal++.h"

具体见用例：example.cpp、CBackend.cpp

编译并测试：

g++ -o example example.cpp CBackend.cpp
./example

按下ctrl+c就可以看到catch signal 2 -- Interrupt这样的消息。
