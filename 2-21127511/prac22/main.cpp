#include "2.2.h"

// 21127511 - Nguyen Quoc Huy

int main()
{
    Monomial Mono;
    Monomial Sec = Monomial(3, 3);
    Monomial Res;
    
    Mono.input();
    Mono.output();
    Mono.getCoef();
    Mono.getCoef();
    Mono.setCoef();
    Mono.setExpo();
    Mono.output();
    cout << "Result: " << Mono.evaluate(1.5) << endl;
    cout << "Derive: ";
    Mono = Mono.derive();
    Mono.output();

    cout << "Multiple:\n";
    Res = Mono.mul(Sec);
    Res.output();
    return 0;
}