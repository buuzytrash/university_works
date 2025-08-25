#pragma once

#include "task1.h"
#include "utils.h"
#include <algorithm>

class Card
{
public:
    int value;
    std::string name;

    Card(int value, const std::string &name) : value(value), name(name) {}
};

class Player
{
public:
    long long p;
    long long c;
    long long d;

    std::vector<long long> cards;

    Player(long long p) : p(p)
    {
        do
        {
            c = generate_coprime(p - 1);
        } while (std::gcd(c, p - 1) != 1);

        d = mod_inverse(c, p - 1);
        if (d == -1)
        {
            std::cerr << "Ошибка: не удалось найти обратный элемент для c." << std::endl;
            exit(1);
        }
    }

    void receicve_card(long long card)
    {
        cards.push_back(card);
    }

    long long send_card(long long card)
    {
        return power_modulo(card, c, p);
    }

    long long decrypt_card(long long card)
    {
        return (power_modulo(card, d, p));
    }
};

void deal_cards(std::vector<Player> &players, std::vector<Card> deck);