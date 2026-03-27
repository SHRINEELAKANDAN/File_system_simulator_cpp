#include<iostream>
#include<map>
#include<vector>

using namespace std;

// Node structure to represent files and directories
class Node {
public:
    string name;
    bool isFile;
    map<string, Node*> children;

    Node(string name, bool isFile) : name(name), isFile(isFile) {}
};

// Root directory
Node *root= new Node("root", false);

