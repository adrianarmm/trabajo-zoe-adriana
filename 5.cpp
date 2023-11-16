#include <iostream>
#include <vector>
#include <map>
#include <set>

int main()
{
    std::vector<int> numeros;
    numeros.push_back(1);
    numeros.push_back(2);
    numeros.push_back(3);
    numeros.push_back(4);
    numeros.push_back(5);

    std::cout << "vector: ";
    for (int num : numeros)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    edad["Maria"] = 30;
    edad.erase("Juan");

    std::cout << "map:" << std::endl;
    for (const auto &persona : edad)
    {
        std::cout << persona.first << " " << persona.second << std::endl;
    }
    std::cout << std::endl;

    std::set<int> conjunto;
    conjunto.insert(1);
    conjunto.insert(2);
    conjunto.insert(3);
    conjunto.insert(4);
    conjunto.insert(5);

    std::cout << "set:" << std::endl;
    for (int num : conjunto)
    {
        std::cout << num << std::endl;
    }
    std::cout << std::endl;

    return 0;
}