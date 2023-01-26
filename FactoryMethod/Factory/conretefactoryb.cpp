#include "conretefactoryb.h"
#include "../Product/concreteproductb.h"

ConreteFactoryB::ConreteFactoryB()
{

}

Product *ConreteFactoryB::createProduct()
{
    return new ConcreteProductB();
}
