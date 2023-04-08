#include <iostream>
#include "torgzal.h"
#include "admin.h"
#include "kassa.h"
#include "kassir.h"


using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    adm order[1] = { { "Иванов Иван Иванович", "1245", "12.30", "14.20"}};

      
    

    for (int i = 0; i < sizeof(order) / sizeof(adm); i++)
    {
        cout << "Кассиру " << order[i].kasi.fio << " раскладывать товар под номером " << order[i].zal.number << " c " << order[i].kas.point_start << " по " << order[i].kas.point_end << endl;

    }

}
