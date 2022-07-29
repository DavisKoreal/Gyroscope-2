//source : https://en.wikipedia.org/wiki/Quantum_gyroscope
/*A quantum gyroscope is a very sensitive device to measure angular rotation based on quantum mechanical principles*/

#include <cmath>
const double PI = 3.141592653589;

double returnangle(double& omega, double& areavector, double& heliumcirc) {
	return(cos(PI) * (((2 * omega) * areavector) / heliumcirc));
}

