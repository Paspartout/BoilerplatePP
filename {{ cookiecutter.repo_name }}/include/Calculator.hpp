#ifndef _CALCULATOR_HPP_
#define _CALCULATOR_HPP_

namespace {{ cookiecutter.repo_name }} {

    class Calculator {

    public:
        int add(int first, int second);
        int substract(int first, int second);
        int multiply(int first, int second);
        int divide(int first, int second);

    };

}
#endif // _CALCULATOR_HPP_