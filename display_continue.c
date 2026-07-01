#include <stdio.h>



extern int frame_count;

extern int get_frames(void);



int main(void)
{
    int frames = get_frames();
    printf("Frames: %d\n", frames);
    return 0;


}

