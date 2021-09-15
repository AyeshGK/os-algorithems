#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c1 = 1; //c1=0 or c2=0 this means relevent thread wants to start critical section
    int c2 = 1;
    int turn = 1;

    startThreads();

    return 0;
}

Thread1()
{
    //process
    while (true)
    {
        //non critical section

        //preprotocol section
        c1 = 0; // c1 wants to start

        while (c2 != 0)
        {
            if (turn != 1)
            {
                c1 = 1; //if it is not turn of thread1 then remove c1 wants to start(c1=0),give  the changce to other thread
                while (turn != 1)
                {
                }
                c1 = 0; //set again c1 wants to start
            }
        }
        // now can access this part by thead1
        //critical section
        c1 = 1;
        turn = 2;
    }
}