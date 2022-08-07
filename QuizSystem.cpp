#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

struct student
{
    char name[30];
    char roll[10];
    int marks;
    int random;
};
student s;

// QUIZ FOR C
void C()
{               
    int i = 0;
    int arr[5];
    s.marks = 0;
    char choise;

    while (i < 5)
    {
    back:
        s.random = rand() % 5;
        for (int j = 0; j < 5; j++)
        {
            if (s.random == arr[j])
            {
                goto back;
            }
        }
        arr[i] = s.random;
        switch (s.random)
        {

        case 0:
            // 1st mcq
            cout << i + 1 << ")  If a variable is a pointer to a structure, then which of the following operator is used to access data members of the structure through the pointer variable? " << endl;
            cout << "  A)->" << endl;
            cout << "  B) & " << endl;
            cout << "  C) * " << endl;
            cout << "  D) . " << endl;

            choise = getch();
            if (choise == 'a' || choise == 'A')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is a" << endl;
                cout << endl;
            }
            break;

        case 1:
            // 2nd mcq
            cout << i + 1 << ") A pointer is a_____" << endl;
            cout << "  A) A keyword used to create variables  " << endl;
            cout << "  B) A variable that stores address of an instruction " << endl;
            cout << "  C) A variable that stores address of other variable  " << endl;
            cout << "  D) All of above  " << endl;

            choise = getch();
            if (choise == 'c' || choise == 'C')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;

                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is c" << endl;
                cout << endl;
            }
            break;

        case 2:
            // 3rd mcq
            cout << i + 1 << ") How are String represented in memory in C?" << endl;
            cout << "  A) Array of character :" << endl;
            cout << "  B) linked list of character" << endl;
            cout << "  C) Objects of some class " << endl;
            cout << "  D) Same as other primitive data type " << endl;

            choise = getch();
            if (choise == 'a' || choise == 'A')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is a" << endl;
                cout << endl;
            }
            break;

        case 3:
            // 4th mcq
            cout << i + 1 << ") Who is the father of C language?  " << endl;
            cout << "  A) Steve Jobs " << endl;
            cout << "  B) James Gosling " << endl;
            cout << "  C) Dennis Ritchie  " << endl;
            cout << "  D) Rasmus Lerdorf " << endl;

            choise = getch();
            if (choise == 'c' || choise == 'C')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is c" << endl;
                cout << endl;
            }
            break;

        case 4:
            // 5th mcq
            cout << i + 1 << ") All keywords in C are in _____  " << endl;
            cout << "  A) LowerCase letters " << endl;
            cout << "  B) UpperCase letters " << endl;
            cout << "  C) CamelCase letters " << endl;
            cout << "  D) None of the mentioned " << endl;

            choise = getch();
            if (choise == 'a' || choise == 'A')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is a" << endl;

                cout << endl;
            }
            break;

        case 5:
            // 6th mcq
            cout << i + 1 << ") 14. What is an example of iteration in C?" << endl;
            cout << "  A) for " << endl;
            cout << "  B) while " << endl;
            cout << "  C) do-while " << endl;
            cout << "  D) all of the mentioned " << endl;

            choise = getch();
            if (choise == 'd' || choise == 'D')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is d" << endl;
                cout << endl;
            }
            break;
        }
        i++;
    }
}

