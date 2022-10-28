#include "file2.h"

void writeFile(const char *fileName)
{
    srand(time(NULL));
    cout << "Working with randomly generated integers \n";

    vector<int> arr;

    int size = generateNum(5, 10);

    cout << "Generating " << size << " integer(s): ";
    for (int i = 0; i < size; i++)
    {
        arr.push_back(generateNum(10, 100));
        // cout << temp << " ";
    }
    arr.resize(size);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverse(arr.begin(), arr.end());

    ofstream fout(fileName);

    if (fout)
    {
        cout << "Writing all " << arr.size() << " integer(s) into " << fileName << " file.\n";
        while (arr.size() != 0)
        {
            fout << arr[arr.size() - 1] << endl;
            arr.pop_back();
        }
        cout << "Program is exiting. Press enter to quit...";
        char enter = ' ';
        while (enter != '\n')
        {
            enter = getchar();
        }
    }
    fout.close();
    return;
}

int generateNum(int start, int end)
{
    return rand() % (end - start + 1) + start;
}