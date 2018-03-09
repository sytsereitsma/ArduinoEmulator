#ifndef STREAM_H__
#define STREAM_H__

class Stream {
public:
    virtual ~Stream () = default;
    virtual void flush (){}
    virtual void println() {}
    virtual void println(char) {}
    virtual void println(int32_t) {}
    virtual void println(uint32_t) {}
    virtual void println(int64_t) {}
    virtual void println(float) {}
    virtual void println(const __FlashStringHelper*) {}
    virtual void println(const char*) {}
    
    virtual void print(char) {}
    virtual void print(int32_t) {}
    virtual void print(uint32_t) {}
    virtual void print(int64_t) {}
    virtual void print(float) {}
    virtual void print(const __FlashStringHelper*) {}
    virtual void print(const char*) {}

    template <typename T> 
    void write(const T& inValue) {
        print(inValue);
    }

    virtual byte read() {
        return 0;
    }

    virtual bool available() {
        return false;
    }
};


#endif /* end of include guard: STREAM_H__ */