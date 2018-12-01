#include "Pair.h"

main()
{
    ab::Money T;
    ab::Money K;
    ab::Fractal U;
    ab::Fractal R;


    T.Read();
    K.Read();

    T.Plus(K.vRuble(), K.vCopek());
    T.Display("\tT plus K\n");
    T.Display();
    T.Minus(K.vRuble(), K.vCopek());
    T.Display("\tT minus K\n");
    T.Display();

    U.Read();
    R.Read();
    U.Plus(U.vWhole(), R.vFract());
    U.Display("\tT plus K\n");
    U.Display();
    U.Minus(U.vWhole(), R.vFract());
    U.Display("\tT minus K\n");
    U.Display();

    system("pause");
    return 0;
}
