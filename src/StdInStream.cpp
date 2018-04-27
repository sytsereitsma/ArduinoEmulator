#include "StdInStream.h"

namespace {
}

byte StdInStream::read() {
    if (!available ()) {
        return 0;
    }

    byte c (mReceivedData.front ());
    mReceivedData.pop ();
    return c;
}

bool StdInStream::available()  {
    return !mReceivedData.empty ();
}

void StdInStream::Push (const std::string& inData) {
    for(auto c: inData) {
        mReceivedData.push (c);
    }
}
