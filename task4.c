#include <stdio.h>

int main(void) {
	double accuracy, latency;
	int approvalStatus, canDeploy = 1;

	printf("Enter model accuracy (%%): ");
	scanf("%lf", &accuracy);
	printf("Enter prediction latency (milliseconds): ");
	scanf("%lf", &latency);
	printf("Enter model approval status (1 = Approved, 0 = Not Approved): ");
	scanf("%d", &approvalStatus);

	if (accuracy < 90.0) {
		printf("Accuracy too low\n");
		canDeploy = 0;
	}
	if (latency > 100.0) {
		printf("Latency too high\n");
		canDeploy = 0;
	}
	if (approvalStatus != 1) {
		printf("Model not approved\n");
		canDeploy = 0;
	}

	if (canDeploy)
		printf("Model can be deployed\n");

	return 0;
}
