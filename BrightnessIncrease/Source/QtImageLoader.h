#pragma once

#include "IImageLoader.h"

////////////////////////////////////////////////////////////////////////////////
//
/// Загрузчик изображений с использованием Qt.
/**
    Реализация интерфейса IImageLoader. Загружает изображение и
    преобразует его в формат ImageData.
 */
////////////////////////////////////////////////////////////////////////////////
class QtImageLoader : public IImageLoader {
public:
    /// Загружает изображение из указанного файла
    virtual std::optional<ImageData> Load(const std::string& path) const override;
};
