#include "headers/soundObj.hpp"


class soundObj
{
    bool isPlaying = false;

    void playSoundFile(std::string File)
    {
        std::cout <<  "[*Play " << File << "*]" << std::endl;
        isPlaying = true;
        std::this_thread::sleep_for(std::chrono::seconds(3));
        endSound();
    }

    void endSound()
    {
        isPlaying = false;
        std::cout << "[*End Sound*]" << std::endl;

    }
};