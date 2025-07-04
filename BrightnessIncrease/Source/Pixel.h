#pragma once

#include <cstdint>

#include "Properties.h"

////////////////////////////////////////////////////////////////////////////////
//
/// Структура, представляющая пиксель
/**
  Содержит компоненты цвета в формате RGB.
 */
////////////////////////////////////////////////////////////////////////////////
struct Pixel {
public:
    uint8_t m_red;    ///< Красная компонента.
    uint8_t m_green;  ///< Зеленая компонента.
    uint8_t m_blue;   ///< Синяя компонента.

    /// Конструктор по умолчанию
    Pixel()
        : Pixel(properties::c_defaultColor, properties::c_defaultColor,
                properties::c_defaultColor) {
    }
    /// Конструктор с параметрами
    Pixel(uint8_t red, uint8_t green, uint8_t blue) : m_red(red), m_green(green), m_blue(blue) {
    }
};