// QUIZ FOR DATA STRUCTURE
void DataStructure()
{
    int i = 0;
    int arr[5];
    s.marks = 0;
    char choise;

    while (i < 5)
    {
    back:
        s.random = rand() % 5;
        for (int j = 0; j < 5; j++)
        {
            if (s.random == arr[j])
            {
                goto back;
            }
        }
        arr[i] = s.random;
        switch (s.random)
        {

        case 0:
            // 1st mcq
            cout << i + 1 << ") Process of removing an element from an empty stack is   " << endl;
            cout << "  A) Unbderflow  " << endl;
            cout << "  B) Removing  " << endl;
            cout << "  C) Deleting  " << endl;
            cout << "  D) Overflow " << endl;

            choise = getch();
            if (choise == 'a' || choise == 'A')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is a" << endl;
                cout << endl;
            }
            break;

        case 1:
            // 2nd mcq
            cout << i + 1 << ") LIFO stands for      " << endl;
            cout << "  A)  Late In First Out  " << endl;
            cout << "  B)  Light In Figure Out " << endl;
            cout << "  C)  Last In First Out  " << endl;
            cout << "  D)  None of the Above  " << endl;

            choise = getch();
            if (choise == 'c' || choise == 'C')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;

                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is c" << endl;
                cout << endl;
            }
            break;

        case 2:
            // 3rd mcq
            cout << i + 1 << ") On which element we perform insertion and deletion operation is stacks  " << endl;
            cout << "  A) Front" << endl;
            cout << "  B) Top " << endl;
            cout << "  C) Rear  " << endl;
            cout << "  D) None of the Above  " << endl;

            choise = getch();
            if (choise == 'b' || choise == 'B')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is b" << endl;
                cout << endl;
            }
            break;

        case 3:
            // 4th mcq
            cout << i + 1 << ")  What data structure is used for depth first traversal of a graph? " << endl;
            cout << "  A) queue  " << endl;
            cout << "  B) stack " << endl;
            cout << "  C)  list " << endl;
            cout << "  D)  none of the above" << endl;

            choise = getch();
            if (choise == 'b' || choise == 'B')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is b" << endl;
                cout << endl;
            }
            break;

        case 4:
            // 5th mcq
            cout << i + 1 << ") An algorithm is" << endl;
            cout << "  A)  a step by step procedure to solve problem. " << endl;
            cout << "  B)  a loosely written code to make final code. " << endl;
            cout << "  C)  a piece of code to be executed. " << endl;
            cout << "  D)  all of the above. " << endl;

            choise = getch();
            if (choise == 'a' || choise == 'A')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is a" << endl;

                cout << endl;
            }
            break;

        case 5:
            // 6th mcq
            cout << i + 1 << ") A queue data-structure can be used for___ " << endl;
            cout << "  A)  resource allocation " << endl;
            cout << "  B)  expression parsing " << endl;
            cout << "  C)  Recursion " << endl;
            cout << "  D)  all of the above  " << endl;

            choise = getch();
            if (choise == 'a' || choise == 'A')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is A" << endl;
                cout << endl;
            }
            break;
        }
        i++;
    }
}

