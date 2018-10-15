﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.000000.0
#pragma once
#include "winrt/impl/Component.Edge.1.h"
namespace winrt::Component::Edge
{
    struct WINRT_EBO EmptyClass :
            Component::Edge::IEmptyClass
    {
        EmptyClass(std::nullptr_t) noexcept {}
        EmptyClass(construct_from_abi_t, void* ptr) noexcept : Component::Edge::IEmptyClass(construct_from_abi, ptr) {}
        };
    struct WINRT_EBO OneClass :
            Component::Edge::IOneClass
    {
        OneClass(std::nullptr_t) noexcept {}
        OneClass(construct_from_abi_t, void* ptr) noexcept : Component::Edge::IOneClass(construct_from_abi, ptr) {}
        OneClass(int32_t a);
    static void StaticMethod(int32_t a);
    };
    struct StaticClass
    {
        StaticClass() = delete;
        static void StaticMethod();
};
    struct WINRT_EBO ThreeClass :
            Component::Edge::IThreeClass
    {
        ThreeClass(std::nullptr_t) noexcept {}
        ThreeClass(construct_from_abi_t, void* ptr) noexcept : Component::Edge::IThreeClass(construct_from_abi, ptr) {}
        ThreeClass(int32_t a, int32_t b, int32_t c);
    static void StaticMethod(int32_t a, int32_t b, int32_t c);
    };
    struct WINRT_EBO TwoClass :
            Component::Edge::ITwoClass
    {
        TwoClass(std::nullptr_t) noexcept {}
        TwoClass(construct_from_abi_t, void* ptr) noexcept : Component::Edge::ITwoClass(construct_from_abi, ptr) {}
        TwoClass(int32_t a, int32_t b);
    static void StaticMethod(int32_t a, int32_t b);
    };
    struct WINRT_EBO ZeroClass :
            Component::Edge::IZeroClass
    {
        ZeroClass(std::nullptr_t) noexcept {}
        ZeroClass(construct_from_abi_t, void* ptr) noexcept : Component::Edge::IZeroClass(construct_from_abi, ptr) {}
        ZeroClass();
    static void StaticMethod();
    };
}
