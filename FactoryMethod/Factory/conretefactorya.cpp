#include "conretefactorya.h"
#include "../Product/concreteproducta.h"

ConreteFactoryA::ConreteFactoryA()
{

}

Product *ConreteFactoryA::createProduct()
{
    return new ConcreteProductA();
}
