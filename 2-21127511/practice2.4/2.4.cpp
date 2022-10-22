#include "2.4.h"

Array::Array(int S, vector<int> E)
{
    this->Size = S;
    this->Ele = E;
    return;
}

void Array::input()
{
    cout << "Enter array size: ";
    cin >> this->Size;
    this->Ele.resize(this->Size);
    cout << "Enter " << this->Size << " element(s): ";
    for (int i = 0; i < this->Size; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> this->Ele[i];
    }
}

void Array::output()
{
    cout << "This array has " << this->Size << "element(s): ";
    for (int i = 0; i < this->Size; i++)
    {
        cout << this->Ele[i] << " ";
    }
    cout << endl;
}

int Array::getSize()
{
    return this->Size;
}

void Array::setSize()
{
    cout << "Update size: ";
    cin >> this->Size;
    this->Ele.resize(this->Size);
}

int Array::getElement(int Index)
{
    return this->Ele[Index];
}

void Array::setElement(int Index)
{
    cout << "Update at position " << Index << ": ";
    cin >> Ele[Index];
    return;
}

int Array::find(int num)
{
    for (int i = 0; i < this->Size; i++)
    {
        if(num == this->Ele[i])
        {
            return i;
        }
    }
    return -1;
}

void Array::sort(bool (*oper)(int, int))
{
    for (int i = 0; i < this->Size - 1; i++)
    {
        for (int j = i + 1; j < this->Size; j++)
        {
            if (oper(this->Ele[i], this->Ele[j]) == false)
            {
                int temp = this->Ele[j];
                this->Ele[j] = this->Ele[i];
                this->Ele[i] = temp;
            }
        }
    }
}

bool sortAscending(int a, int b)
{
    return a > b;
}

bool sortDecending(int a, int b)
{
    return a < b;
}