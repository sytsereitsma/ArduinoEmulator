#ifndef STREAM_H__
#define STREAM_H__
#include "Print.h"

class Stream : public Print {
public:
    virtual ~Stream () = default;

    virtual byte read() {
        return 0;
    }

    virtual bool available() {
        return false;
    }
};


#endif /* end of include guard: STREAM_H__ */