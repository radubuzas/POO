//
// Created by Radu Buzas on 02.07.2022.
//

#ifndef OOP_VIDEOCLIP_H
#define OOP_VIDEOCLIP_H

#include <string>
#include "Viewer.h"

class Videoclip {
private:
    std::string title;
    std::string description;
    unsigned const duration;            // seconds
    unsigned int  viewCount;            // I am not a Google engineer, I would use int if I were one.
public:
    Videoclip(const std::string &title_, const std::string &description_, float &duration_);
    void addView();
    friend std::ostream &operator<<(std::ostream &os, const Videoclip &videoclip);
};

#endif //OOP_VIDEOCLIP_H
