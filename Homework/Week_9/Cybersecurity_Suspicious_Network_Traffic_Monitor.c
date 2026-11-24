#include <stdio.h>
int Traffic;
int Normal_Traffic = 0;
int Suspicious_Traffic = 0;
int Blocked_Devices = 0;
int main(){
    for(int i = 1; i <=3; i++){
        for(int j = 1; j <= 5; j++){
            printf("Please Enter The Device %d.%d traffic value: ", i, j);
            scanf("%d", &Traffic);
            while (Traffic < 0){
                printf("Invalid traffic value! Please enter a valid traffic value: ");
                scanf("%d", &Traffic);
            }
            if(Traffic <= 500){
                printf("Device %d.%d traffic is normal.\n", i, j);
                Normal_Traffic++;
            }
            else if(Traffic >= 501 && Traffic <= 1000){
                printf("Device %d.%d traffic is suspicious.\n", i, j);
                Suspicious_Traffic++;
            }
            else if(Traffic > 1000){
                printf("Device %d.%d traffic is critical. Device Blocked!\n", i, j);
                Blocked_Devices++;
                break;
            }
        }
    }
    printf("Summary:\n");
    printf("Normal Traffic: %d\n", Normal_Traffic);
    printf("Suspicious Traffic: %d\n", Suspicious_Traffic);
    printf("Blocked Devices: %d\n", Blocked_Devices);
}