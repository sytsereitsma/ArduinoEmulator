#ifndef STDOUTSTREAM_H__
#define STDOUTSTREAM_H__
#include "Print.h"

class StdOutStream : public Print {
public:
    void write (uint8_t inValue) override;
};

#endif /* end of include guard: STDOUTSTREAM_H__ */