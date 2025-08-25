#include "task4.h"

void deal_cards(std::vector<Player> &players, std::vector<Card> deck)
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::vector<long long> encrypted_deck;

    for (auto card : deck)
    {
        long long encrypted_card = card.value;
        for (Player &player : players)
        {
            encrypted_card = player.send_card(encrypted_card);
        }
        encrypted_deck.push_back(encrypted_card);
    }

    std::shuffle(encrypted_deck.begin(), encrypted_deck.end(), gen);

    for (size_t i = 0; i < players.size(); i++)
    {
        for (auto j = 0; j < 2; j++)
        {
            int index = rand() % encrypted_deck.size();

            long long card = encrypted_deck[index];
            encrypted_deck.erase(encrypted_deck.begin() + index);
            players[i].receicve_card(card);
        }
    }

    std::cout << "Карты на столе: ";
    for (int i = 0; i < 5; i++)
    {
        int index = rand() % encrypted_deck.size();
        long long card = encrypted_deck[index];

        encrypted_deck.erase(encrypted_deck.begin() + index);
        for (auto it = players.rbegin(); it != players.rend(); ++it)
        {
            card = it->decrypt_card(card);
        }
        auto card_name = std::find_if(deck.begin(), deck.end(), [card](const Card &c)
                                      { return c.value == card; })
                             ->name;
        std::cout << card_name << "; ";
    }
    std::cout << std::endl;
}