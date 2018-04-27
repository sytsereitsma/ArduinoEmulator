#ifndef STDINSTREAM_H__
#define STDINSTREAM_H__
#include "Arduino.h"
#include "Stream.h"
#include <queue>
#include <thread>
#include <mutex>

/**
*/
class StdInStream : public Stream {
public:
    virtual byte read() override;
    virtual bool available() override;

    void Push (const std::string& inData);
private:
    std::queue <byte> mReceivedData;
};

#endif /* end of include guard: STDINSTREAM_H__ */