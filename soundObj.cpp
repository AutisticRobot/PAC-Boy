#include "headers/soundObj.hpp"

void playSoundFile(std::string File)
{
    std::cout <<  "[*Play " << File << "*]" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "[*End Sound*]" << std::endl;
}