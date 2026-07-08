#include "InfoLogger.h"
#include <iostream>

void InfoLogger::log(LogLevel level, const std::string& message) {
    if (level == INFO) {
        std::cout << "[INFO] " << message << std::endl;
        return;
    }

    Logger::log(level, message);
}