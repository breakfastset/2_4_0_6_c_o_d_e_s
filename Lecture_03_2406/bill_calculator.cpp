#include "bill_calculator.h"


void printBill(float amount) {
    float serviceChargeRate = SERVICE_CHARGE_RATE * amount;
    float serviceChargeGST = serviceChargeRate * GST;
    float consumptionGST = amount * GST;
    float total = serviceChargeGST + consumptionGST + amount;
    cout << "Amount spent: $" << amount << endl;
    cout << "Service Charge: $" << serviceChargeRate << endl;
    cout << "GST: $" << serviceChargeGST + consumptionGST << endl;
    cout << "Total: $" << total << endl;
}