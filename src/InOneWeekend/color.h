#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include <iostream>

void write_color(std::ostream &out, color pixel)
{
    out << static_cast<int>(255.999 * pixel.x()) << ' '
        << static_cast<int>(255.999 * pixel.y()) << ' '
        << static_cast<int>(255.999 * pixel.z()) << '\n';
}

#endif