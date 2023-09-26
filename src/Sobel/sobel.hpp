#pragma once

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

namespace sobel {
	void convertImg(cv::Mat* in, cv::Mat * out);
}
