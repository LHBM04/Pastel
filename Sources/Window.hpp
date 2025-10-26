#ifndef PASTEL_WINDOW_HPP
#define PASTEL_WINDOW_HPP

#include "WindowSpecification.hpp"

struct GLFWwindow;

namespace Pastel
{
    /**
     * @class Window
     *
     * @brief 애플리케이션 내 윈도우를 정의합니다.
     */
    class Window final
    {
    public:
        /**
         * @brief 생성자.
         *
         * @param specification_ 생성할 윈도우 사양.
         */
        explicit Window(const WindowSpecification &specification_);

        /**
         * @brief 소멸자.
         */
        ~Window();

        /**
         * @brief 네이티브 윈도우 핸들을 반환합니다.
         *
         * @return GLFWindow* 네이티브 윈도우 핸들.
         */
        inline const GLFWwindow *GetNativeWindow() const noexcept;

        /**
         * @brief 윈도우 사양을 반환합니다.
         *
         * @return const WindowSpecification& 윈도우 사양에 대한 상수 참조.
         */
        inline const WindowSpecification &GetSpecification() const noexcept;

    private:
        /**
         * @brief 해당 윈도우의 네이티브 핸들.
         */
        GLFWwindow *window = nullptr;

        /**
         * @brief 해당 윈도우의 사양.
         */
        WindowSpecification specification;
    };

    inline const GLFWwindow *Window::GetNativeWindow() const noexcept
    {
        return window;
    }

    inline const WindowSpecification &Window::GetSpecification() const noexcept
    {
        return specification;
    }
}

#endif