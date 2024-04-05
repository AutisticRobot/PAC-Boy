#include <cstddef>
#include <iostream>
#include <chrono>
#include <ctime>
#include <map>
#include <string>
#include <thread>

#include "headers/soundObj.hpp"

std::map<int, std::string> Alarms;//{time, sound folder}
std::string getRandSoundFromFolder(std::string folder);
void loadAlarmsFromFile(std::string File);


int main(int argc, char *argv[])
{
    std::cout << "Hello World! :]\n";
    std::cout << Alarms[0][0] << std::endl;

    playSoundFile("metalpipe.mp3");

    return 0;
}

std::string getRandFileFromFolder(std::string folder)
{
    return "";
}

void loadAlarmsFromFile(std::string File)
{
    Alarms = 
    {
        {300, "alarm"},
    };
}
