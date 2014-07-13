#include <iostream>
#include <string>

#include <mecab.h>
#include <Magick++.h>

int main(int argc, char **argv) {
    MeCab::Tagger *tagger = MeCab::createTagger("");
    const MeCab::Node *first = tagger->parseToNode(argv[1]);

    for (const MeCab::Node *node = first->next; node->next; node = node->next) {
        std::string word(node->surface, node->length);
        std::cout << word << std::endl;
    }

    return 0;
}
