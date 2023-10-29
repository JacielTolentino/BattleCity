#pragma once

#include <curses.h>
#include <filesystem>
#include <fstream>
#include <string>
#include <Vector.hpp>

using namespace std;

class Draw
{
private:
    bool    is_open;
    fstream archive;
    string  directory;
    Vector  position;
public:
    Draw (string state)
    {
     this->directory = "./data/" + state +".txt";
     this->is_open = false;
     this->archive.open(this->directory, ios::in);
    }

    void sketch ( ) 
    {
     if (archive.is_open())
        {
         std :: string line;
         while (std::getline(archive, line))
               {
                int y;
                y = getcury(stdscr);
                mvaddstr (
                         y + 1,
                         this->position.ReadX(),
                         line.c_str()
                         );
               }
         archive.clear();
         archive.seekg(0);
        }
    }

    ~Draw ()
    {
     archive.close();   
    }
};


