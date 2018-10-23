#pragma once
#include "Component.Fast.SlowClass.g.h"

namespace winrt::Component::Fast::implementation
{
    struct SlowClass : SlowClassT<SlowClass>
    {
        SlowClass() = default;

        hstring First(){return m_first;}
        hstring Second(){return m_second;}
        hstring Third(){return m_third;}
        hstring Fourth(){return m_fourth;}
        hstring NotExclusive(){return m_not_exclusive;}
        static void StaticMethod() {};

        hstring m_first{L"First"};
        hstring m_second{L"Second"};
        hstring m_third{L"Third"};
        hstring m_fourth{L"Fourth"};
        hstring m_not_exclusive{L"NotExclusive"};
    };
}
namespace winrt::Component::Fast::factory_implementation
{
    struct SlowClass : SlowClassT<SlowClass, implementation::SlowClass>
    {
    };
}
