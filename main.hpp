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
        return randnum;
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        /***************************************************
         * Code your program here
         ***************************************************/

        int med = (rdnum1 + rdnum2 + rdnum3)/3;
        int i;

        rdnum1 -= med;
        rdnum2 -= med;
        rdnum3 -= med;

        if (rdnum1 < 0){
                rdnum1 *= -1;
        }
        if (rdnum2 < 0){
                rdnum2 *= -1;
        }
        if (rdnum3 < 0){
                rdnum3 *= -1;
        }

        while (true){
                i++;
                if (i == rdnum1){
                        return 1;
                }
                if (i == rdnum2){
                        return 2;
                }
                if (i == rdnum3){
                        return 3;
                }
        }

}