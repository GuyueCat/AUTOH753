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

#ifndef BUTTONS_HPP
#define BUTTONS_HPP

#include <touchgfx/containers/buttons/ClickButtonTrigger.hpp>
#include <touchgfx/containers/buttons/RepeatButtonTrigger.hpp>
#include <touchgfx/containers/buttons/ToggleButtonTrigger.hpp>
#include <touchgfx/containers/buttons/TouchButtonTrigger.hpp>

#include <touchgfx/containers/buttons/BoxWithBorderButtonStyle.hpp>
#include <touchgfx/containers/buttons/IconButtonStyle.hpp>
#include <touchgfx/containers/buttons/ImageButtonStyle.hpp>
#include <touchgfx/containers/buttons/AnimatedImageButtonStyle.hpp>
#include <touchgfx/containers/buttons/TextButtonStyle.hpp>
#include <touchgfx/containers/buttons/TiledImageButtonStyle.hpp>
#include <touchgfx/containers/buttons/WildcardTextButtonStyle.hpp>
#include <touchgfx/containers/buttons/TwoWildcardTextButtonStyle.hpp>


namespace touchgfx
{
/**
 * @typedef BoxWithBorderButtonStyle<ClickButtonTrigger> BoxClickButton
 *
 * @brief Defines an alias representing the box click button.
 */
typedef BoxWithBorderButtonStyle<ClickButtonTrigger> BoxClickButton;

/**
 * @typedef BoxWithBorderButtonStyle<RepeatButtonTrigger> BoxRepeatButton
 *
 * @brief Defines an alias representing the box repeat button.
 */
typedef BoxWithBorderButtonStyle<RepeatButtonTrigger> BoxRepeatButton;

/**
 * @typedef BoxWithBorderButtonStyle<ToggleButtonTrigger> BoxToggleButton
 *
 * @brief Defines an alias representing the box toggle button.
 */
typedef BoxWithBorderButtonStyle<ToggleButtonTrigger> BoxToggleButton;

/**
 * @typedef BoxWithBorderButtonStyle<TouchButtonTrigger> BoxTouchButton
 *
 * @brief Defines an alias representing the box touch button.
 */
typedef BoxWithBorderButtonStyle<TouchButtonTrigger> BoxTouchButton;

/**
 * @typedef ImageButtonStyle<ClickButtonTrigger> ImageClickButton
 *
 * @brief Defines an alias representing the image click button.
 */
typedef ImageButtonStyle<ClickButtonTrigger> ImageClickButton;

/**
 * @typedef ImageButtonStyle<RepeatButtonTrigger> ImageRepeatButton
 *
 * @brief Defines an alias representing the image repeat button.
 */
typedef ImageButtonStyle<RepeatButtonTrigger> ImageRepeatButton;

/**
 * @typedef ImageButtonStyle<TouchButtonTrigger> ImageTouchButton
 *
 * @brief Defines an alias representing the image touch button.
 */
typedef ImageButtonStyle<TouchButtonTrigger> ImageTouchButton;

/**
 * @typedef ImageButtonStyle<ToggleButtonTrigger> ImageToggleButton
 *
 * @brief Defines an alias representing the image toggle button.
 */
typedef ImageButtonStyle<ToggleButtonTrigger> ImageToggleButton;

/**
 * @typedef IconButtonStyle<ClickButtonTrigger> IconClickButton
 *
 * @brief Defines an alias representing the icon click button.
 */
typedef IconButtonStyle<ClickButtonTrigger> IconClickButton;

/**
 * @typedef IconButtonStyle<RepeatButtonTrigger> IconRepeatButton
 *
 * @brief Defines an alias representing the icon repeat button.
 */
typedef IconButtonStyle<RepeatButtonTrigger> IconRepeatButton;

/**
 * @typedef IconButtonStyle<TouchButtonTrigger> IconTouchButton
 *
 * @brief Defines an alias representing the icon touch button.
 */
typedef IconButtonStyle<TouchButtonTrigger> IconTouchButton;

/**
 * @typedef IconButtonStyle<ToggleButtonTrigger> IconToggleButton
 *
 * @brief Defines an alias representing the icon toggle button.
 */
typedef IconButtonStyle<ToggleButtonTrigger> IconToggleButton;

/**
 * @typedef ImageButtonStyle<IconButtonStyle<ClickButtonTrigger> > IconImageClickButton
 *
 * @brief Defines an alias representing the icon image click button.
 */
typedef ImageButtonStyle<IconButtonStyle<ClickButtonTrigger> > IconImageClickButton;

/**
 * @typedef ImageButtonStyle<IconButtonStyle<RepeatButtonTrigger> > IconImageRepeatButton
 *
 * @brief Defines an alias representing the icon image repeat button.
 */
typedef ImageButtonStyle<IconButtonStyle<RepeatButtonTrigger> > IconImageRepeatButton;

/**
 * @typedef ImageButtonStyle<IconButtonStyle<TouchButtonTrigger> > IconImageTouchButton
 *
 * @brief Defines an alias representing the icon image touch button.
 */
typedef ImageButtonStyle<IconButtonStyle<TouchButtonTrigger> > IconImageTouchButton;

/**
 * @typedef ImageButtonStyle<IconButtonStyle<ToggleButtonTrigger> > IconImageToggleButton
 *
 * @brief Defines an alias representing the icon image toggle button.
 */
typedef ImageButtonStyle<IconButtonStyle<ToggleButtonTrigger> > IconImageToggleButton;

/**
 * @typedef TextButtonStyle<ClickButtonTrigger> TextClickButton
 *
 * @brief Defines an alias representing the text click button.
 */
typedef TextButtonStyle<ClickButtonTrigger> TextClickButton;

/**
 * @typedef TextButtonStyle<RepeatButtonTrigger> TextRepeatButton
 *
 * @brief Defines an alias representing the text repeat button.
 */
typedef TextButtonStyle<RepeatButtonTrigger> TextRepeatButton;

/**
 * @typedef TextButtonStyle<TouchButtonTrigger> TextTouchButton
 *
 * @brief Defines an alias representing the text touch button.
 */
typedef TextButtonStyle<TouchButtonTrigger> TextTouchButton;

/**
 * @typedef TextButtonStyle<ToggleButtonTrigger> TextToggleButton
 *
 * @brief Defines an alias representing the text toggle button.
 */
typedef TextButtonStyle<ToggleButtonTrigger> TextToggleButton;

/**
 * @typedef TiledImageButtonStyle<ClickButtonTrigger> TiledImageClickButton
 *
 * @brief Defines an alias representing the tiled image click button.
 */
typedef TiledImageButtonStyle<ClickButtonTrigger> TiledImageClickButton;

/**
 * @typedef TiledImageButtonStyle<RepeatButtonTrigger> TiledImageRepeatButton
 *
 * @brief Defines an alias representing the tiled image repeat button.
 */
typedef TiledImageButtonStyle<RepeatButtonTrigger> TiledImageRepeatButton;

/**
 * @typedef TiledImageButtonStyle<TouchButtonTrigger> TiledImageTouchButton
 *
 * @brief Defines an alias representing the tiled image touch button.
 */
typedef TiledImageButtonStyle<TouchButtonTrigger> TiledImageTouchButton;

/**
 * @typedef TiledImageButtonStyle<ToggleButtonTrigger> TiledImageToggleButton
 *
 * @brief Defines an alias representing the tiled image toggle button.
 */
typedef TiledImageButtonStyle<ToggleButtonTrigger> TiledImageToggleButton;

/**
 * @typedef WildcardTextButtonStyle<ClickButtonTrigger> WildcardTextClickButton
 *
 * @brief Defines an alias representing the wildcard text click button.
 */
typedef WildcardTextButtonStyle<ClickButtonTrigger> WildcardTextClickButton;

/**
 * @typedef WildcardTextButtonStyle<RepeatButtonTrigger> WildcardTextRepeatButton
 *
 * @brief Defines an alias representing the wildcard text repeat button.
 */
typedef WildcardTextButtonStyle<RepeatButtonTrigger> WildcardTextRepeatButton;

/**
 * @typedef WildcardTextButtonStyle<TouchButtonTrigger> WildcardTextTouchButton
 *
 * @brief Defines an alias representing the wildcard text touch button.
 */
typedef WildcardTextButtonStyle<TouchButtonTrigger> WildcardTextTouchButton;

/**
 * @typedef WildcardTextButtonStyle<ToggleButtonTrigger> WildcardTextToggleButton
 *
 * @brief Defines an alias representing the wildcard text toggle button.
 */
typedef WildcardTextButtonStyle<ToggleButtonTrigger> WildcardTextToggleButton;

/**
 * @typedef TwoWildcardTextButtonStyle<ClickButtonTrigger> TwoWildcardTextClickButton
 *
 * @brief Defines an alias representing the wildcard text click button.
 */
typedef TwoWildcardTextButtonStyle<ClickButtonTrigger> TwoWildcardTextClickButton;

/**
 * @typedef TwoWildcardTextButtonStyle<RepeatButtonTrigger> TwoWildcardTextRepeatButton
 *
 * @brief Defines an alias representing the wildcard text repeat button.
 */
typedef TwoWildcardTextButtonStyle<RepeatButtonTrigger> TwoWildcardTextRepeatButton;

/**
 * @typedef TwoWildcardTextButtonStyle<TouchButtonTrigger> TwoWildcardTextTouchButton
 *
 * @brief Defines an alias representing the wildcard text touch button.
 */
typedef TwoWildcardTextButtonStyle<TouchButtonTrigger> TwoWildcardTextTouchButton;

/**
 * @typedef TwoWildcardTextButtonStyle<ToggleButtonTrigger> TwoWildcardTextToggleButton
 *
 * @brief Defines an alias representing the wildcard text toggle button.
 */
typedef TwoWildcardTextButtonStyle<ToggleButtonTrigger> TwoWildcardTextToggleButton;

/**
 * @typedef AnimatedImageButtonStyle<ClickButtonTrigger> AnimatedImageClickButton
 *
 * @brief Defines an alias representing the animated image click button.
 */
typedef AnimatedImageButtonStyle<ClickButtonTrigger> AnimatedImageClickButton;

/**
 * @typedef AnimatedImageButtonStyle<RepeatButtonTrigger> AnimatedImageRepeatButton
 *
 * @brief Defines an alias representing the animated image repeat button.
 */
typedef AnimatedImageButtonStyle<RepeatButtonTrigger> AnimatedImageRepeatButton;

/**
 * @typedef AnimatedImageButtonStyle<TouchButtonTrigger> AnimatedImageTouchButton
 *
 * @brief Defines an alias representing the animated image touch button.
 */
typedef AnimatedImageButtonStyle<TouchButtonTrigger> AnimatedImageTouchButton;

/**
 * @typedef AnimatedImageButtonStyle<ToggleButtonTrigger> AnimatedImageToggleButton
 *
 * @brief Defines an alias representing the animated image toggle button.
 */
typedef AnimatedImageButtonStyle<ToggleButtonTrigger> AnimatedImageToggleButton;
} // namespace touchgfx

#endif // BUTTONS_HPP
