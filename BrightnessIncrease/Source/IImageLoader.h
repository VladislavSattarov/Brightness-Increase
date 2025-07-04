#pragma once

#include <optional>

#include "ImageData.h"

////////////////////////////////////////////////////////////////////////////////
//
/// Интерфейс для загрузки изображения.
/**
  Интерфейс IImageLoader определяет базовые методы для работы с загрузкой изображений.
 */
////////////////////////////////////////////////////////////////////////////////
class IImageLoader {
public:
    /// Виртуальный деструктор
    virtual ~IImageLoader() = default;
    /// Загружает изображение из файла
    virtual std::optional<ImageData> Load(const std::string& path) const = 0;
};
