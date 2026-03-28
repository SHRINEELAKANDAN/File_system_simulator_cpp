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

void list(Node* current)
{

        for(auto &child : current->children)
        {
            cout<<(child.second->isFile? "File: " : "Folder: ")<<child.first<<endl;
        }
}

void remove(Node* current, string name)
{
    auto it = current->children.find(name);
    if(it != current->children.end())
    {
        delete it->second;
        current->children.erase(it);
        cout<<name<<"deleted\n";
    }
    else
    {
        cout<<"Not found\n";
    }

}

void search(Node* current, string name)
{

}



int main()
{
    Node* root=new Node("root", false);
    Node* current = root;
    int choice;
    string name;
    bool run=true;

    while(run)
    {
        cout<<"**********File System Simulator**********\n";
        cout<<"Enter your choice:\n";
        cout<<"1. Create File\n2. Create Folder\n3. List Contents\n4. Delete\n5. Search\n6. Exit\n";
        cin>>choice;

        switch (choice)
        {
            case 1:
                cout<<"Enter File name: ";
                cin>>name;
                create(current, name, true);
                break;
            
            case 2:
                cout<<"Enter Folder name: ";
                cin>>name;
                create(current, name, false);
                break;
            
            case 3:
                cout<<"Contents of "<<current->name<<":\n";
                list(current);
                break;

            case 4:
                cout<<"Enter the name of the File/Folder to delete: ";
                cin>>name;
                remove(current, name);
                break;

            case 5:
                cout<<"Enter the File/Folder name to search: ";
                cin>>name;
                search(current, name);
                break;

            case 6:
                run=false;
                break;

        }
    }

}