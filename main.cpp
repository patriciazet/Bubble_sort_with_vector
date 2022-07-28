/*Wczytaj od uzytkownika liczby do wektora. Zakończ wczytywanie gdy użytkownik poda 0.
Wypisz sumę wszystkich elementów.
Posortuj ten wektor (bubble sort) i go wypisz.*/

#include <iostream>
#include<vector>

//implementation of bubble sort function on vector
template<typename T>
void bubbleSort(std::vector<T>& vec)
{
    for (size_t i = 0; i < vec.size() - 1; ++i)
    {
        for (size_t j = 0; j < vec.size() - 1; ++j)
        {
            if (vec.at(j) > vec.at(j + 1)) // optionally vec[j] > vec[j +1]
            {
                //changing places
                std::swap(vec.at(j), vec.at(j + 1)); 
               // T tmp = vec.at(j);
                //vec.at(j) = vec.at(j + 1);
                //vec.at(j + 1) = tmp;

            }
        }
    }

}

template<typename T>
void printVector(const std::vector<T>& vec){
    for(size_t i = 0; i < vec.size() - 1; ++i)
    {
        std::cout << "[" << i << "] = "<< vec.at(i) << ";\n ";
    }
    
}


int main()
{
    std::vector<int> ints;

    int input = 0;

    do
    {
        std::cout << "Please enter a number: "; 
        std::cin >> input;

        ints.push_back(input);

    } while (input != 0);

    int sum = 0;

    for (int i = 0; i < ints.size(); ++i)
    {
        sum += ints[i];
    }

    std::cout << "Number of numbers in vector: " << sum << std::endl;

    bubbleSort(ints);
    printVector(ints); // nie trzeba podawać typu w nawiasach trójkątnych // szablon automatycznie generuje się dla vaktora intów
}

