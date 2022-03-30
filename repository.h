#pragma once

#include "headers/product.h"
#include "headers/dynamic_array.h"

typedef struct{

    DynamicArray* product_repository;

}Repository;

Repository* create_repository();

int add(Product* product);

int update(Product* product);

int remove(Product* product);

Product* search(Product* product);

void destroy_repository(Repository* repository);

