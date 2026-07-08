#pragma once

#include <string>

enum LogLevel {
    INFO = 1,
    DEBUG = 2,
    ERROR = 3
};

class Logger {
protected:
    Logger* nextLogger;

public:
    Logger();
    virtual ~Logger();

    void setNextLogger(Logger* nextLogger);
    virtual void log(LogLevel level, const std::string& message);
};