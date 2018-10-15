#include "pch.h"
#include "winrt/Component.Edge.h"

using namespace winrt;
using namespace Component::Edge;

TEST_CASE("EmptyClass")
{
    EmptyClass c(nullptr);
}

TEST_CASE("StaticClass")
{
    StaticClass::StaticMethod();
}

TEST_CASE("ZeroClass")
{
    ZeroClass c;
    c.Method();
    ZeroClass::StaticMethod();
}

TEST_CASE("OneClass")
{
    OneClass c(1);
    REQUIRE(c.First() == 1);
    c.Method(2);
    REQUIRE(c.First() == 2);
    OneClass::StaticMethod(3);
    REQUIRE(c.First() == 3);
}
