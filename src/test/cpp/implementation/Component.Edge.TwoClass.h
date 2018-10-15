#pragma once
#include "Component.Edge.TwoClass.g.h"

namespace winrt::Component::Edge::implementation
{
    struct TwoClass : TwoClassT<TwoClass>
    {
        TwoClass() = default;
        TwoClass(int32_t a, int32_t b) { m_first = a; m_second = b; }
        void Method(int32_t a, int32_t b) { m_first = a; m_second = b; }
        int32_t First() { return m_first;}
        int32_t Second() { return m_second;}
        static void StaticMethod(int32_t a, int32_t b){ m_first = a; m_second = b; }

        inline static int32_t m_first;
        inline static int32_t m_second;
    };
}
namespace winrt::Component::Edge::factory_implementation
{
    struct TwoClass : TwoClassT<TwoClass, implementation::TwoClass>
    {
    };
}
