#include "Calculator.hpp"

namespace {{ cookiecutter.repo_name }} {

    int Calculator::add(int first, int second) {
        return first + second;
    }

    int Calculator::substract(int first, int second) {
        return first - second;
    }

    int Calculator::multiply(int first, int second) {
        return first * second;
    }

    int Calculator::divide(int first, int second) {
        return first / second;
    }

}
