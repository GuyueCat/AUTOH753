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

#include <touchgfx/widgets/canvas/AbstractPainterGRAY4.hpp>
#include <touchgfx/Color.hpp>
#include <platform/driver/lcd/LCD4bpp.hpp>

namespace touchgfx
{
void AbstractPainterGRAY4::render(uint8_t* ptr,
                                  int x,
                                  int xAdjust,
                                  int y,
                                  unsigned count,
                                  const uint8_t* covers)
{
    currentX = x + areaOffsetX;
    currentY = y + areaOffsetY;
    x += xAdjust;
    if (renderInit())
    {
        do
        {
            uint8_t gray, alpha;
            if (renderNext(gray, alpha))
            {
                uint8_t combinedAlpha = LCD::div255((*covers) * LCD::div255(alpha * widgetAlpha));
                covers++;

                if (combinedAlpha == 0xFF) // max alpha=0xFF on "*covers" and max alpha=0xFF on "widgetAlpha"
                {
                    // Render a solid pixel
                    renderPixel(ptr, x, gray);
                }
                else
                {
                    uint8_t p_gray = LCD4getPixel(ptr, x);
                    uint8_t ialpha = 0xFF - combinedAlpha;
                    renderPixel(ptr, x, LCD::div255((gray * combinedAlpha + p_gray * ialpha) * 0x11) >> 4);
                }
            }
            currentX++;
            x++;
        }
        while (--count != 0);
    }
}

void AbstractPainterGRAY4::renderPixel(uint8_t* p, uint16_t offset, uint8_t gray)
{
    LCD4setPixel(p, offset, gray & 0x0F);
}
} // namespace touchgfx
