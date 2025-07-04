#pragma once

#include "IImageSaver.h"

////////////////////////////////////////////////////////////////////////////////
//
/// Сохранение изображения в файл с использованием Qt.
/**
    Реализация интерфейса IImageSaver. Преобразует ImageData в QImage и сохраняет его.
 */
////////////////////////////////////////////////////////////////////////////////
class QtImageSaver : public IImageSaver {
public:
    /// Сохраняет изображение в файл
    virtual bool Save(const ImageData& image, const std::string& path) const override;
};
