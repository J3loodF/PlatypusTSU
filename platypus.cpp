#include "platypus.h"



char Platypus::get_gender() const
{
    return gender;
}
float Platypus::get_weight() const
{
    return weight;
}
size_t Platypus::get_age() const
{
    return age;
}
char Platypus::get_name() const
{
    return name;
}
bool Platypus::get_alive()const{
    return alive;
}
void Platypus::death_plat(){
    alive = 0;
}
bool Platypus::get_mutant_status()const{
    return mutant;}
void Platypus::mutate_plat(){
    mutant = 1;
    std::cout << "\n----------------\nnow he mutate and be always get older\n nothing will stop him ©John Frink\n----------------  " << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(8));
    while (get_alive() == 1){
        std::this_thread::sleep_for(std::chrono::seconds(5));
        age_me();
        std::this_thread::sleep_for(std::chrono::seconds(2));
        
    }
    
}

// punkt 2-is realizacia
Platypus::Platypus() : alive(false){
    std::cout<< "\nthis platypus not alive" <<std::endl;//uparametro konstruqtori
}

Platypus::Platypus(char Gender, float Weight, short Age, char Name)
    : gender(Gender), weight(Weight), age(Age), name(Name), alive(true), mutant(false) {}//parametriani konstruqtori

void Platypus::print(std::ostream &out) const //bejdvis funqcia
{
    out << "----------------------------\n";
    out << "Gender: " << gender << std::endl;
    out << "----------------------------\n";
    out << "Weight: " << weight << "lbs" << std::endl;
    out << "----------------------------\n";
    out << "Age: " << age << "month" << std::endl;
    out << "----------------------------\n";
    out << "Name: " << name << std::endl;
    out << "----------------------------\n";
    (alive) ? out << "Alive: YES" << std::endl : out << "Alive: NO" << std::endl;
    out << "----------------------------\n";
    (mutant == 0) ? out << "Mutant: NO" << std::endl : out << "Mutant: YES" << std::endl;
}

void Platypus::age_me(){ //asakis minijebis funqcia
    if(alive==0){
        std::cout << "The Platypus is dead!" << std::endl;
        return;
    }

    age+=1;

    int chance;
    float weight_percent;
    double death_rand;

    chance = (rand() % 100) + 1; //mutaciis albatoba
    if(chance==1 || chance==2){
        mutant = 1;
        std::cout << "oh... Homer why you feed him uranium? he mutated " << std::endl;
    }

    if(weight>=10){//pirobis tanaxmad 10 tvian ixvniskarta ver iqneba cocxali 
        std::cout << "this platypus eat a donut, homer you killed him..." << std::endl;
        alive=0;
        return;
    }

    weight_percent = weight * 10;//sikvdilis albatoba
    death_rand = (rand() % 100) + 1;
    if(weight_percent <= death_rand){
        death_plat();
        std::cout << "too old to be alive, he died..." << std::endl;

    }


}

void Platypus::fight(Platypus & other_platypus){//chxubis funqcia
    if(alive==0){
        std::cout << "dead platypus cannot fight Homer,you killed him when u try to fed him uranium, try to fed him plutonium may be he will resurrect" << std::endl;
        return;
    }
    if(gender == 'F' || gender == 'f' || (age <= 1) ||other_platypus.gender == 'F' || other_platypus.gender == 'f' || (other_platypus.age <= 1) ){
        std::cout << "u are amoral fool, they can't be pitted against each other" << std::endl; return;
    }
    if(other_platypus.get_alive()==0){
        std::cout << "he was very old and he is already Dead!" << std::endl;
    }
    std::cout << "now we are watching an amazing fight between two platypuses" << std::endl;
    double other_weight=other_platypus.get_weight();
    double fight_ratio=(weight/other_weight)*50;
    double chance = (rand()%100)+1;
    if(chance<fight_ratio){
        other_platypus.mutate_plat();
         std::cout << "ohh I put a salary on him, here you are, narrow-minded, drink a buzz. you deserve it" <<  std::endl;
    }
    else{
        mutate_plat();
         std::cout << "stupid animal.... either duck or beaver i thought you'd win, Mr.burns will kill me" <<  std::endl;
    }


}


void Platypus::eat(){
    if(alive==0){
        std::cout<< "dead platypus cannot eat normal food Homer,you killed him when u try to fed him uranium, try to fed him plutonium may be he will resurrect" << std::endl;
        return;
    }
    std::cout << "Eat it small doggy... ©Homer" << std::endl;

    
    
    for (double chance; chance <=50 ;chance = (rand()%1000)+1)
    {
     weight=(weight*chance)+weight;
    std::cout << "New weight is: " << weight << std::endl;
    break;
    }
    
   

}

void Platypus::hatch(){
    alive = true;
    mutant = false;
    age = 0;
gender = (rand()%2) ? 'M' : 'F';


std::cout << "your Platypus Gender is: " << gender << std::endl;
name = rand();
std::cout << "Platypus name: " << name << std::endl;

weight = ((rand()%100)+1)/100;
std::cout << "Platypus been created" << std::endl;



}




