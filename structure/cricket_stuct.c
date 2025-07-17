//crate struct for getting information of multiple cricketer and displaying the player who have scored the most runs
//name
//age
//match played
//total runs 

#include <stdio.h>
int totalRuns = 0; 

struct Cricketers {
    char name[50]; 
    int age; 
    int matchesPlayed; 
    int totalRuns; 
};
int main() {
    struct Cricketers player; // Declare a structure variable
   
    int n,i;
    printf("Enter the number of players: ");
    scanf("%d", &n);

 for(int i = 0; i < n; i++) {
        // Input player details
        printf("Enter details for player %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", player.name);
        printf("Age: ");
        scanf("%d", &player.age);
        printf("Matches Played: ");
        scanf("%d", &player.matchesPlayed);
        printf("Total Runs: ");
        scanf("%d", &player.totalRuns);
 }
        // Display player details
        printf("\n--------Player Details:-------------\n");
        for (i = 0; i < n; i++) {
            printf("Player %d:\n", i + 1);
            printf("Name: %s\n", player.name);
            printf("Age: %d\n", player.age);
            printf("Matches Played: %d\n", player.matchesPlayed);
            printf("Total Runs: %d\n\n", player.totalRuns);
        }
       
    // Find the player with the most runs

    struct Cricketers topPlayer = player; 
    for (i = 1; i < n; i++) {
        if (player.totalRuns > topPlayer.totalRuns) {
            topPlayer = player;
        }
    }
    printf("Player with the most runs:\n");
    printf("Name: %s\n", topPlayer.name);
    printf("Age: %d\n", topPlayer.age);
    printf("Matches Played: %d\n", topPlayer.matchesPlayed);
    printf("Total Runs: %d\n", topPlayer.totalRuns);
    
    return 0;
}