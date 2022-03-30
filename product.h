#pragma once
#include <stdlib.h>
#include "string.h"

typedef struct
{
    char* name;
    char* category;
    double quantity;
    char* expire_date;
} Product;

Product* create_product(char* name, char* category, double quantity, char* expire_date);
void destroy_product(Product* p);
Product* copy_product(Product* p);

//char* get_name(Product* p);
//char* get_category(Product* p);
//double get_quantity(Product* p);
//char* get_expire_date(Product* p);

void to_string(Product* p, char str[]);
