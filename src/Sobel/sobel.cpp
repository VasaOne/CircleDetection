#include "sobel.hpp"

int Gx [3][3] = { {-1,0,1},
		   {-2, 0, 2},
		   {-1, 0, 1} };
int Gy [3][3] = { {1, 2, 1},
		   {0, 0, 0},
		   {-1, -2, -1} };

int convolution(int A[][], int B[][] ) {
	int result = 0;
	for (int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			result += A[i][j] * B[i][j];
		}
	}
}

void create_block (int A[][], cv::Mat img, int x, int y){
	for (int i = -1; i<2; i++){
		for(int j = -1; j<2; j++){
			A[x+i][y+j] = img.at<Vec3b>(x+i, y+j);
		}
	}
	return;
}


void sobel::convertImg(cv::Mat* in, cv::Mat * out){

	return; 
}
