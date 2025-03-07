#include "templatefunctions.h"

void testTemplateFunctions(){
    // Her kan du teste templatefunksjonene dine
    int a = 10;
    int b = 400;
    int c = maximum(a, b);

    std::vector<std::string> words{"ein", "to", "tri", "fira"};
    shuffle(words);

    for (int i = 0; i < words.size(); ++i) {
        std::cout << words.at(i) << " ";
    }
    std::cout << std::endl;
}
