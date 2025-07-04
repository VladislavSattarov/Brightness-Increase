#include <QImage>
#include <cassert>

#include "QtImageSaver.h"
#include "ImageData.h"

//-----------------------------------------------------------------------------
/**
    Сохраняет изображение в файл.
    \param image Константная ссылка на изображение для сохранения.
    \param param path Путь к выходному файлу.
    \return true если сохранение прошло успешно, иначе false.
*/
//---
bool QtImageSaver::Save(const ImageData& image, const std::string& path) const {
    QImage outImage(image.GetWidth(), image.GetHeight(), QImage::Format_RGB888);
    for (int y = 0; y < image.GetHeight(); ++y) {
        uchar* scan = outImage.scanLine(y);
        for (int x = 0; x < image.GetWidth(); ++x) {
            const Pixel& pixel = image.pixel(x, y);
            scan[x * properties::c_rgbNumber + 0] = pixel.m_red;
            scan[x * properties::c_rgbNumber + 1] = pixel.m_green;
            scan[x * properties::c_rgbNumber + 2] = pixel.m_blue;
        }
    }
    if (!outImage.save(QString::fromStdString(path))) {
        assert(false && "Falied to save image");
        return false;
    }
    return true;
}
