#include "factoryclient.h"
#include "Factory/factory.h"
#include "Product/product.h"

FactoryClient::FactoryClient(Factory *concretefactory)
{
//    factory = concretefactory;
    product = concretefactory->createProduct();
}

void FactoryClient:: showButton()
{
    product->doStuff();
}
