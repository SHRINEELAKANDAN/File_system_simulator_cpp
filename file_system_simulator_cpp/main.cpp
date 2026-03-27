#include<iostream>
#include<map>
#include<vector>

using namespace std;

// Node structure to represent files and folders
class Node {
public:
    string name;
    bool isFile;
    map<string, Node*> children;

    Node(string name, bool isFile) : name(name), isFile(isFile) {}
};

// Root directory
Node *root= new Node("root", false);

// Create File and Folder function
void create(Node* current, string name, bool isfile)
{
    if(current->children.count(name))
    {
        cout<<"Already exists\n";
        return;
    }

    current->children[name]=new Node(name, isfile);
    cout<< (isfile? "File" : "Folder") <<name<<"created\n";
}