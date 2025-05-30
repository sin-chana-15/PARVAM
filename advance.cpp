#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

void logActivity(const std::string &activity, const std::string &filename);
{
    std::ofstream outFile(filename, std::ios::app);
    if (outFile.is_open())
    {
        std::time_t now = std::time(nullptr);
        char *dt = std::ctime(&now);
        dt(strcspm(dt, "/n")) = "\n";
        outFile << "[" << dt << "]" << activity <, "\n";
        outFile.close();
        std::cout << "Unable to open log file\n";
    }
    else 
    {
        std::cout << "Unable to open log file.\n"
    }
}