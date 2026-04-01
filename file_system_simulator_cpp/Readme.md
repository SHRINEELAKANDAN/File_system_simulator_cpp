File system simulator

Upgraded version

Real-time File system implimentation

This project is now upgraded to perform a real-time File/Folder handling using the c++17 '<filesystem>' library.

-Files/Folders are now physically created on disk.
-Deletion are permanent.
-This program  directly interact with the OS file system.

Features

    -Create real File using '<ofstream>'
    -Create actual directories using '<filesystem>'
    -List Files and Folders in current directory
    -Delete files and folders
    -Search for files/folders in current directory
    -Real-time interaction with OS file system

Language - C++

Libraries
    -<iostream>
    -<filesystem> - (C++17)
    -<fstream>
    -<limits>
    -<iostream>
    -<string>

Menu
    1. Create File  
    2. Create Folder  
    3. List 
    4. Delete 
    5. Search 
    6. Exit  

Usage examples
    **********File System Simulator**********
    1. Create File
    2. Create Folder
    3. List 
    4. Delete
    5. Search
    6. Exit
    Enter your choice: 1


    Enter File name: test file
    File 'test file' created

    **********File System Simulator**********
    1. Create File
    2. Create Folder
    3. List 
    4. Delete
    5. Search
    6. Exit
    Enter your choice: 2


    Enter Folder name: test folder
    Folder 'test folder' created

    **********File System Simulator**********
    1. Create File
    2. Create Folder
    3. List 
    4. Delete
    5. Search
    6. Exit
    Enter your choice: 3   

    File: "main.cpp"
    File: "main.exe"
    File: "Readme.md"
    File: "test file"
    Folder: "test folder"

Warning[very Important]
    
    -"USE CAREFULLY TO AVOID ACCIDENTAL DATA LOSS"

    -This program perform "real-time file/folder system operation"
    -Deleted files/folder cannot be recovered
      
Key Learning 
    -Upgrade from "In-memory simulation" to "Real OS level file handling"
    -Hands-on experience with c++ '<filesystem>'
    -Implimented CLI based file manager
    -Understood directory traversal and file operations

Previous Version
Overview

    A File System Simulator built using C++ that mimics basic file and directory operations similar to an operating system. This project demonstrates concepts like data structures, recursion, and object-oriented programming (OOP).

Features

    Create files and folders
    Delete files and folders
    List directory contents
    Search files using DFS (Depth-First Search)
    Command-line interface (CLI) interaction

Tech Stack
    Language: C++
    Concepts: OOP, Data Structures & Algorithms (DSA), Recursion
    STL Used: map, vector
    Other: File Handling (optional extension)


Sample Output
    **********File System Simulator**********
    1. Create File
    2. Create Folder
    3. List Contents
    4. Delete
    5. Search
    6. Exit
    Enter your choice: 1

    Enter File name: cpp

    File cpp created


    **********File System Simulator**********
    1. Create File
    2. Create Folder
    3. List Contents
    4. Delete
    5. Search
    6. Exit
    Enter your choice: 2

    Enter Folder name: projects

    Folder projects created


    **********File System Simulator**********
    1. Create File
    2. Create Folder
    3. List Contents
    4. Delete
    5. Search
    6. Exit
    Enter your choice: 3

    Contents of root:

    File: cpp
    Folder: projects

    **********File System Simulator**********
    1. Create File
    2. Create Folder
    3. List Contents
    4. Delete
    5. Search
    6. Exit
    Enter your choice: 4

    Enter the name of the File/Folder to delete: cpp
    cpp deleted


    **********File System Simulator**********
    1. Create File
    2. Create Folder
    3. List Contents
    4. Delete
    5. Search
    6. Exit
    Enter your choice: 5

    Enter the File/Folder name to search: projects
    Found


    **********File System Simulator**********
    1. Create File
    2. Create Folder
    3. List Contents
    4. Delete
    5. Search
    6. Exit
    Enter your choice: 6

Key Learnings
    1. Tree-based data structure design
    2. Depth-First Search [DFS]
    3. Efficent use of STL
    4. Modular system desing

Author

    Name: Shrineelakandan B
    Email: shrineelakandan307@gmail.com
    https://github.com/SHRINEELAKANDAN
