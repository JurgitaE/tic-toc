#include <iostream>
#include <vector>

#include "functions.hpp"

int main() {
    std::vector<std::string> cells = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    std::string player = "first";
    int counter = 0;
    int cell;

    display_board(cells);

    while (counter < 9 && !(cells[0] == cells[1] && cells[1] == cells[2]) && !(cells[3] == cells[4] && cells[4] == cells[5]) && !(cells[6] == cells[7] && cells[7] == cells[8]) && !(cells[0] == cells[3] && cells[3] == cells[6]) && !(cells[1] == cells[4] && cells[4] == cells[7]) && !(cells[2] == cells[5] && cells[5] == cells[8]) && !(cells[0] == cells[4] && cells[4] == cells[8]) && !(cells[2] == cells[4] && cells[4] == cells[6])) {
        std::cout << player << " player, please select a cell!\n";
        std::cin >> cell;

        cells[cell - 1] = player == "first" ? "X" : "O";
        // repaint the board
        display_board(cells);

        // switch players
        player = player == "first" ? "second" : "first";
        // count turns
        counter++;
    }
    if ((cells[0] == cells[1] && cells[1] == cells[2]) || (cells[3] == cells[4] && cells[4] == cells[5]) || (cells[6] == cells[7] && cells[7] == cells[8]) || (cells[0] == cells[3] && cells[3] == cells[6]) || (cells[1] == cells[4] && cells[4] == cells[7]) || (cells[2] == cells[5] && cells[5] == cells[8]) || (cells[0] == cells[4] && cells[4] == cells[8]) || (cells[2] == cells[4] && cells[4] == cells[6])) {
        std::cout << (player == "first" ? "second" : "first") << " player wins!\n";
    } else {
        std::cout << "no one wins\n";
    }

    cells = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    player = "first";
    counter = 0;
}