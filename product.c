#include "headers/product.h"
#include <stdlib.h>
#include "string.h"


Product* create_product(char* name, char* category, double quantity, char* expire_date)
{
    Product* product = malloc(sizeof(Product));
    if (product == NULL){
        return NULL;
    }
    product->name = malloc(sizeof(char) * (strlen(name) + 1));
    product->category = malloc(sizeof(char) * (strlen(category) + 1));
    product->expire_date = malloc(sizeof(char) * (strlen(expire_date) + 1));

    if (product->name == NULL || product->category == NULL || product->expire_date == NULL){
        return NULL;
    }

    strcpy(product->name, name);
    strcpy(product->category, category);
    strcpy(product->expire_date, expire_date);

    product->quantity = quantity;

    return product;
}

void destroy_product(Product* product){
    if (product == NULL){
        return;
    }
    free(product->name);
    free(product->category);
    free(product->expire_date);
    free(product);
}

Product* copy_product(Product* product){
    if (product == NULL){
        return NULL;
    }
    Product* product_copy = create_product(product->name, product->category, product->quantity, product->expire_date);
    return product_copy;
}

