#include <iostream>

const int ROWS = 5;
const int COLS = 6;
const int NUM_ARRAYS = 6;

int main() {
    // initialize six 5x6 arrays with different numbers
    int arrays[NUM_ARRAYS][ROWS][COLS] = {
        {
            {1, 2, 3, 4, 5, 6},
            {7, 8, 9, 10, 11, 12},
            {13, 14, 15, 16, 17, 18},
            {19, 20, 21, 22, 23, 24},
            {25, 26, 27, 28, 29, 30}
        },
        {
            {31, 32, 33, 34, 35, 36},
            {37, 38, 39, 40, 41, 42},
            {43, 44, 45, 46, 47, 48},
            {49, 50, 51, 52, 53, 54},
            {55, 56, 57, 58, 59, 60}
        },
        {
            {61, 62, 63, 64, 65, 66},
            {67, 68, 69, 70, 71, 72},
            {73, 74, 75, 76, 77, 78},
            {79, 80, 81, 82, 83, 84},
            {85, 86, 87, 88, 89, 90}
        },
        {
            {1, 2, 3, 4, 5, 6},
            {7, 8, 9, 10, 11, 12},
            {13, 14, 15, 16, 17, 18},
            {19, 20, 21, 22, 23, 24},
            {25, 26, 27, 28, 29, 30}
        },
        {
            {91, 92, 93, 94, 95, 96},
            {97, 98, 99, 100, 101, 102},
            {103, 104, 105, 106, 107, 108},
            {109, 110, 111, 112, 113, 114},
            {115, 116, 117, 118, 119, 120}
        },
        {
            {121, 122, 123, 124, 125, 126},
            {127, 128, 129, 130, 131, 132},
            {133, 134, 135, 136, 137, 138},
            {139, 140, 141, 142, 143, 144},
            {145, 146, 147, 148, 149, 150}
        }
    };

    // check for arrays with same number(s)
    bool has_same_number[NUM_ARRAYS] = {false};
    for (int i = 0; i < NUM_ARRAYS - 1; i++) {
        for (int j = i + 1; j < NUM_ARRAYS; j++) {
            // check if the two arrays have at least one same number
            bool has_common_number = false;
            for (int row = 0;row < ROWS && !has_common_number; row++) {
            for (int col = 0; col < COLS && !has_common_number; col++) {
                if (arrays[i][row][col] == arrays[j][row][col]) {
                    has_common_number = true;
                }
            }
        }
        if (has_common_number) {
            has_same_number[i] = true;
            has_same_number[j] = true;
        }
    }
}

// add array[0][0] of arrays that have same number(s)
for (int i = 0; i < NUM_ARRAYS; i++) {
    if (has_same_number[i]) {
        arrays[0][0][0] += arrays[i][0][0];
    }
}

// print results
std::cout << "Original arrays:" << std::endl;
for (int i = 0; i < NUM_ARRAYS; i++) {
    std::cout << "Array " << i << ":" << std::endl;
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            std::cout << arrays[i][row][col] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

std::cout << "Arrays after adding array[0][0] of arrays that have same number(s):" << std::endl;
for (int i = 0; i < NUM_ARRAYS; i++) {
    std::cout << "Array " << i << ":" << std::endl;
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            std::cout << arrays[i][row][col] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

return 0;
}