#include <iostream>
#include "ColorPair.h"

namespace TelCoColorCoder
{
    void PrintColorCodeManual() {
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) 
        {
            ColorPair color = GetColorFromPairNumber(i);
            std::cout << i << " - " << color.ToString() << std::endl;
        }
    }
}
