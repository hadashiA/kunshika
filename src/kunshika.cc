#include <iostream>
#include <string>

// #include <mecab.h>
// #include <Magic++.h>

int main(int argc, char **argv) {
    // MeCab::Tagger *tagger = MeCab::createTagger("");
    // const MeCab::Node *first = tagger->parseToNode(argv[0]);

    // for (const MeCab::Node *node = first->next; node->next; node = node->next) {
    //     std::string word(node->surface, node->length);
    //     std::cout << word << std::endl;
    // }

    std::cout << argv[1] << std::endl;
    return 0;
}