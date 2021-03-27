#include <iostream>
using namespace std;

class Car {
private:
	int gasolineGauge;
public:
	Car(): gasolineGauge(100) {
		cout<<"Car()"<<endl;
	}
	
	Car(int n): gasolineGauge(n) {
		cout<<"Car(int n)"<<endl;
	}
	
	int GetGasGauge() {
		return gasolineGauge;
	}
};

class HybridCar : public Car {
private:
	int electricGauge;
public:
	HybridCar(): Car(), electricGauge(50) {
		cout<<"HybridCar()"<<endl;
	}
	
	HybridCar(int n): Car(n), electricGauge(n) {
		cout<<"HybridCar(int n)"<<endl;
	}
	
	HybridCar(int a, int b): Car(a), electricGauge(b) {
		cout<<"HybridCar(int a, int b)"<<endl;
	}

	int GetElecGauge() {
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar {
private:
	int waterGauge;
public:
	HybridWaterCar(): HybridCar(), waterGauge(100) {
		cout<<"HybridWaterCar()"<<endl;
	}
	
	HybridWaterCar(int n): HybridCar(n), waterGauge(100) {
		cout<<"HybridWaterCar(int n)"<<endl;
	}
	
	HybridWaterCar(int a, int b): HybridCar(a,b), waterGauge(100) {
		cout<<"HybridWaterCar(int a, int b)"<<endl;
	}
	
	HybridWaterCar(int a, int b, int c): HybridCar(a,b), waterGauge(c) {
		cout<<"HybridWaterCar(int a, int b, int c)"<<endl;
	}
	void ShowCurrentGauge() {
		cout<<"잔여 가솔린: "<<GetGasGauge()<<endl;
		cout<<"잔여 전기량: "<<GetElecGauge()<<endl;
		cout<<"잔여 워터량: "<<waterGauge<<endl<<endl;
	}
};

int main(){
	HybridWaterCar hwc1;
	hwc1.ShowCurrentGauge();
	
	HybridWaterCar hwc2(30);
	hwc2.ShowCurrentGauge();
	
	HybridWaterCar hwc3(30,40);
	hwc3.ShowCurrentGauge();
	
	HybridWaterCar hwc4(30,40,50);
	hwc4.ShowCurrentGauge();
    
    return 0;

}
