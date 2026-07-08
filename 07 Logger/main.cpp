#include "InfoLogger.h"
#include "DebugLogger.h"
#include "ErrorLogger.h"

int main() {
    InfoLogger infoLogger;
    DebugLogger debugLogger;
    ErrorLogger errorLogger;

    // Create Chain
    infoLogger.setNextLogger(&debugLogger);
    debugLogger.setNextLogger(&errorLogger);

    // Always send request to the first handler
    infoLogger.log(INFO, "Application started");
    infoLogger.log(DEBUG, "Debugging application");
    infoLogger.log(ERROR, "Database connection failed");

    return 0;
}