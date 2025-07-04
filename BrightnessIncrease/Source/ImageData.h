#pragma once

#include <vector>

#include "Properties.h"
#include "Pixel.h"

////////////////////////////////////////////////////////////////////////////////
//
/// Класс представляет двумерное изображение, состоящее из пикселей.
/**
    Хранит размеры изображения и данные о каждом пикселе в виде матрицы.
    Предоставляет доступ к ширине, высоте и конкретным пикселям.
 */
////////////////////////////////////////////////////////////////////////////////
class ImageData {
private:
    int m_width;                               ///< Ширина изображения
    int m_height;                              ///< Высота изображения
    std::vector<std::vector<Pixel>> m_pixels;  ///< Двумерный вектор пикселей

public:
    /// Конструктор изображения заданной ширины и высоты
    ImageData(int width, int height)
        : m_width(width), m_height(height), m_pixels(height, std::vector<Pixel>(width)) {
    }
    /// Получить ширину изображения
    int GetWidth() const {
        return m_width;
    }
    /// Получить высоту изображения
    int GetHeight() const {
        return m_height;
    }

    /// Получить ссылку на пиксель по координатам
    Pixel& pixel(int x, int y) {
        return m_pixels[y][x];
    }

    /// Получить константную ссылку на пиксель по координатам
    const Pixel& pixel(int x, int y) const {
        return m_pixels[y][x];
    }
};
