#include <iostream>
#include <vector>

void display_board(std::vector<std::string> cells) {
    std::cout << " ===== ===== ===== \n";
    std::cout << "|  " << cells[0] << "  |  " << cells[1] << "  |  " << cells[2] << "  |\n";
    std::cout << " ----- ----- ----- \n";
    std::cout << "|  " << cells[3] << "  |  " << cells[4] << "  |  " << cells[5] << "  |\n";
    std::cout << " ----- ----- ----- \n";
    std::cout << "|  " << cells[6] << "  |  " << cells[7] << "  |  " << cells[8] << "  |\n";
    std::cout << " ===== ===== ===== \n";
}