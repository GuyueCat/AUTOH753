/**
  ******************************************************************************
  * This file is part of the TouchGFX 4.12.3 distribution.
  *
  * @attention
  *
  * Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

#include <touchgfx/widgets/canvas/AbstractPainterARGB2222.hpp>
#include <touchgfx/Color.hpp>

namespace touchgfx
{
void AbstractPainterARGB2222::render(uint8_t* ptr,
                                     int x,
                                     int xAdjust,
                                     int y,
                                     unsigned count,
                                     const uint8_t* covers)
{
    uint8_t* p = ptr + (x + xAdjust);

    currentX = x + areaOffsetX;
    currentY = y + areaOffsetY;
    if (renderInit())
    {
        do
        {
            uint8_t red, green, blue, alpha;
            if (renderNext(red, green, blue, alpha))
            {
                uint8_t combinedAlpha = LCD::div255((*covers) * LCD::div255(alpha * widgetAlpha));
                covers++;

                if (combinedAlpha == 0xFF) // max alpha=255 on "*covers" and max alpha=255 on "widgetAlpha"
                {
                    // Render a solid pixel
                    renderPixel(p, red, green, blue);
                }
                else
                {
                    uint8_t ialpha = 0xFF - combinedAlpha;
                    uint8_t p_red = LCD8bpp_ARGB2222::getRedFromColor(*p);
                    uint8_t p_green = LCD8bpp_ARGB2222::getGreenFromColor(*p);
                    uint8_t p_blue = LCD8bpp_ARGB2222::getBlueFromColor(*p);
                    renderPixel(p,
                                LCD::div255(red * combinedAlpha + p_red * ialpha),
                                LCD::div255(green * combinedAlpha + p_green * ialpha),
                                LCD::div255(blue * combinedAlpha + p_blue * ialpha));
                }
            }
            p++;
            currentX++;
        }
        while (--count != 0);
    }
}

void AbstractPainterARGB2222::renderPixel(uint8_t* p, uint8_t red, uint8_t green, uint8_t blue)
{
    *p = static_cast<uint8_t>(LCD8bpp_ARGB2222::getColorFromRGB(red, green, blue));
}
} // namespace touchgfx
