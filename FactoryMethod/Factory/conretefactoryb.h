#ifndef CONRETEFACTORYB_H
#define CONRETEFACTORYB_H

#include "factory.h"

class ConreteFactoryB : public Factory
{
public:
    ConreteFactoryB();

    Product* createProduct();
};

#endif // CONRETEFACTORYB_H
