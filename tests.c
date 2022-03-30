#include "headers/product.h"

#include <string.h>
#include <stdlib.h>
#include <assert.h>


void test_create_product(){
    Product* product = create_product("Milk", "Dairy", 3, "23-02-2022");
    assert(!strcmp(product->name, "Milk"));
    assert(!strcmp(product->category, "Dairy"));
    assert(!strcmp(product->expire_date, "23-02-2022"));
    assert(product->quantity == 3);

    destroy_product(product);

}

void test_copy_product(){
    Product* product = create_product("Milk", "Dairy", 3, "23-02-2022");
    Product* product_copy = copy_product(product);

    assert(product != product_copy);
    assert(product->name != product_copy->name);
    assert(product->category != product_copy->category);
    assert(product->expire_date != product_copy->expire_date);

    assert(!strcmp(product->name, product_copy->name));
    assert(!strcmp(product->category, product_copy->category));
    assert(!strcmp(product->expire_date, product_copy->expire_date));
    assert(product->quantity == product_copy->quantity);

    destroy_product(product);
    destroy_product(product_copy);
}

void test_domain(){
    test_create_product();
    test_copy_product();
}

void test_repository(){

}

void test_all(){
    test_domain();
}