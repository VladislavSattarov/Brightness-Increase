#include <QImage>
#include <cassert>

#include "QtImageLoader.h"
#include "ImageData.h"

//-----------------------------------------------------------------------------
/**
    Загружает изображение из указанного файла.
    \param path Путь к файлу изображения.
    \return Объект ImageData при успешной загрузке, иначе std::nullopt.
*/
//---
std::optional<ImageData> QtImageLoader::Load(const std::string& path) const {
    QImage image(QString::fromStdString(path));
    if (image.isNull()) {
        assert(!image.isNull() && "Failed to load file");
        return std::nullopt;
    }
    image = image.convertToFormat(QImage::Format_RGB888);
    ImageData data(image.width(), image.height());
    for (int y = 0; y < image.height(); ++y) {
        const uchar* scan = image.scanLine(y);
        for (int x = 0; x < image.width(); ++x) {
            data.pixel(x, y).m_red = scan[x * properties::c_rgbNumber + 0];
            data.pixel(x, y).m_green = scan[x * properties::c_rgbNumber + 1];
            data.pixel(x, y).m_blue = scan[x * properties::c_rgbNumber + 2];
        }
    }
    return data;
}
