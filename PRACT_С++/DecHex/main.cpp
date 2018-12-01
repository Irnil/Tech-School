#include "DecHex.h"

int main()
{
		ab::Hex T;
		ab::Hex K;

		ab::Dec U;
		ab::Dec R;

		T.Read();
		K.Read();

		T.Print("Hex.T + Hex.K=");
		T.HexPlus(K);

		//12ffe
		//21fe
		//8702
		U.Read();
		T.Print("Hex.T + Dec.U=");
		T.DecPlus(U);
		R.Read();

		U.Print("Dec.U + Dec.R=");
		U.DecPlus(R);
		U.Print("Dec.U + Hex.T=");
		U.HexPlus(T);
		system("pause");
		return 0;
}
