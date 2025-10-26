#ifndef PASTEL_WINDOWSPECIFICATION_HPP
#define PASTEL_WINDOWSPECIFICATION_HPP

namespace Pastel
{
    /**
     * @struct WindowSpecification
     *
     * @brief 윈도우 사양을 정의합니다.
     */
    struct WindowSpecification final
    {
        int x = 0;
        int y = 0;
        int width = 800;
        int height = 600;
        const char *title = "Pastel Window";
        bool resizable = true;
        bool fullscreen = false;
        bool vsync = true;
        bool decorated = true;
    };
}

#endif