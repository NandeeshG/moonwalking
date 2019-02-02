// Given three rods R1,R2,R3
// Given X number of disks on R1 with largest disk at bottom and smallest at top
// The disks at R1 are sorted
// Aim is to transfer these disks with this configiration to R3
// R2 can be used for help in the transfer, adhering to following rules-
//              1. only one disk can be moved at a time
//              2. at any point of time, at all three rods, under every disc must be a disc larger than it
// We use recursion to solve this problem

#include <stdio.h>

void towerOfHanoi(int n, char *r1, char *r2, char *r3)
{
    if (n == 1)
    {
        printf("Move disk %d from %s to %s\n", n, r1, r3);
        return;
    }

    //top tower r1 to r2
    towerOfHanoi(n - 1, r1, r3, r2);
    //disk r1 to r3
    printf("Move disk %d from %s to %s\n", n, r1, r3);
    //top tower r2 to r3
    towerOfHanoi(n - 1, r2, r1, r3);

    return;
}

int main()
{
    int n;
    printf("Enter number of disks ");
    scanf("%d", &n);
    towerOfHanoi(n, "R1", "R2", "R3");
    return 0;
}