// QUIZ FOR DATABASE MANAGEMENT SYSTEM
void DBMS()
{
    int i = 0;
    int arr[5];
    s.marks = 0;
    char choise;

    while (i < 5)
    {
    back:
        s.random = rand() % 5;
        for (int j = 0; j < 5; j++)
        {
            if (s.random == arr[j])
            {
                goto back;
            }
        }
        arr[i] = s.random;
        switch (s.random)
        {

        case 0:
            // 1st mcq
            cout << i + 1 << ") What is the full form of DBMS?   " << endl;
            cout << "  A) Database Management System  " << endl;
            cout << "  B) Database Management Service   " << endl;
            cout << "  C) Data of Binary Management System  " << endl;
            cout << "  D) Data Backup Management System " << endl;

            choise = getch();
            if (choise == 'a' || choise == 'A')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is a" << endl;
                cout << endl;
            }
            break;

        case 1:
            // 2nd mcq
            cout << i + 1 << ") Which type of data can be stored in the database? " << endl;
            cout << "  A) Data in the form of audio or video  " << endl;
            cout << "  B) Text, files containing data  " << endl;
            cout << "  C) All of the above  " << endl;
            cout << "  D) Image oriented data " << endl;

            choise = getch();
            if (choise == 'c' || choise == 'C')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;

                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is c" << endl;
                cout << endl;
            }
            break;

        case 2:
            // 3rd mcq
            cout << i + 1 << ") Which of the following is not an example of DBMS?" << endl;
            cout << "  A)  Google" << endl;
            cout << "  B)  IBM DB2 " << endl;
            cout << "  C)  Microsoft Acess " << endl;
            cout << "  D)  MYSQL " << endl;

            choise = getch();
            if (choise == 'a' || choise == 'A')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is a" << endl;
                cout << endl;
            }
            break;

        case 3:
            // 4th mcq
            cout << i + 1 << ") What does an RDBMS consist of?  " << endl;
            cout << "  A)  Collection of Fields" << endl;
            cout << "  B)  Collection of Keys " << endl;
            cout << "  C)  Collection of Tables  " << endl;
            cout << "  D)  Collection of Records" << endl;

            choise = getch();
            if (choise == 'c' || choise == 'C')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is c" << endl;
                cout << endl;
            }
            break;

        case 4:
            // 5th mcq
            cout << i + 1 << ")Which command is used to remove a relation from an SQL? " << endl;
            cout << "  A) Drop table " << endl;
            cout << "  B) Purge" << endl;
            cout << "  C) Delete  " << endl;
            cout << "  D) Remove " << endl;

            choise = getch();
            if (choise == 'a' || choise == 'A')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is a" << endl;

                cout << endl;
            }
            break;

        case 5:
            // 6th mcq
            cout << i + 1 << ") What is DBMS? " << endl;
            cout << "  A) DBMS is a high-level language" << endl;
            cout << "  B)  DBMS is a collection of queries " << endl;
            cout << "  C) DBMS is a programming language " << endl;
            cout << "  D)  DBMS stores, modifies and retrieves data " << endl;

            choise = getch();
            if (choise == 'd' || choise == 'D')
            {
                cout << ":)Your ans is correct.." << endl;
                cout << endl;
                s.marks++;
            }
            else
            {
                cout << ":)Your ans is incorrect" << endl;
                cout << ":)Your correct ans is d" << endl;
                cout << endl;
            }
            break;
        }
        i++;
    }
}
void result()
{           
    int per = 0;
    cout << "\nStudent Name:) " << s.name << endl;
    cout << "\nRoll No.    :) " << s.roll << endl;
    cout << "\nMarks       :) " << s.marks << " out of 6" << endl;
    per = 100 * s.marks / 6;
    cout << "\npecentage   :) " << per << "%" << endl;
    if (per >= 50)
    {
        cout << "\nCongrats you passed....";
    }
    else
    {
        cout << "\nyou failed but try again....";
    }
    cout << endl;

}

int main()
{
    char press , select;
    do
    {
        system("CLS");
        cout << "\t\t\t\t**********************************************************************" << endl;
        cout << "\t\t\t\t\t\t\t QUIZ SYSTEM " << endl;
        cout << "\t\t\t\t**********************************************************************" << endl;

        cout << endl;

        cout << "\t\t\t\t\t Enter name:) ";
        //   cin.getline(s.name,30);
        gets(s.name);
        cout << endl;
        cout << "\t\t\t\t\t Enter Roll No:) ";
        gets(s.roll);
        //  cin>>s.roll;

        // clear screen
        system("CLS");

        cout << "Rules:) " << endl;
        cout << "\t->select any subject to start quiz " << endl;
        cout << "\t->time: 10min" << endl;
        cout << "\t->Solve all questions " << endl;
        cout << "\t->time: 10min" << endl;
        cout << endl;
        cout << "----**** Select subject for quiz ****----" << endl;

        cout << "1) C " << endl;
        cout << "2) Data Structure " << endl;
        cout << "3) DataBase Management System " << endl;
        select = getch();
        system("CLS");

        switch (select)
        {
        case '1':
            cout <<"\t\t  C QUIZ "<< endl;
            C();
            cout <<"\t\t C RESULT"<<endl;
            result();
            break;
        case '2':
            cout <<"\t\t  DATA STRUCTURE QUIZ"<< endl;
            DataStructure();
            cout <<"\t\t DATA STRUCTURE RESULT"<< endl;
            result();
            break;
        case '3':
            cout <<"\t\t DATABASE MANAGEMENT SYSTEM QUIZ"<< endl;
            DBMS();
            cout <<"\t\t DATABASE MANAGEMENT RESULT"<< endl;
            result();
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
        }

        cout << endl;
        cout << "\tPrees c to continue the quiz \n \tpress any key to terminate quiz" << endl;
        press = getch();
    } while (press == 'c' || press == 'C');

}