#include <iostream>
#include <vector>
#include <stdexcept>

class Span {
public:
    Span(unsigned int n) : N(n) {
        if (N == 0) {
            throw std::invalid_argument("N should be greater than 0.");
        }
    }

    void addNumber(int num) {
        if (numbers.size() >= N) {
            throw std::runtime_error("Cannot add more numbers. The Span is full.");
        }
        numbers.push_back(num);
    }

    int shortestSpan() {
        if (numbers.size() < 2) {
            throw std::runtime_error("Not enough numbers to calculate the shortest span.");
        }

        std::sort(numbers.begin(), numbers.end());
        int minSpan = numbers[1] - numbers[0];
        for (size_t i = 2; i < numbers.size(); ++i) {
            int span = numbers[i] - numbers[i - 1];
            if (span < minSpan) {
                minSpan = span;
            }
        }
        return minSpan;
    }

    int longestSpan() {
        if (numbers.size() < 2) {
            throw std::runtime_error("Not enough numbers to calculate the longest span.");
        }

        std::sort(numbers.begin(), numbers.end());
        int maxSpan = numbers[numbers.size() - 1] - numbers[0];
        return maxSpan;
    }

private:
    unsigned int N;
    std::vector<int> numbers;
};

int main() {
    try {
        // Span span(10); // Create a Span to store up to 10 integers

        // // Add some numbers to the Span
        // span.addNumber(5);
        // span.addNumber(10);
        // span.addNumber(3);
        // span.addNumber(8);

        // // Calculate and print the shortest span
        // int shortest = span.shortestSpan();
        // std::cout << "Shortest Span: " << shortest << std::endl;

        // // Calculate and print the longest span
        // int longest = span.longestSpan();
        // std::cout << "Longest Span: " << longest << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
