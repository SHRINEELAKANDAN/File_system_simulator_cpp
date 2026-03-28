#include<iostream>
#include<map>
#include<vector>
#include<string>

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
    cout<<endl;
    if(current->children.count(name))
    {
        cout<< (isfile? "File " : "Folder ") <<name<<" already exists\n\n";
        return;
    }

    current->children[name]=new Node(name, isfile);
    cout<< (isfile? "File " : "Folder ") <<name<<" created\n\n";
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
        cout<<name<<" deleted\n\n";
    }
    else
    {
        cout<<"Not found\n\n";
    }

}

bool search(Node* current, string name)
{
    if(current->name == name)
    {
        return true;
    }
    for (auto &child : current->children)
    {
        if(search(child.second, name))
        {
            return true;
        }
    }
    return false;
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
        cout<<endl;
        cout<<"**********File System Simulator**********\n";
        cout<<"1. Create File\n2. Create Folder\n3. List Contents\n4. Delete\n5. Search\n6. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        cin.ignore(); // To ignore the newline character after entering choice
        cout<<endl;

        switch (choice)
        {
            case 1:
                cout<<"Enter File name: ";
                getline(cin, name);
                create(current, name, true);
                break;
            
            case 2:
                cout<<"Enter Folder name: ";
                getline(cin, name);
                create(current, name, false);
                break;
            
            case 3:
                cout<<"Contents of "<<current->name<<": \n\n";
                list(current);
                break;

            case 4:
                cout<<"Enter the name of the File/Folder to delete: ";
                getline(cin, name);
                remove(current, name);
                break;

            case 5:
                cout<<"Enter the File/Folder name to search: ";
                getline(cin, name);
                cout<< (search(current, name)? "Found" : "Not Found") <<endl<<endl;
                break;

            case 6:
                run=false;
                break;

        }
        
    }

}