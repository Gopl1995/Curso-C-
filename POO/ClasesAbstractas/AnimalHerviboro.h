#include <iostream>
#include "Animal.h"
using namespace std;

class AnimalHerviboro : public Animal{
    public:
        void alimentarse(){
            cout<<"El animal herviboro se alimenta de hierbas"<<endl;
        }
};
