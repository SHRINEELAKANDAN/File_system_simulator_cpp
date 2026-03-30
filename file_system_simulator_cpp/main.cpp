#include<iostream>
#include<string>
#include<filesystem>
#include<limits>
#include<fstream>

using namespace std;
namespace fs=filesystem;

// Create File 
void create_file()
{
    cout<<endl;
    cout<<"Enter File name: ";
    string name;
    getline(cin, name);
    fs::path filepath=name;
    ofstream file(filepath);
    if(file)
    {
        cout<< "File '"<<name<<"' created\n";
    }
    else
    {
        cout<<"Failed to create file\n";
    }
}

void create_folder()
{
    cout<<endl;
    cout<<"Enter Folder name: ";
    string name;
    getline(cin, name);
    if(fs::create_directory(name))
    {
        cout<<"Folder '"<<name<<"' created\n";
    }
    else
    {
        cout<<"Failed to create folder\n";
    }

}

void list_entries()
{

        for(const auto& entry : fs::directory_iterator("."))
        {
            cout<<(entry.is_directory()? "Folder: " : "File: ")
                <<entry.path().filename()<<'\n';
        }
}

void remove_entries()
{
    cout<<"Enter File/Folder name to delete: ";
    string name;
    getline(cin, name);
    if(fs::exists(name))
    {
        if(fs::is_directory(name))
        {
            fs::remove_all(name);
        }
        else
        {
            fs::remove(name);
        }
        cout<<name<<" deleted successfully\n";
    }
    else
    {
        cout<<"File/Folder not found\n";
    }
}

void search_entries()
{
    cout<<"Enter File/Folder name to search: ";
    string name;
    getline(cin, name);
    bool found=false;
    for(const auto& entry : fs::directory_iterator("."))
    {
        if(entry.path().filename()==name)
        {
            found=true;
            break;
        }
    }
    cout<<(found ? "Found\n" : "Not Found\n");
}



int main()
{
    fs::current_path(fs::current_path()); //Use current directory as a root
    
    int choice;
    bool run=true;;

    while(run)
    {
        cout<<endl;
        cout<<"**********File System Simulator**********\n";
        cout<<"1. Create File\n2. Create Folder\n3. List \n4. Delete\n5. Search\n6. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        cin.ignore(); // To ignore the newline character after entering choice
        cout<<endl;

        switch (choice)
        {
            case 1:
                create_file();
                break;
            
            case 2:
                create_folder();
                break;
            
            case 3:
                list_entries();
                break;

            case 4:                
                remove_entries();
                break;

            case 5:
                search_entries();
                break;

            case 6:
                run=false;
                break;
            
            default:
                cout<<"Invalid choice. Please try again.\n\n";
                break;
        }
        
    }

}