// MathFuncsDll.h

//#ifdef MATHFUNCSDLL_EXPORTS
//#define MATHFUNCSDLL_API __declspec(dllexport) 
//#else
//#define MATHFUNCSDLL_API __declspec(dllimport) 
//#endif

#define MT4_EXPFUNC __declspec(dllexport)

namespace MathFuncs
{
    // This class is exported from the MathFuncsDll.dll
    class MyMathFuncs
    {
    public: 
        // Returns a + b
        MT4_EXPFUNC static double __stdcall Add(double a, double b); 

        // Returns a - b
        MT4_EXPFUNC static double __stdcall Subtract(double a, double b); 

        // Returns a * b
        MT4_EXPFUNC static double __stdcall Multiply(double a, double b); 

        // Returns a / b
        // Throws const std::invalid_argument& if b is 0
        MT4_EXPFUNC static double __stdcall Divide(double a, double b); 
    };
}