#ifndef CONRETEFACTORYA_H
#define CONRETEFACTORYA_H

#include "factory.h"

class ConreteFactoryA : public Factory
{
public:
    ConreteFactoryA();

    Product* createProduct();
};

#endif // CONRETEFACTORYA_H
