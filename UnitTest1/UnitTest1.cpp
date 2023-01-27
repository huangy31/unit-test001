#include "pch.h"
#include "CppUnitTest.h"
#include "mathfuncs_r.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MathTestSuite
{
    TEST_MODULE_INITIALIZE(ModuleInitialize)
    {
        Logger::WriteMessage("In Module Initialize");
    }

    TEST_MODULE_CLEANUP(ModuleCleanup)
    {
        Logger::WriteMessage("In Module Cleanup");
    }

    TEST_CLASS(MathTest)
    {
    public:
        TEST_CLASS_INITIALIZE(ClassInitialize)
        {
            Logger::WriteMessage("In Class Initialize");
        }

        TEST_CLASS_CLEANUP(ClassCleanup)
        {
            Logger::WriteMessage("In Class Cleanup");
        }

        TEST_METHOD(SquareTest)
        {
            Logger::WriteMessage("In Square test");
            double d = square(8.0);
            Assert::AreEqual(64.0, d);
        }

        TEST_METHOD(CubeTest)
        {
            Logger::WriteMessage("In Cube test");
            double d = cube(3.0);
            Assert::AreEqual(27.0, d);
        }
    };

    TEST_CLASS(MathIntegrationTest)
    {
    public:

        TEST_METHOD(AdditionTest)
        {
            double d = square(8.0);
            double d1 = cube(3.0);
            Logger::WriteMessage("In Integration test");
            Assert::AreEqual(91.0, d + d1);
        }
    };
}