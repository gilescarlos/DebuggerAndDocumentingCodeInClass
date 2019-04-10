#include <iostream>

int main() {
    auto counter = 0;
    auto totalScores = 0.0;
    auto finished = false;

    while (!finished) {
        std::string input = " ";
        std::cout << "Enter a test score, (0 to stop): ";
        std::cin >> input;
        auto score = stod(input);
        finished = score == 0;

        if (!finished) {
            totalScores += score;
            counter++;
        }
    }
    std::cout << "Read " << counter << " scores" << std::endl;
    std::cout << "Average score = " << (totalScores / counter ) << std::endl;

    return 0;
}