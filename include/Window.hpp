#pragma once

#include <Changer.hpp>
#include <curses.h>
#include <Draw.hpp>
#include <list>
#include <unistd.h>

using namespace std;

class Window
{
private:
    bool close;
    int x, y;

public:
    Window()
    {
        initscr();
        noecho();
        getmaxyx(stdscr, x, y);
        close = false;
    }

    void Actualizar(list<Changer *> actlist)
    {
        for (auto &&act : actlist)
        {
            act->Update();
        }
        usleep(35000);
    }

    void Draw(list<Draw *> drawlist)
    {
        clear();
        box(stdscr, ':', '.');
        for (auto &&dib : drawlist)
        {
            dib->sketch();
        }
        refresh();
    }

    void Close()
    {
        this->close = true;
    }

    bool ActClose()
    {
        return this->close;
    }

    ~Window()
    {
        endwin();
    }
};
