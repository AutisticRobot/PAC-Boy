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
bool running = true;

std::string getRandSoundFromFolder(std::string folder);
void loadAlarmsFromFile(std::string File);
bool sysTimeIs();



int main(int argc, char *argv[])
{
    while (running)
    {
    
    
    std::cout << "Hello World! :]\n";
    std::cout << Alarms[0][0] << std::endl;

    sound.playSoundFile();

    sysTimeIs();

    std::cout << "Getting Next Sound" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    sound.playSoundFile("oof.mp3");

    sysTimeIs();

    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::string fileName;

    std::cout << "\nEnter New File Name:";
    std::cin >> fileName;

    sound.playSoundFile(fileName);

    }

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
    auto const nowTime = std::chrono::system_clock::now();
    std::cout << "Time is " << std::chrono::system_clock::to_time_t(nowTime);

    return true;

}