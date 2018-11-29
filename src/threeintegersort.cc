//
// Created by vscilab on 10/30/2018.
//

#include "threeintegersort.h"
#include <iostream>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {

                void sort(int &a, int &b, int &c) {
                    if (a > b) {
                        int tmp = a;
                        a = b;
                        b = tmp;
                    }
                    if (a > c) {
                        int tmp = a;
                        a = c;
                        c = tmp;
                    }
                    if (b > c) {
                        int tmp = b;
                        b = c;
                        c = tmp;
                    }
                    return;
                }

            }

        }

    }
}


