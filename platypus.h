#include <iostream>
#include <thread>
#include <chrono>
// #include <ctime>
// #include <random>


    class Platypus
{
//punkt 1 - wevr monacemebi
    float weight;
    short age;
    char name,gender ;
    bool alive, mutant,hunger;

public:
    char get_gender() const;
    float get_weight() const;
    size_t get_age() const;
    char get_name() const;
    bool get_alive() const;
    bool get_mutant_status() const;
    void death_plat();//platipusis mokvla
    void mutate_plat();//platipusis mutacia
    

    // punkt 2 wevr funqciebi
    Platypus();// uparametro konstuqtori
    Platypus(char Gender, float Weight, short Age, char Name); //parametriani kostruqtori
    void print(std::ostream &out) const; //bejdvis funqcia
    void age_me(); // funqcia romelic cvlis  obieqtis asaks  
    void fight(Platypus & other_Platypus);//brdzolis funqcia
    void eat();//jamis funqcia   
    void hatch();//axalshobili funqcia




};
