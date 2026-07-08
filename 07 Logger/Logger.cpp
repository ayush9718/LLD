#include "Logger.h"

Logger::Logger() {
    nextLogger = nullptr;
}

Logger::~Logger() {
}

void Logger::setNextLogger(Logger* nextLogger) {
    this->nextLogger = nextLogger;
}

void Logger::log(LogLevel level, const std::string& message) {
    if (nextLogger != nullptr) {
        nextLogger->log(level, message);
    }
}