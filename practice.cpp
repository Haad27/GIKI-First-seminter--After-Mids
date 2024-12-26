
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h> // For Windows text-to-speech
#include <sapi.h>    // For Windows SAPI

using namespace std;

void readBook(string filename)
{
    string line[20];
    int linecount = 0;
    int choice;
    bool flag = true;
    int constantline = 20;
    ifstream file(filename);
    if (!file.is_open())
    {
        cout << "error occured the file cant be opned";
    }

    if (file.is_open())
    {
        while (flag)
        {
            for (int i = 0; i < 20; i++)
            {
                if (getline(file, line[i]))
                {
                    linecount++;
                }
            }
            if (linecount == 0 )
            {
                cout << "end of sotry \n";
            }
            
            for (int i = 0; i < linecount; i++)
            {
               cout<<  line[i];
            }
            

            cout << "do you want to contine or end \n";
            cin >> choice;
            switch (choice)
            {
            case 1:
                flag = true;
                break;
            case 2:
                flag = false;
                break;

            default:
                break;
            }
        }
    }
    file.close();
}

void createSampleBook()
{
    ofstream file("sample_book.txt");
    if (file.is_open())
    {
        // Title and Author
        file << "                        The Little Prince\n";
        file << "                        by Antoine de Saint-Exupery\n\n";

        // Chapter 1
        file << "Chapter 1\n\n";
        file << "Once when I was six years old I saw a magnificent picture in a book,\n";
        file << "called True Stories from Nature, about the primeval forest. It was a\n";
        file << "picture of a boa constrictor in the act of swallowing an animal.\n\n";
        file << "In the book it said: 'Boa constrictors swallow their prey whole,\n";
        file << "without chewing it. After that they are not able to move, and they\n";
        file << "sleep through the six months that they need for digestion.'\n\n";
        file << "I pondered deeply, then, over the adventures of the jungle. And\n";
        file << "after some work with a colored pencil I succeeded in making my\n";
        file << "first drawing. My Drawing Number One.\n\n";

        // Chapter 2
        file << "Chapter 2\n\n";
        file << "I lived my life alone, without anyone that I could really talk to,\n";
        file << "until I had an accident with my plane in the Desert of Sahara, six years ago.\n";
        file << "Something was broken in my engine. And as I had with me neither a mechanic\n";
        file << "nor any passengers, I set myself to attempt the difficult repairs all alone.\n\n";
        file << "It was a question of life or death for me: I had barely enough drinking\n";
        file << "water to last eight days. The first night, then, I went to sleep on\n";
        file << "the sand, a thousand miles from any human habitation.\n\n";

        // Chapter 3
        file << "Chapter 3\n\n";
        file << "It took me a long time to learn where he came from. The little prince,\n";
        file << "who asked me so many questions, never seemed to hear the ones I asked him.\n";
        file << "It was from words dropped by chance that, little by little,\n";
        file << "everything was revealed to me.\n\n";
        file << "When he saw my airplane for the first time, he asked:\n";
        file << "'What is that object?'\n";
        file << "'That is not an object. It flies. It is an airplane.'\n";
        file << "'Oh! You come from the sky then?'\n\n";

        // Chapter 4
        file << "Chapter 4\n\n";
        file << "I had thus learned a second fact of great importance:\n";
        file << "his planet of origin was scarcely any larger than a house!\n";
        file << "But that did not really surprise me much. I knew very well that in\n";
        file << "addition to the great planets such as Earth, Jupiter, Mars, Venus,\n";
        file << "there are also hundreds of others that are sometimes so small that\n";
        file << "one has a hard time seeing them through the telescope.\n\n";

        // Chapter 5
        file << "Chapter 5\n\n";
        file << "Each day I would learn something new about the planet, about the\n";
        file << "departure, about the journey. It would come very slowly, in the\n";
        file << "course of casual remarks. In this way I heard about the flowers.\n\n";
        file << "The little prince had watched very seriously as I unpacked my drawing\n";
        file << "materials. 'What are those?' he asked.\n";
        file << "'These are baobabs.'\n";
        file << "I had been working on my drawing of the baobabs.\n\n";

        // Chapter 6
        file << "Chapter 6\n\n";
        file << "Oh, little prince! Bit by bit I came to understand the secrets of your\n";
        file << "sad little life. For a long time you had found your only entertainment\n";
        file << "in the quiet pleasure of looking at the sunset. I learned that new\n";
        file << "detail on the morning of the fourth day, when you said to me:\n";
        file << "'I am very fond of sunsets. Come, let us go look at a sunset now.'\n\n";

        file.close();
        cout << "Sample book 'sample_book.txt' created successfully!\n";
    }
    else
    {
        cout << "Error creating sample book file!\n";
    }
}

int main()
{
    while (true)
    {
        system("cls");
        cout << "=== Book Reader Menu ===\n";
        cout << "1. Create sample book\n";
        cout << "2. Read a book\n";
        cout << "3. Exit\n";
        cout << "Choice (1-3): ";

        int choice;
        cin >> choice;

        if (choice == 1)
        {
            createSampleBook();
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
        }
        else if (choice == 2)
        {
            string fileName;
            cout << "Enter file name to read (e.g., sample_book.txt): ";
            cin >> fileName;
            readBook(fileName);
        }

        else if (choice == 3)
        {
            break;
        }
    }

    return 0;
}