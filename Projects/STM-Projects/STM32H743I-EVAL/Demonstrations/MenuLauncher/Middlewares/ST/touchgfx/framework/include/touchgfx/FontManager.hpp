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

#ifndef FONTMANAGER_HPP
#define FONTMANAGER_HPP

#include <touchgfx/Font.hpp>

namespace touchgfx
{
/**
 * @class FontProvider FontManager.hpp touchgfx/FontManager.hpp
 *
 * @brief A generic pure virtual definition of a FontProvider.
 *
 *        A generic pure virtual definition of a FontProvider, which is a class capable of
 *        returning a font based on a font id. An application-specific derivation of this class
 *        must be implemented.
 */
class FontProvider
{
public:

    /**
     * @fn virtual Font* FontProvider::getFont(FontId fontId) = 0;
     *
     * @brief Gets a font.
     *
     *        Gets a font.
     *
     * @param fontId The font id of the font to get.
     *
     * @return The font with a font id of fontId.
     */
    virtual Font* getFont(FontId fontId) = 0;

    /**
     * @fn virtual FontProvider::~FontProvider()
     *
     * @brief Destructor.
     *
     *        Destructor.
     */
    virtual ~FontProvider()
    {
    }

private:
};

/**
 * @class FontManager FontManager.hpp touchgfx/FontManager.hpp
 *
 * @brief This class is the entry point for looking up a font based on a font id.
 *
 *        This class is the entry point for looking up a font based on a font id. Must be
 *        initialized with the appropriate FontProvider by the application.
 */
class FontManager
{
public:

    /**
     * @fn static void FontManager::setFontProvider(FontProvider* fontProvider);
     *
     * @brief Sets the font provider.
     *
     *        Sets the font provider. Must be initialized with the appropriate FontProvider by
     *        the application.
     *
     * @param [in] fontProvider Sets the font provider. Must be initialized with the appropriate
     *                          FontProvider by the application.
     */
    static void setFontProvider(FontProvider* fontProvider);

    /**
     * @fn static Font* FontManager::getFont(FontId fontId);
     *
     * @brief Gets a font.
     *
     *        Gets a font.
     *
     * @param fontId The font id of the font to get.
     *
     * @return The font with a font id of fontId.
     */
    static Font* getFont(FontId fontId);

private:
    static FontProvider* provider;
};
} // namespace touchgfx

#endif // FONTMANAGER_HPP
