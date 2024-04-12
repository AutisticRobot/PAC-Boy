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

std::string checkForAlarm();// checks for an alarm. Returns an empty string if no alarm is found;
std::string getRandSoundFromFolder(std::string folder);
void loadAlarmsFromFile(std::string File);
bool sysTimeIs();



int main(int argc, char *argv[])
{
    Alarms.insert({1,"Hello World!"});
    Alarms.insert({2,"Code Works"});
    std::cout << Alarms.at(1) << std::endl;
    std::cout << Alarms.at(2) << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));

    while (running)
    {
    
    

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

    if(fileName == "stop")
    {
        running = false;
    }

    sound.playSoundFile(fileName);

    }

    return 0;
}

std::string checkForAlarm()
{
    return "";
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