#include <cstddef>
#include <iostream>
#include <chrono>
#include <ctime>
#include <map>
#include <string>
#include <thread>

#include "headers/soundObj.hpp"

std::map<int, std::string> Alarms;//{time, sound folder}
soundObj sound = soundObj("metalpipe.mp3");

std::string getRandSoundFromFolder(std::string folder);
void loadAlarmsFromFile(std::string File);
bool sysTimeIs();



int main(int argc, char *argv[])
{
    std::cout << "Hello World! :]\n";
    std::cout << Alarms[0][0] << std::endl;

    sound.playSoundFile();

    sysTimeIs();

    std::cout << "Getting Next Sound" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    sound.playSoundFile("oof.mp3");

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

bool sysTimeIs()
{
    std::cout << "Time is "; //<< (std::string)std::chrono::system_clock::now();

    return true;

}