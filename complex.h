#ifndef LABA_1_COMPLEX_H
#define LABA_1_COMPLEX_H
struct complex {
    float re;
    float im;

    void define(void);
};
void addition (float a1, float a2, float b1, float b2);
void subtraction (float a1, float a2, float b1, float b2);
void multiplication (float a1, float a2, float b1, float b2);
void division (float a1, float a2, float b1, float b2);
#endif //LABA_1_COMPLEX_H
