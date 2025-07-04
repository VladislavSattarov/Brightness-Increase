#include "BrightnessFilter.h"
#include "ImageData.h"

void BrightnessFilter::Apply(ImageData& image) const {
    for (int y = 0; y < image.GetHeight(); ++y) {
        for (int x = 0; x < image.GetWidth(); ++x) {
            Pixel& pixel = image.pixel(x, y);
            pixel.m_red = static_cast<uint8_t>(std::min(int(pixel.m_red) + m_amount, 255));
            pixel.m_green = static_cast<uint8_t>(std::min(int(pixel.m_green) + m_amount, 255));
            pixel.m_blue = static_cast<uint8_t>(std::min(int(pixel.m_blue) + m_amount, 255));
        }
    }
}
