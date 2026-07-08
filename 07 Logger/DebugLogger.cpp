#include "DebugLogger.h"
#include <iostream>

void DebugLogger::log(LogLevel level, const std::string& message) {
    if (level == DEBUG) {
        std::cout << "[DEBUG] " << message << std::endl;
        return;
    }

    Logger::log(level, message);
}