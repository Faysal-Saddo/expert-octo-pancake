#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_candidates;
    printf("Enter number of candidates: ");
    scanf("%d", &num_candidates);

    // calloc allocates memory AND automatically initializes everything to 0
    int *votes = calloc(num_candidates, sizeof(int));
    if (votes == NULL) return 1;

    int choice;
    printf("\nCast your votes! Enter candidate index (0 to %d), or -1 to stop:\n", num_candidates - 1);
    
    while (1) {
        printf("Vote for candidate: ");
        scanf("%d", &choice);
        
        if (choice == -1) break;
        
        if (choice >= 0 && choice < num_candidates) {
            votes[choice]++; // Increment that candidate's vote count safely
        } else {
            printf("Invalid candidate number!\n");
        }
    }

    // Print final tallies
    printf("\n--- Final Results ---\n");
    for (int i = 0; i < num_candidates; i++) {
        printf("Candidate %d: %d votes\n", i, votes[i]);
    }

    free(votes);
    return 0;
}
