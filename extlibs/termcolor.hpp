//!
//! termcolor
//! ~~~~~~~~~
//!
//! termcolor is a header-only c++ library for printing colored messages
//! to the terminal. Written just for fun with a help of the Force.
//!
//! :copyright: (c) 2013 by Ihor Kalnytskyi
//! :license: BSD, see LICENSE for details
//!

#ifndef COLOR_HPP
#define COLOR_HPP

#include <iostream>

// Detect target's platform and set some macros in order to wrap platform
// specific code this library depends on.
#if defined(_WIN32) || defined(_WIN64)
#   define COLOR_TARGET_WINDOWS
#elif defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
#   define COLOR_TARGET_POSIX
#endif

// If implementation has not been explicitly set, try to choose one based on
// target platform.
#if !defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES) && !defined(COLOR_USE_WINDOWS_API) && !defined(COLOR_USE_NOOP)
#   if defined(COLOR_TARGET_POSIX)
#       define COLOR_USE_ANSI_ESCAPE_SEQUENCES
#       define COLOR_AUTODETECTED_IMPLEMENTATION
#   elif defined(COLOR_TARGET_WINDOWS)
#       define COLOR_USE_WINDOWS_API
#       define COLOR_AUTODETECTED_IMPLEMENTATION
#   endif
#endif

// These headers provide isatty()/fileno() functions, which are used for
// testing whether a standard stream refers to the terminal.
#if defined(COLOR_TARGET_POSIX)
#   include <unistd.h>
#elif defined(COLOR_TARGET_WINDOWS)
#   include <io.h>
#   include <windows.h>
#endif


namespace color
{
    // Forward declaration of the `_internal` namespace.
    // All comments are below.
    namespace _internal
    {
        inline int colorize_index();
        inline FILE* get_standard_stream(const std::ostream& stream);
        inline FILE* get_standard_stream(const std::wostream& stream);
        template <typename CharT>
        bool is_colorized(std::basic_ostream<CharT>& stream);
        template <typename CharT>
        bool is_atty(const std::basic_ostream<CharT>& stream);

    #if defined(COLOR_TARGET_WINDOWS)
        template <typename CharT>
        void win_change_attributes(std::basic_ostream<CharT>& stream, int foreground, int background = -1);
    #endif
    }

