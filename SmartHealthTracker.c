#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    float weight, pressure, sugar, heartRate;
    FILE *file;

    printf("=== Smart Health Tracker ===\n\n");

    // Input data
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    printf("Enter your blood pressure (mmHg): ");
    scanf("%f", &pressure);

    printf("Enter your blood sugar level (mg/dl): ");
    scanf("%f", &sugar);

    printf("Enter your heart rate (beats per minute): ");
    scanf("%f", &heartRate);

    printf("\n=== Health Analysis ===\n");

    // Blood pressure analysis
    if (pressure < 90)
        printf("⚠️ Your blood pressure is low. Drink some water and rest.\n");
    else if (pressure > 140)
        printf("⚠️ Your blood pressure is high. Consider consulting a doctor.\n");
    else
        printf("✅ Your blood pressure is normal.\n");

    // Blood sugar analysis
    if (sugar < 70)
        printf("⚠️ Your blood sugar is low. Eat or drink something sweet.\n");
    else if (sugar > 140)
        printf("⚠️ Your blood sugar is high. Avoid sugary foods and monitor it.\n");
    else
        printf("✅ Your blood sugar level is normal.\n");

    // Heart rate analysis
    if (heartRate < 60)
        printf("⚠️ Your heart rate is a bit low. Consider visiting a doctor.\n");
    else if (heartRate > 100)
        printf("⚠️ Your heart rate is high. Try to relax.\n");
    else
        printf("✅ Your heart rate is normal.\n");

    // Save report to file
    file = fopen("health_report.txt", "a");
    if (file == NULL) {
        printf("❌ Error opening file.\n");
        return 1;
    }

    fprintf(file, "Age: %d | Weight: %.1f | Pressure: %.1f | Sugar: %.1f | Heart Rate: %.1f\n", 
            age, weight, pressure, sugar, heartRate);
    fclose(file);

    printf("\n📁 Your health report has been saved to 'health_report.txt'\n");

    printf("\nThank you for using Smart Health Tracker ❤️\n");

    return 0;
}

