#pragma once
#include "Component.Fast.FastClass.g.h"

namespace winrt::Component::Fast::implementation
{
    struct FastClass : FastClassT<FastClass>
    {
        FastClass() = default;

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
    struct FastClass : FastClassT<FastClass, implementation::FastClass>
    {
    };
}
