#include <iostream>
#include <fstream>
#include "color.h"
#include "vec3.h"

int main()
{
    const int image_width = 256;
    const int image_height = 256;

    std::string file = "image.ppm";
    std::fstream filestream(file, std::ios::in | std::ios::binary | std::ios::app);

    if (!filestream.is_open())
        std::cout << "Open file failed." << std::endl;

    filestream << "P3\n"
               << image_width << ' ' << image_height << "\n255\n";

    for (int j = image_height - 1; j >= 0; --j)
    {
        std::cerr << "\rScanlines remaining : " << j << ' ' << std::flush;
        for (int i = 0; i < image_width; ++i)
        {
            color pixel(double(i) / (image_width - 1), double(j) / (image_height - 1), 0.25);
            write_color(filestream, pixel);
        }
    }

    std::cout << "\nDone\n";

    return 0;
}