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

#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/hal/HAL.hpp>

namespace touchgfx
{
int16_t TextArea::getTextHeight()
{
    if (typedText.hasValidId())
    {
        return getTextHeightInternal(typedText.getText());
    }
    else
    {
        return 0;
    }
}

uint16_t TextArea::getTextWidth() const
{
    return typedText.hasValidId() ? typedText.getFont()->getStringWidth(typedText.getTextDirection(), typedText.getText()) : 0;
}

void TextArea::draw(const Rect& area) const
{
    if (typedText.hasValidId())
    {
        const Font* fontToDraw = typedText.getFont();
        if (fontToDraw != 0)
        {
            LCD::StringVisuals visuals(fontToDraw, color, alpha, typedText.getAlignment(), linespace, rotation, typedText.getTextDirection(), indentation, wideTextAction);
            HAL::lcd().drawString(getAbsoluteRect(), area, visuals, typedText.getText(), 0, 0);
        }
    }
}

void TextArea::setTypedText(TypedText t)
{
    typedText = t;
    // If this TextArea does not yet have a width and height,
    // just assign the smallest possible size to fit current text.
    if ((getWidth() == 0) && (getHeight() == 0))
    {
        resizeToCurrentText();
    }
}

void TextArea::resizeToCurrentText()
{
    if (typedText.hasValidId())
    {
        uint16_t w = getTextWidth();
        uint16_t h = getTextHeight();
        if (rotation == TEXT_ROTATE_0 || rotation == TEXT_ROTATE_180)
        {
            setWidth(w);
            setHeight(h);
        }
        else
        {
            setWidth(h);
            setHeight(w);
        }
    }
}

void TextArea::resizeToCurrentTextWithAlignment()
{
    if (typedText.hasValidId())
    {
        Alignment alignment = typedText.getAlignment();
        uint16_t text_width = getTextWidth();
        uint16_t text_height = getTextHeight();
        if (rotation == TEXT_ROTATE_0 || rotation == TEXT_ROTATE_180)
        {
            // (rotate-0 && left-align) or (rotate-180 && right-align) places text to the left
            if (!((rotation == TEXT_ROTATE_0 && alignment == LEFT) || (rotation == TEXT_ROTATE_180 && alignment == RIGHT)))
            {
                uint16_t old_width = getWidth();
                uint16_t old_x = getX();
                if (alignment == CENTER)
                {
                    setX(old_x + (old_width - text_width) / 2);
                }
                else
                {
                    setX(old_x + (old_width - text_width));
                }
            }
            if (rotation == TEXT_ROTATE_180)
            {
                uint16_t old_height = getHeight();
                uint16_t old_y = getY();
                setY(old_y + (old_height - text_height));
            }
            setWidth(text_width);
            setHeight(text_height);
        }
        else
        {
            // 90+left or 270+right places text at the same y coordinate
            if (!((rotation == TEXT_ROTATE_90 && alignment == LEFT) || (rotation == TEXT_ROTATE_270 && alignment == RIGHT)))
            {
                uint16_t old_height = getHeight();
                uint16_t old_y = getY();
                if (alignment == CENTER)
                {
                    setY(old_y + (old_height - text_width) / 2);
                }
                else
                {
                    setY(old_y + (old_height - text_width));
                }
            }
            if (rotation == TEXT_ROTATE_90)
            {
                uint16_t old_width = getWidth();
                uint16_t old_x = getX();
                setX(old_x + (old_width - text_height));
            }
            setWidth(text_height);
            setHeight(text_width);
        }
    }
}

void TextArea::resizeHeightToCurrentText()
{
    if (typedText.hasValidId())
    {
        uint16_t h = getTextHeight();
        if (rotation == TEXT_ROTATE_0 || rotation == TEXT_ROTATE_180)
        {
            setHeight(h);
        }
        else
        {
            setWidth(h);
        }
    }
}

int16_t TextArea::getTextHeightInternal(const Unicode::UnicodeChar* format, ...) const
{
    va_list pArg;
    va_start(pArg, format);

    const Font* fontToDraw = typedText.getFont();
    int16_t textHeight = fontToDraw->getMinimumTextHeight();

    TextProvider textProvider;
    textProvider.initialize(format, pArg, fontToDraw->getGSUBTable());

    int16_t numLines = LCD::getNumLines(textProvider, wideTextAction, typedText.getTextDirection(), typedText.getFont(), getWidth());

    va_end(pArg);
    return (textHeight + linespace > 0) ? (numLines * textHeight + (numLines - 1) * linespace) : (numLines > 0) ? (textHeight) : 0;
}
} // namespace touchgfx
