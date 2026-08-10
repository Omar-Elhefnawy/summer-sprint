#include <stdio.h>

struct Sensor {
    int   id;
    float temperature;
};

int main(void) {
    struct Sensor s;
    s.id = 676767;
    s.temperature = 26.54;
    printf("Sensor number: %d reads: %.2f\n", s.id, s.temperature);
    struct Sensor *ptr = &s;
    printf("Sensor number: %d reads: %.2f\n", ptr->id, ptr->temperature);
    ptr->temperature = 30.8; // or (*ptr).temperature
    printf("Sensor number: %d reads: %.2f\n", ptr->id, ptr->temperature);
    return 0;
}
