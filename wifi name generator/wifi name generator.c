#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Arrays of adjectives and nouns
const char *adjectives[] = {
    "Happy", "Sunny", "Lucky", "Awesome", "Gentle", "Brilliant",
    "Clever", "Shiny", "Cozy", "Colorful", "Energetic", "Playful"
};

const char *nouns[] = {
    "Squirrel", "Mountain", "Rainbow", "Beach", "Meadow", "Wave",
    "Star", "Castle", "Dream", "River", "Forest", "Cottage"
};

#define NUM_ADJECTIVES (sizeof(adjectives) / sizeof(adjectives[0]))
#define NUM_NOUNS (sizeof(nouns) / sizeof(nouns[0]))

// Function to generate a random WiFi name
void generateWiFiName(char *wifiName) {
    int adjIndex = rand() % NUM_ADJECTIVES;
    int nounIndex = rand() % NUM_NOUNS;

    sprintf(wifiName, "%s_%s", adjectives[adjIndex], nouns[nounIndex]);
}

int main() {
    srand(time(NULL)); // Seed the random number generator

    for (int i = 0; i < 10; i++) {
        char wifiName[50];
        generateWiFiName(wifiName);
        printf("Generated WiFi Name: %s\n", wifiName);
    }

    return 0;
}
