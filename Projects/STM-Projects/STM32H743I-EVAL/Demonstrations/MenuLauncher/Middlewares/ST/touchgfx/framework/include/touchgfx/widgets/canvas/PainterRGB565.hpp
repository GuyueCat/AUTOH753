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

#ifndef PAINTERRGB565_HPP
#define PAINTERRGB565_HPP

#include <stdint.h>
#include <touchgfx/widgets/canvas/AbstractPainterRGB565.hpp>
#include <touchgfx/hal/Types.hpp>

namespace touchgfx
{
/**
 * @class PainterRGB565 PainterRGB565.hpp touchgfx/widgets/canvas/PainterRGB565.hpp
 *
 * @brief A Painter that will paint using a color and an alpha value.
 *
 *        The PainterRGB565 class allows a shape to be filled with a given color and alpha
 *        value. This allows transparent, anti-aliased elements to be drawn.
 *
 * @see AbstractPainter
 */
class PainterRGB565 : public AbstractPainterRGB565
{
public:

    /**
     * @fn PainterRGB565::PainterRGB565(colortype color = 0, uint8_t alpha = 255);
     *
     * @brief Constructor.
     *
     *        Constructor.
     *
     * @param color the color.
     * @param alpha the alpha.
     */
    PainterRGB565(colortype color = 0, uint8_t alpha = 255);

    /**
     * @fn void PainterRGB565::setColor(colortype color, uint8_t alpha = 255);
     *
     * @brief Sets color and alpha to use when drawing the CanvasWidget.
     *
     *        Sets color and alpha to use when drawing the CanvasWidget.
     *
     * @param color The color.
     * @param alpha The alpha.
     */
    void setColor(colortype color, uint8_t alpha = 255);

    /**
     * @fn colortype PainterRGB565::getColor() const;
     *
     * @brief Gets the current color.
     *
     *        Gets the current color.
     *
     * @return The color.
     */
    colortype getColor() const;

    /**
     * @fn void PainterRGB565::setAlpha(uint8_t alpha);
     *
     * @brief Sets an alpha value for the painter.
     *
     *        Sets an alpha value for the painter.
     *
     * @param alpha The alpha value to use.
     */
    void setAlpha(uint8_t alpha);

    /**
     * @fn uint8_t PainterRGB565::getAlpha() const;
     *
     * @brief Gets the current alpha value.
     *
     *        Gets the current alpha value.
     *
     * @return The current alpha value.
     *
     * @see setAlpha
     */
    uint8_t getAlpha() const;

    virtual void render(uint8_t* ptr, int x, int xAdjust, int y, unsigned count, const uint8_t* covers);

protected:
    virtual bool renderNext(uint8_t& red, uint8_t& green, uint8_t& blue, uint8_t& alpha);

    uint16_t painterColor;   ///< The color
    uint16_t painterRed;     ///< The red part of the color
    uint16_t painterGreen;   ///< The green part of the color
    uint16_t painterBlue;    ///< The blue part of the color
    uint8_t  painterAlpha;   ///< The alpha value
}; // class PainterRGB565
} // namespace touchgfx

#endif // PAINTERRGB565_HPP
