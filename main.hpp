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

        return rand() % 99;
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        /***************************************************
         * Code your program here
         ***************************************************/

        int med = (rdnum1 + rdnum2 + rdnum3)/3;
        int returnvar1 = med;
        int returnvar2 = med;

        while (true){
                returnvar1++;
                returnvar2--;
                if ((returnvar1 == rdnum1)||(returnvar1 == rdnum2)||(returnvar1 == rdnum3)){
                        return returnvar1;
                }
                if ((returnvar2 == rdnum1)||(returnvar2 == rdnum2)||(returnvar2 == rdnum3)){
                        return returnvar2;
                }
        }

}