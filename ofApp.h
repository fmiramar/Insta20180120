#pragma once
#include "ofMain.h"
#include "ofxBullet.h"

#include "opencv2/opencv.hpp"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key) {};
	void keyReleased(int key) {};
	void mouseMoved(int x, int y) {};
	void mouseDragged(int x, int y, int button) {};
	void mousePressed(int x, int y, int button) {};
	void mouseReleased(int x, int y, int button) {};
	void windowResized(int w, int h) {};
	void dragEvent(ofDragInfo dragInfo) {};
	void gotMessage(ofMessage msg) {};

	ofEasyCam cam;
	ofLight light;

	cv::VideoCapture cap;
	static const int frame_number = 120;
	cv::Mat save_frame[frame_number];

	cv::Mat blend_frame;
	ofImage blend_image;

	cv::Mat wipe_frame;
	ofImage wipe_image;
};