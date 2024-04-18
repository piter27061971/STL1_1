// ConsoleApplication39.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
class Simvol
{
private:
    char ch;
    int kol_ch;
public:
    Simvol(char ch1) :ch{ ch1 }, kol_ch{1} {}
    void inc_kol_ch()
    {
        kol_ch++;
    }
    char get_ch()
    {
        return ch;
    }
    int get_kol_ch()
    {
        return kol_ch;
    }
};
std::vector < Simvol > Str_simvolov;
std::string Stroka;

int main()
{
    setlocale(LC_ALL, "Russian");
   std::cout << "Введите строку, для подсчета символов!\n";
   
   getline(std::cin, Stroka);
  
    auto iter1{ Str_simvolov.begin() };
    for (int i = 0; i < Stroka.size(); i++)
    {
        iter1 = Str_simvolov.begin();
        while (iter1!= Str_simvolov.end())
        {
            if (iter1->get_ch() == Stroka[i])
            {
                iter1->inc_kol_ch();
                break;
            }
            iter1++;
        }
        if (iter1 == Str_simvolov.end())
        {
            //Simvol Vrem(Stroka[i]);
           
            //Str_simvolov.push_back(Vrem);
            Str_simvolov.push_back(Simvol(Stroka[i]));
        }
    }

   
   
    std::sort(Str_simvolov.begin(), Str_simvolov.end(), [](Simvol& left, Simvol& right) {return left.get_kol_ch() > right.get_kol_ch(); });
    

    iter1 = Str_simvolov.begin();
    while (iter1 != Str_simvolov.end())
    {
        std::cout << (iter1->get_ch()) << "   " << (iter1->get_kol_ch()) <<std::endl;
        iter1++;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
