//
// Created by Radu Buzas on 02.07.2022.
//

#include "../headers/Videoclip.h"

Videoclip::Videoclip(const std::string &title_, const std::string &description_, unsigned & duration_) : title(title_), description(description_), duration(duration_) {
    viewCount = 0;
}

void Videoclip::addView(){
    ++viewCount;
}

std::ostream &operator<<(std::ostream &os, const Videoclip &videoclip) {
    os << "Title: " << videoclip.title << '\n';
    os << "Description: " << videoclip.description <<'\n';
    os << "Duration: " << videoclip.duration <<'\n';
    os << "Views: " << videoclip.viewCount << '\n';
    return os;
}