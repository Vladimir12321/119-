#ifndef _ADM_H
#define _ADM_H
#include "torgzal.h"
#include "kassa.h"
#include "kassir.h"
#include <string>
using namespace std;

class adm {
public: 
    kassa kas;
    kassir kasi;
    torgzal zal;

};

#endif //_ADM_H