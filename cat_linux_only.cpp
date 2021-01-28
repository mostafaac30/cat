#include <iostream>
#include <ctime>    //includes clock() function >>that helps for meassuring execusion time

using namespace std;
void ear(int arr[]);    //prints ears of the cat
void forehead(int arr[]);   ////prints head of cat
void space(int j);         //print specific number of space
void stars(int j);         //print specific number of stars
void stars(int j, bool end);  //overloading stars function to be able to add a new line
int main()
{
    clock_t t1 = 0, t2 = 0;     //declaring two variables >>to store entire time values
    t1 = clock();   //t1 takes starting time

    cout << endl;
    //// lines of ears have a common pattern
    int arr[] = {9, 1, 37}; //array of 3 integers used as counters of space() or stars()
    for (int i = 0; i < 7; i++)
    {
        ear(arr);
        arr[0]--;
        arr[1] += 2;
        arr[2] -= 2;
    }
    /// lines of forehead have a common pattern
    int arra[] = {2, 6, 39};    //array of 3 int used as counters of space() or stars()
    for (int i = 0; i < 3; i++)
    {
        forehead(arra);
        cout << endl;
        arra[0]--;
        arra[1]--;
        arra[2] += 4;
    }
    //11th line 
    stars(2);
    cout << " ";  //why not space(1) instead ?? ..to minimize processes number and memory. 
    stars(51);
    cout << " ";
    stars(2, true);
    //12th line
    stars(57, true);
    //13th line 
    stars(11);
    space(6);
    stars(23);
    space(6);
    stars(11, true);
    //14th line
    stars(10);
    space(2);
    stars(4);
    space(2);
    stars(21);
    space(2);
    stars(4);
    space(2);
    stars(10, true);
    //15th line
    stars(10);
    cout << " ";
    stars(6);
    space(2);
    stars(20);
    cout << " ";
    stars(6);
    space(2);
    stars(9, true);
    //16th line
    stars(57, true);
    //17th line
    stars(27);
    space(4);
    stars(26, true);
    //18th line
    cout << " ";
    stars(3);
    cout << " ";
    stars(18);
    cout << " ";
    stars(4);
    space(2);
    stars(4);
    cout << " ";
    stars(17);
    cout << " ";
    stars(3, true);
    //19th line
    space(2);
                                    //coloring using ANSI escape code
    cout << "\033[1;43m.\033[0m";  //why not stars(1) instead ?? ..to minimize processes number and memory. 
    cout << " ";
    stars(3);
    cout << " ";
    stars(15);
    cout << " ";
    stars(3);
    cout << " ";
    stars(2);
    cout << " ";
    stars(3);
    cout << " ";
    stars(14);
    cout << " ";
    stars(3);
    cout << " ";
    cout << "\033[1;43m.\033[0m"<<endl;   //save time and memory and does not need a for loop
    //20th line
    space(3);
    stars(3);
    cout << " ";
    stars(3);
    cout << " ";
    stars(13);
    space(3);
    stars(4);
    space(3);
    stars(12);
    cout << " ";
    stars(3);
    cout << " ";
    stars(3, true);
    //line no. 21
    space(4);
    cout << "\033[1;43m.\033[0m";
    cout << " ";
    stars(3);
    cout << " ";
    stars(37);
    cout << " ";
    stars(3);
    cout << " ";
    cout << "\033[1;43m.\033[0m"<<endl;   //save time and memory and does not need a for loop
    //line no. 22
    space(5);
    stars(2);
    cout << " ";
    stars(41);
    cout << " ";
    stars(2, true);
    //line no. 23
    space(6);
    stars(45, true);

    //"\033[1;7;35m\t\tMostafa Mahmoud \033[1m" >> "\033[" for starting color code , "1" for BOLD font , "7" to inverse colors(of my name and color of background) , "35m" the code of  2-bit color , "\t" to add 8 space , "\033[1m" the end of color code
    cout << endl << endl << "\033[1;7;35m\t\tMostafa Mahmoud \033[1m" << endl << "\033[7;36m\t\tBioinformatics program \033[0m " << endl << endl;    
        
    t2 = clock()-t1;    //t2 >>stores the defference between starting time and end time
    cout << "Execution time = " <<(t2) <<" microSeconds" <<endl;
    return 0;
}
void space(int j)   //assuming it is a base function
{
    for (int i  =0; i < j; i++)
        cout << " ";
}
void stars(int j)   //assuming it is a base function
{
    for (int i = 0; i < j; i++)
        cout << "\033[1;43m.\033[0m";   //coloring using ANSI escape code
}
void stars(int j, bool end)     //overloading of stars()>>to be able to add a new line
{
    for (int i = 0; i < j; i++)
        cout << "\033[1;43m.\033[0m";

    switch (end)    //switch faster than If condition
    case true: cout << endl;
}
void ear(int arr[])        //assuming it is a derived function..That uses space() and stars()
{
    space(arr[0]);
    stars(arr[1]);
    space(arr[2]);
    stars(arr[1]);
    cout << endl;
}
void forehead(int arr[])    //assuming it is another derived function..That uses space() and stars()
{
    space(arr[0]);
    stars(arr[1]);
    cout << " ";
    stars(arr[2]);
    cout << " ";
    stars(arr[1]);
}