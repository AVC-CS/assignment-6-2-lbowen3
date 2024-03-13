//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        /***************************************************
         * Code your program here
         ***************************************************/

        int randnum = rand() % 99;
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        /***************************************************
         * Code your program here
         ***************************************************/

        int med = (rdnum1 + rdnum2 + rdnum3)/3;

        rdnum1 = rdnum1 - med;
        rdnum2 = rdnum2 - med;
        rdnum3 = rdnum3 - med;
}