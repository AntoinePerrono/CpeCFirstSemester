#include <stdio.h>
#include "operator.h"

float somme(float a, float b) {
    return a + b;
}

float diff(float a, float b) {
    return a - b;
}

float produit(float a, float b) {
    return a * b;
}

float quotient(float a, float b) {
    return a / b;
}

int modulo(int a, int b) {
    return a % b;
}

float andOperation(float a, float b) {
    return a && b;
}

float orOperation(float a, float b) {
    return a || b;
}

int negation(int a) {
    return ~a;
}