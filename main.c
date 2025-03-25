/*
 * 🚨 WARNING: CHALLENGE MODE ACTIVATED 🚨
 * 
 * 1️⃣ Sit back, take a deep breath, and **THINK**.
 * 2️⃣ For the next **10 minutes**, avoid using **Gen AI, ChatGPT, or any shortcuts**.
 * 3️⃣ Trust your **brain**—you’re smarter than you think!
 * 4️⃣ Consider yourself a **LOSER** if you cheat. Seriously, promise yourself you won't. 😤
 * 5️⃣ If you solve it on your own, **you WIN** and level up as a true programmer and come and meet me ! 
 * 
 * 
 * 💡 Remember: The best coders aren’t the ones who copy-paste. They are the ones who **struggle, think, fail, and then succeed.** 
 *    
 * Now, write your code! You got this! 💪🔥
 */

#include <stdio.h>

#define MAX_ROOMS 5  //  max number of rooms

// Function prototypes
void initializeSystem(int numRooms, int lights[], int temperatures[], int motion[], int locks[]);
void displayMenu();
void controlLights(int numRooms, int lights[]);
void readTemperature(int numRooms, int temperatures[]);
void detectMotion(int numRooms, int motion[]);
void securitySystem(int numRooms, int locks[]);
void analyzeHouseStatus(int numRooms, int lights[], int temperatures[], int motion[], int locks[]);

int main() {
    int numRooms;
    int lights[MAX_ROOMS];
    int temperatures[MAX_ROOMS];
    int motion[MAX_ROOMS];
    int locks[MAX_ROOMS];
    printf("Enter number of rooms: ");
    scanf("%d", &numRooms);
    int choice;
    switch (choice) {
        case 1:
            controlLights(numRooms, lights);
            break;
        case 2:
            readTemperature(numRooms, temperatures);
            break;
        case 3:
            detectMotion(numRooms, motion);
            break;
        case 4:
            securitySystem(numRooms, locks);
            break;
        case 5:
            analyzeHouseStatus(numRooms, lights, temperatures, motion, locks);
            break;
        case 6:
            printf("Exiting...\n")
    default:       
    printf("Invalid choice. Please try again.\n");
        }

        return 0;
   
}

 
void initializeSystem(int numRooms, int lights[], int temperatures[], int motion[], int locks[]) {
    for (int i = 0; i < numRooms; i++) {
        lights[i] = 0; // Lights OFF
        temperatures[i] = 22; // Default temperature
        motion[i] = 0; // No motion detected
        locks[i] = 1; // Doors Locked
  
}
printf("System initialized.\n");

void displayMenu() {
    printf("\n===== Smart Home Menu =====\n");
    printf("1. Toggle Light\n");
    printf("2. Read Temperature\n");
    printf("3. Check Motion Sensor\n");
    printf("4. Lock/Unlock Security System\n");
    printf("5. House Status Summary\n");
    printf("6. Exit\n");
   
}
void controlLights(int numRooms, int lights[]) {
    int room;
    printf("Enter room number to toggle light (1-%d): ", numRooms);
    scanf("%d", &room);
    if (room >= 1 && room <= numRooms) {
        lights[room - 1] = !lights[room - 1]; // Toggle light state
        printf("Light in Room %d is now %s.\n", room, lights[room - 1] ? "ON" : "OFF");
    } else {
        printf("Invalid room number.\n");
    }

}
void readTemperature(int numRooms, int temperatures[]) {
    int room;
    printf("Enter room number to read temperature (1-%d): ", numRooms);
    scanf("%d", &room);
    if (room >= 1 && room <= numRooms) {
        printf("Temperature in Room %d: %d°C\n", room, temperatures[room - 1]);
    } else {
        printf("Invalid room number.\n");
    }

}
void detectMotion(int numRooms, int motion[]) {
    for (int i = 0; i < numRooms; i++) {
        if (motion[i]) {
            printf("Motion detected in Room %d.\n", i + 1);
        }
    }
    

}
void securitySystem(int numRooms, int locks[]) {
    int room;
    printf("Enter room number to lock/unlock (1-%d): ", numRooms);
    scanf("%d", &room);
    if (room >= 1 && room <= numRooms) {
        locks[room - 1] = !locks[room - 1]; // Toggle lock state
        printf("Room %d is now %s.\n", room, locks[room - 1] ? "Locked" : "Unlocked");
    } else {
        printf("Invalid room number.\n");
    }

}
void analyzeHouseStatus(int numRooms, int lights[], int temperatures[], int motion[], int locks[]) {
    printf("House Status:\n");
    for (int i = 0; i < numRooms; i++) 
    {
        printf("- Room %d: Light %s");
    }

}
