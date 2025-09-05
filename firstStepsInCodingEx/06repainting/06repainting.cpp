#include <iostream>

using namespace std;

int main() {

	double priceNylonPerMSq = 1.5;
	double pricePaintPerLiter = 14.5;
	double pricePaintSolventPerLitre = 5.0;
	double bagsPrice = 0.4;
	
	int qtyNylon;
	int qtyPaint;
	int qtySolution;
	int hoursForJob;
	double labourCost;
	double priceMaterials;
	double totalPrice;
	double qtyPaintExtra;

	cin >> qtyNylon;
	cin >> qtyPaint;
	cin >> qtySolution;
	cin >> hoursForJob;

	qtyNylon = qtyNylon + 2;
	qtyPaintExtra = qtyPaint + (qtyPaint * 0.1);

	priceMaterials =
		(priceNylonPerMSq * qtyNylon) +
		(pricePaintPerLiter * qtyPaintExtra) +
		(pricePaintSolventPerLitre * qtySolution) +
		bagsPrice;

	labourCost = (priceMaterials * 0.3) * hoursForJob;
	totalPrice = priceMaterials + labourCost;

	cout << totalPrice << endl;
	return 0;
}