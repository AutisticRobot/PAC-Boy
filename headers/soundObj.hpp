#pragma once

#include <string>
#include <iostream>
#include <thread>
//#include <stdlib.h>
#include <cstdlib>


class soundObj
{
    public:
        soundObj(std::string soundFile);
        void playSoundFile();
        void playSoundFile(std::string File);
        void endSound();

        bool isPlaying = false;
        std::string soundFile;

    private:

};