    template <typename CharT>
    std::basic_ostream<CharT>& reset(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[00m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1, -1);
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& dark_grey(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[30m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                0   // grey (black)
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& dark_red(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[31m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                FOREGROUND_RED
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& dark_green(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[32m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                FOREGROUND_GREEN
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& dark_yellow(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[33m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                FOREGROUND_GREEN | FOREGROUND_RED
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& dark_blue(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[34m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                FOREGROUND_BLUE
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& dark_magenta(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[35m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                FOREGROUND_BLUE | FOREGROUND_RED
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& dark_cyan(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[36m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                FOREGROUND_BLUE | FOREGROUND_GREEN
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& dark_white(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[37m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED
            );
        #endif
        }
        return stream;
    }


    template <typename CharT>
    std::basic_ostream<CharT>& grey(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[90m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                0 | FOREGROUND_INTENSITY   // grey (black)
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& red(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[91m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                FOREGROUND_RED | FOREGROUND_INTENSITY
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& green(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[92m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                FOREGROUND_GREEN | FOREGROUND_INTENSITY
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& yellow(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[93m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& blue(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[94m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                FOREGROUND_BLUE | FOREGROUND_INTENSITY
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& magenta(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[95m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& cyan(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[96m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& white(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[97m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream,
                FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY
            );
        #endif
        }
        return stream;
    }


    template <typename CharT>
    std::basic_ostream<CharT>& bg_dark_grey(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[40m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                0   // grey (black)
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& bg_dark_red(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[41m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                BACKGROUND_RED
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& bg_dark_green(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[42m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                BACKGROUND_GREEN
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& bg_dark_yellow(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[43m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                BACKGROUND_GREEN | BACKGROUND_RED
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& bg_dark_blue(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[44m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                BACKGROUND_BLUE
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& bg_dark_magenta(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[45m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                BACKGROUND_BLUE | BACKGROUND_RED
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& bg_dark_cyan(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[46m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                BACKGROUND_GREEN | BACKGROUND_BLUE
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& bg_dark_white(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[47m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED
            );
        #endif
        }

        return stream;
    }


    template <typename CharT>
    std::basic_ostream<CharT>& bg_grey(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[100m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                0 | BACKGROUND_INTENSITY   // grey (black)
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& bg_red(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[101m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                BACKGROUND_RED | BACKGROUND_INTENSITY
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& bg_green(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[102m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                BACKGROUND_GREEN | BACKGROUND_INTENSITY
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& bg_yellow(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[103m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& bg_blue(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[104m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                BACKGROUND_BLUE | BACKGROUND_INTENSITY
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& bg_magenta(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[105m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                BACKGROUND_BLUE | BACKGROUND_RED | BACKGROUND_INTENSITY
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& bg_cyan(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[106m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY
            );
        #endif
        }
        return stream;
    }

    template <typename CharT>
    std::basic_ostream<CharT>& bg_white(std::basic_ostream<CharT>& stream)
    {
        if (_internal::is_colorized(stream))
        {
        #if defined(COLOR_USE_ANSI_ESCAPE_SEQUENCES)
            stream << "\033[107m";
        #elif defined(COLOR_USE_WINDOWS_API)
            _internal::win_change_attributes(stream, -1,
                BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED | BACKGROUND_INTENSITY
            );
        #endif
        }

        return stream;
    }



    //! Since C++ hasn't a way to hide something in the header from
    //! the outer access, I have to introduce this namespace which
    //! is used for internal purpose and should't be access from
    //! the user code.
    namespace _internal
    {
        // An index to be used to access a private storage of I/O streams. See
        // colorize / nocolorize I/O manipulators for details. Due to the fact
        // that static variables ain't shared between translation units, inline
        // function with local static variable is used to do the trick and share
        // the variable value between translation units.
        inline int colorize_index()
        {
            static int colorize_index = std::ios_base::xalloc();
            return colorize_index;
        }

        //! Since C++ hasn't a true way to extract stream handler
        //! from the a given `std::ostream` object, I have to write
        //! this kind of hack.
        inline
        FILE* get_standard_stream(const std::ostream& stream)
        {
            if (&stream == &std::cout)
                return stdout;
            else if (&stream == &std::cerr || &stream == &std::clog)
                return stderr;

            return nullptr;
        }

        //! Since C++ hasn't a true way to extract stream handler
        //! from the a given `std::wostream` object, I have to write
        //! this kind of hack.
        inline
        FILE* get_standard_stream(const std::wostream& stream)
        {
            if (&stream == &std::wcout)
                return stdout;
            else if (&stream == &std::wcerr || &stream == &std::wclog)
                return stderr;

            return nullptr;
        }

        // Say whether a given stream should be colorized or not. It's always
        // true for ATTY streams and may be true for streams marked with
        // colorize flag.
        template <typename CharT>
        bool is_colorized(std::basic_ostream<CharT>& stream)
        {
            return is_atty(stream) || static_cast<bool>(stream.iword(colorize_index()));
        }

        //! Test whether a given `std::ostream` object refers to
        //! a terminal.
        template <typename CharT>
        bool is_atty(const std::basic_ostream<CharT>& stream)
        {
            FILE* std_stream = get_standard_stream(stream);

            // Unfortunately, fileno() ends with segmentation fault
            // if invalid file descriptor is passed. So we need to
            // handle this case gracefully and assume it's not a tty
            // if standard stream is not detected, and 0 is returned.
            if (!std_stream)
                return false;

        #if defined(COLOR_TARGET_POSIX)
            return ::isatty(fileno(std_stream));
        #elif defined(COLOR_TARGET_WINDOWS)
            return ::_isatty(_fileno(std_stream));
        #else
            return false;
        #endif
        }

    #if defined(COLOR_TARGET_WINDOWS)
    
        //! same hack as used in get_standard_stream function, but for Windows with `std::ostream`
        inline HANDLE get_terminal_handle(std::ostream& stream)
        {
            if (&stream == &std::cout)
                return GetStdHandle(STD_OUTPUT_HANDLE);
            else if (&stream == &std::cerr || &stream == &std::clog)
                return GetStdHandle(STD_ERROR_HANDLE);
            return nullptr;
        }
        
        //! same hack as used in get_standard_stream function, but for Windows with `std::wostream`
        inline HANDLE get_terminal_handle(std::wostream& stream)
        {
            if (&stream == &std::wcout)
                return GetStdHandle(STD_OUTPUT_HANDLE);
            else if (&stream == &std::wcerr || &stream == &std::wclog)
                return GetStdHandle(STD_ERROR_HANDLE);
            return nullptr;
        }
        
        //! Change Windows Terminal colors attribute. If some
        //! parameter is `-1` then attribute won't changed.
        template <typename CharT>
        void win_change_attributes(std::basic_ostream<CharT>& stream, int foreground, int background)
        {
            // yeah, i know.. it's ugly, it's windows.
            static WORD defaultAttributes = 0;

            // Windows doesn't have ANSI escape sequences and so we use special
            // API to change Terminal output color. That means we can't
            // manipulate colors by means of "std::stringstream" and hence
            // should do nothing in this case.
            if (!_internal::is_atty(stream))
                return;

            // get terminal handle
            HANDLE hTerminal = INVALID_HANDLE_VALUE;
            hTerminal = get_terminal_handle(stream);

            // save default terminal attributes if it unsaved
            if (!defaultAttributes)
            {
                CONSOLE_SCREEN_BUFFER_INFO info;
                if (!GetConsoleScreenBufferInfo(hTerminal, &info))
                    return;
                defaultAttributes = info.wAttributes;
            }

            // restore all default settings
            if (foreground == -1 && background == -1)
            {
                SetConsoleTextAttribute(hTerminal, defaultAttributes);
                return;
            }

            // get current settings
            CONSOLE_SCREEN_BUFFER_INFO info;
            if (!GetConsoleScreenBufferInfo(hTerminal, &info))
                return;

            if (foreground != -1)
            {
                info.wAttributes &= ~(info.wAttributes & 0x0F);
                info.wAttributes |= static_cast<WORD>(foreground);
            }

            if (background != -1)
            {
                info.wAttributes &= ~(info.wAttributes & 0xF0);
                info.wAttributes |= static_cast<WORD>(background);
            }

            SetConsoleTextAttribute(hTerminal, info.wAttributes);
        }
    #endif // COLOR_TARGET_WINDOWS

    } // namespace _internal

} // namespace color


#undef COLOR_TARGET_POSIX
#undef COLOR_TARGET_WINDOWS

#if defined(COLOR_AUTODETECTED_IMPLEMENTATION)
#   undef COLOR_USE_ANSI_ESCAPE_SEQUENCES
#   undef COLOR_USE_WINDOWS_API
#endif

#endif // COLOR_HPP
