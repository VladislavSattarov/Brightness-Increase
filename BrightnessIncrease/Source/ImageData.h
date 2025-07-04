#pragma once

#include <vector>

#include "Properties.h"
#include "Pixel.h"

class ImageData {
private:
    int m_width;
    int m_height;
    std::vector<std::vector<Pixel>> m_pixels;

public:
    ImageData(int width, int height)
        : m_width(width), m_height(height), m_pixels(height, std::vector<Pixel>(width)) {
    }

    int GetWidth() const {
        return m_width;
    }
    int GetHeight() const {
        return m_height;
    }

    /// Возвращает ссылку на пиксель
    Pixel& pixel(int x, int y) {
        return m_pixels[y][x];
    }

    /// Возвращает константную ссылку на пиксель
    const Pixel& pixel(int x, int y) const {
        return m_pixels[y][x];
    }
};
