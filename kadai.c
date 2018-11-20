#include<stdio.h>
#include<math.h>

void sort(double a[], int n) {
	int i, j;
	double t;
	for (i = 0; i<n - 1; i++) {
		for (j = n - 1; j>i; j--) {
			if (a[j - 1]>a[j]) {
				t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
	}
}

int main() {
	double sci[20] = {
		65, 80, 67, 35, 58, 60, 72, 75, 68, 92, 36, 50, 2, 58.5, 46, 42, 78, 62, 84, 70
	};
	double eng[20] = {
		44, 87, 100, 63, 52, 60, 58, 73, 55, 86, 29, 56, 89, 23, 65, 84, 64, 27, 86, 84
	};
	double totsci = 0, toteng = 0;
	double suma = 0, sumb = 0;
	double avesci = 0, aveeng = 0;
	double devsci = 0, deveng = 0;
	double valsci[20] = { 0 };
	double valeng[20] = { 0 };
	int i;

	for (i = 0; i < 20; i++) {
		totsci += sci[i];
		toteng += eng[i];
		suma += sci[i] * sci[i];
		sumb += eng[i] * eng[i];
	}
	avesci = totsci / 20;
	aveeng = toteng / 20;

	devsci = sqrt(suma / 20 - avesci * avesci);
	deveng = sqrt(sumb / 20 - aveeng * aveeng);

	printf("���ȕ��ρF%.3f,�p�ꕽ�ρF%.3f\n", avesci, aveeng);
	printf("���ȕ΍��F%.3f,�p��΍��F%.3f\n", devsci, deveng);
	printf("���ȍ��v�F%.1f,�p�ꍇ�v�F%.1f\n", totsci, toteng);

	printf("�΍��l�F\n");
	for (i = 0; i < 20; i++) {
		valsci[i] = 50 + 10 * (sci[i] - avesci) / devsci;
		valeng[i] = 50 + 10 * (eng[i] - aveeng) / deveng;
		printf("%.3f, %.3f\n", valsci[i], valeng[i]);
	}

	sort(sci, 20);
	sort(eng, 20);
	printf("���ȃ\�[�g�F");
	for (i = 0; i < 20; i++) {
		printf("%.1f ",sci[i]);
	}
	printf("\n");
	printf("�p��\�[�g�F");
	for (i = 0; i < 20; i++) {
		printf("%.1f ", eng[i]);
	}
	printf("\n");
	return 0;
}