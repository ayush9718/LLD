#pragma once

#include "Logger.h"

class InfoLogger : public Logger {
public:
    void log(LogLevel level, const std::string& message) override;
};