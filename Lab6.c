#include <stdio.h>
int main() {
    int i, n, seek_count = 0, cur_track, distance, head = 50;

    printf("Enter the number of tracks: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the track numbers in sequence:\n");
    for (i = 0; i < n; i++)
        {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
        {
          cur_track = arr[i];
            distance = fabs(head-cur_track);
            seek_count += distance;
        head=cur_track;
    }
    printf("\nTotal number of Seek operations: %d\n", seek_count);
    printf("Seek Sequence:\n ");
     for (i = 0; i < n; i++)
     {
       printf("%d\n", arr[i]);

     }
    return 0;
}
