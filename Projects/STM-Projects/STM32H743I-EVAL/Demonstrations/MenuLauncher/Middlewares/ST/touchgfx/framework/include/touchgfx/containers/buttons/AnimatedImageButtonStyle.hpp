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

#ifndef ANIMATEDIMAGEBUTTONSTYLE_HPP
#define ANIMATEDIMAGEBUTTONSTYLE_HPP

#include <touchgfx/widgets/AnimatedImage.hpp>

namespace touchgfx
{
/**
 * @class AnimatedImageButtonStyle AnimatedImageButtonStyle.hpp touchgfx/containers/buttons/AnimatedImageButtonStyle.hpp
 *
 * @brief An animated image button style.  An animated image button
 *        style. This class is supposed to be used with one of the
 *        ButtonTrigger classes to create a functional button. This
 *        class will show the first or last image of an animated image
 *        depending on the state of the button (pressed or
 *        released). When the state changes the button will show the
 *        sequence of images in forward or reversed order.
 *
 *        The AnimatedImageButtonStyle will set the size of the enclosing
 *        container (normally AbstractButtonContainer) to the size of
 *        the first Bitmap. This can be overridden by calling
 *        setWidth/setHeight after setting the bitmaps.
 *
 *        The position of the bitmap can be adjusted with setBitmapXY
 *        (default is upper left corner).
 *
 * @tparam T Generic type parameter. Typically a AbstractButtonContainer subclass.
 *
 * @see AbstractButtonContainer
 */
template<class T>
class AnimatedImageButtonStyle : public T
{
public:
    /**
     * @fn AnimatedImageButtonStyle::AnimatedImageButtonStyle()
     *
     * @brief Default constructor.
     */
    AnimatedImageButtonStyle() : T(), buttonAnimatedImage()
    {
        buttonAnimatedImage.setXY(0, 0);
        T::add(buttonAnimatedImage);
    }

    /**
     * @fn virtual AnimatedImageButtonStyle::~AnimatedImageButtonStyle()
     *
     * @brief Destructor.
     */
    virtual ~AnimatedImageButtonStyle() { }

    /**
     * @fn void AnimatedImageButtonStyle::setBitmaps(const Bitmap& bmpStart, const Bitmap& bmpEnd)
     *
     * @brief Sets the bitmaps.
     *
     * @param bmpStart The bitmap start.
     * @param bmpEnd   The bitmap end.
     */
    void setBitmaps(const Bitmap& bmpStart, const Bitmap& bmpEnd)
    {
        buttonAnimatedImage.setBitmaps(bmpStart.getId(), bmpEnd.getId());

        AbstractButtonContainer::setWidth(bmpStart.getWidth());
        AbstractButtonContainer::setHeight(bmpStart.getHeight());

        handlePressedUpdated();
    }

    /**
     * @fn void AnimatedImageButtonStyle::setBitmapXY(uint16_t x, uint16_t y)
     *
     * @brief Sets bitmap xy.
     *
     * @param x An uint16_t to process.
     * @param y An uint16_t to process.
     */
    void setBitmapXY(uint16_t x, uint16_t y)
    {
        buttonAnimatedImage.setXY(x, y);
    }

    /**
     * @fn void AnimatedImageButtonStyle::setUpdateTicksInterval(uint8_t updateInterval)
     *
     * @brief Sets update ticks interval.
     *
     * @param updateInterval The update interval.
     */
    void setUpdateTicksInterval(uint8_t updateInterval)
    {
        buttonAnimatedImage.setUpdateTicksInterval(updateInterval);
    }

protected:
    AnimatedImage buttonAnimatedImage;  ///< The button animated image

    /**
     * @fn virtual void AnimatedImageButtonStyle::handlePressedUpdated()
     *
     * @brief Handles the pressed updated.
     */
    virtual void handlePressedUpdated()
    {
        buttonAnimatedImage.startAnimation(AbstractButtonContainer::pressed, true, false);
        T::handlePressedUpdated();
    }

    /**
     * @fn virtual void AnimatedImageButtonStyle::handleAlphaUpdated()
     *
     * @brief Handles the alpha updated.
     */
    virtual void handleAlphaUpdated()
    {
        buttonAnimatedImage.setAlpha(T::getAlpha());
        T::handleAlphaUpdated();
    }
};
}

#endif // ANIMATEDIMAGEBUTTONSTYLE_HPP
