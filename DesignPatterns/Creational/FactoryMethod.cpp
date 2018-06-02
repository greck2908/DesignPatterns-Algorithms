#include "./../../Include/Common.h"
#include <string>

using namespace std;
// -----------------------------------------------
// Products of the factory
// -----------------------------------------------
class Knife {
    public: 
        inline void sharpen() {
             cout << "Sharpening" << endl;
        }
        inline void polish() {
             cout << "Polishing" << endl;
        }
        inline void package() {
             cout << "Packaging" << endl;
        }

        virtual void design() = 0;
};

// Concrete products 
// -----------------------------------------------
class BudgetChefsKnife : public Knife {
    public:
    void design() {
        cout << "Designing budget chefs knife" << endl;
    }
};

class BudgetSteakKnife : public Knife {
    public:
    void design() {
        cout << "Designing budget steak knife" << endl;
    }
};


class LuxuryChefsKnife : public Knife {
    public:
    void design() {
        cout << "Designing celebrity chefs knife" << endl;
    }
};

class LuxuryBreadKnife : public Knife {
    public:
    void design() {
        cout << "Designing premium bread knife" << endl;
    }
};
// -----------------------------------------------
// Factories
// -----------------------------------------------
class KnifeFactory {
    public:

    Knife *orderKnife(string knifeType){
        Knife *knife;
        knife = createKnife(knifeType);

        knife->sharpen();
        knife->polish();
        knife->package();

        return knife;
    }

    // The factory method
    virtual Knife *createKnife(string knifeType) = 0;
};

// Concrete creators 
// -----------------------------------------------
class BudgetKnifeFactory: public KnifeFactory {

    Knife *createKnife(string knifeType) {
        if(knifeType.compare("steak"))
            return new BudgetSteakKnife();
        else if(knifeType.compare("chefs"))
            return new BudgetChefsKnife();
    }
};

class LuxuryKnifeFactory: public KnifeFactory {

    Knife *createKnife(string knifeType) {
        if(knifeType.compare("bread"))
            return new LuxuryBreadKnife();
        else if(knifeType.compare("chefs"))
            return new LuxuryChefsKnife();
    }
};

// -----------------------------------------------
void testFactoryMethod(){

}