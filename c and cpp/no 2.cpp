#include <iostream>
#include <string.h>
using namespace std;
int WordCount(char str[], int length)
{
    int word = (str[0] != ' ');
    for (int i = 0; i < length - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            word++;
        }
    }
    return word;
}
 
void Correct(char str[], int length){
    int first = 0, last = length - 1;

    while (first < last && str[first] == ' ')
        first++;

    while (last > first && str[last] == ' ')
        last--;
    for (int i = first + 1; i <= last; i++){
        if (i + 1 <= last){
            if (str[i] == str[i + 1] && str[i] == ' '){
                continue;
            }
        }
    }
}
 
int main()
{
    char str[100];
    
    
    fgets(str, sizeof str, stdin);
    
    int length = strlen(str) - 1; 
    str[length] = '\0';
    cout<<WordCount(str, length);
    Correct(str, length);
}
