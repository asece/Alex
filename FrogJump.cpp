//  Last sanity check: 2020-05-10
int solution(int X, int Y, int D) 
{
    int jumps = (Y-X) / D;
    if ( (Y-X) % D )
        jumps++;
    return jumps;
}
