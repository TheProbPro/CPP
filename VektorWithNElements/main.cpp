#include <iostream>
#include "Vector.h"


int main()
{
    //Test af hele programmet
    std::cout << "test start: " << std::endl;
    std::cout << "test af constructor og copyconstructor: " << std::endl;
    Vector v1(5);
    Vector v2(3);
    Vector v3(3);
    Vector v4(v3);
    std::cout << "constructor med 5 elementer: " << v1 << std::endl;
    std::cout << "constructor med 3 elementer: " << v2 << std::endl;
    std::cout << "constructor med 3 elementer: " << v3 << std::endl;
    std::cout << "copy constructor: " << v4 << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    //Test af lig med operatorer og ikke lig med:
    //nye værdier til vektorerne:
    v1[0] = 1;
    v1[1] = 2;
    v1[2] = 3;
    v1[3] = 4;
    v1[4] = 5;

    v2[0] = 1;
    v2[1] = 2;
    v2[2] = 3;

    v3[0] = 5;
    v3[1] = 1;
    v3[2] = 6;
    std::cout << "v1 med nye vaerdier: " << v1 << std::endl;
    std::cout << "v2 med nye vaerdier: " << v2 << std::endl;
    std::cout << "v3 med nye vaerdier: " << v3 << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    // == operatoren og != operatoren
    std::cout << "== operatoren mellem v2 og v3: " << (v2 == v3) << std::endl;
    std::cout << "!= operatoren mellem v2 og v3: " << (v2 != v3) << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    // tester = operatoren
    std::cout << "= operatoren med v4 og v3: " << (v4 = v3) << std::endl;
    std::cout << "v3= " << v3 << "v4= " << v4 << std::endl;
    std::cout << "test af = operatoren på to vectorer der ikke er samme stoerelse: " << std::endl;
    std::cout << "= operatoren med v1 og v2: " << (v2 = v1) << std::endl;
    std::cout << "v1= " << v1 << "v2= " << v2 << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    // test af + og - operatoren
    std::cout << "+ operatoren mellem v1 og v2 = " << (v1 + v2) << std::endl;
    std::cout << "- operatoren mellem v3 og v4 = " << (v3 - v4) << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    //test af += og -=
    std::cout << "+= operatoren mellem v1 og v2 = " << (v1 += v2) << std::endl;
    std::cout << "-= operatoren mellem v3 og v4 = " << (v3 -= v4) << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    //Test af Dot product
    std::cout << "v1 = " << v1 << " v2 = " << v2 << " v3 = " << v3 << " v4 = " << v4 << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Test af dot product mellem v1 og v2: " << dot(v1,v2) << std::endl;
    std::cout << "Test af dot product mellem v3 og v4: " << dot(v3,v4) << std::endl;


    //Prebens test virker:
    /*
    Vector a(3);
    {
    Vector b(2);
    b[0] = 1;
    b[1] = 2;
    Vector a;
    a = b;
    }
    Vector c(3);
    c[0] = 0;
    c[1] = 0;
    c[2] = 0;
    std :: cout << a << std :: endl ;
    std :: cout << " Finish " << std :: endl ;
    */
    return 0;
}
