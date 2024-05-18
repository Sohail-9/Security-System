#include <iostream>


// using namespace std;

class Security
{
    private: 
    void company(){
        std::cout<<"\n\n"<<std::endl;
        std::cout<<"######  ##      ######  ##   ##   ######  ######  ##     ##\n";
        std::cout<<"##      ##      ##  ##  ##   ##      ##   ##      ## ##  ##\n";
        std::cout<<"##      ##      ##  ##  ##   ##     ##    ######  ##  ## ##\n";
        std::cout<<"##      ##      ##  ##  ##   ##   ##      ##      ##   ####\n";
        std::cout<<"######  ######  ######  #######  ######   ######  ##     ##\n";
        std::cout<<"\n\n\n"<<std::endl;
    }
public:
    void starter()
    {
        company();
        std::cout << "==============================================\n";
        std::cout << "==============================================\n";
        std::cout << "===                                        ===\n";
        std::cout << "===        Welcome To Security System      ===\n";
        std::cout << "===                                        ===\n";
        std::cout << "==============================================\n";
        std::cout << "==============================================\n"<<std::endl;;
    }


     void complete()
    {
        
        std::cout << "==============================================\n";
        std::cout << "==============================================\n";
        std::cout << "===                                        ===\n";
        std::cout << "===  Thanks for Using our Security System  ===\n";
        std::cout << "===                                        ===\n";
        std::cout << "==============================================\n";
        std::cout << "==============================================\n"<<std::endl;;
    }

    
};

int main()
{   Security security;
    security.starter();
    return 0;
}