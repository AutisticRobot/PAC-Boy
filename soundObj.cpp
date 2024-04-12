#include "headers/soundObj.hpp"


    //namespace soundObj
    //{
soundObj::soundObj(std::string soundFile)
{
    this->soundFile = soundFile;
}

void soundObj::playSoundFile()
{
    playSoundFile(soundFile);
}
void soundObj::playSoundFile(std::string File)
{
    system("clear");
    std::cout <<  "[*Playing " << File << "*]" << std::endl;
    isPlaying = true;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    endSound();
}

void soundObj::endSound()
{
    isPlaying = false;
    std::cout << "[*End Sound*]" << std::endl;

}
    //}