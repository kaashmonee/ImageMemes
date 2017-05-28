/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: skanda
 *
 * Created on April 16, 2017, 10:27 PM
 */

#include <cstdlib>
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>

using namespace std;
using namespace cv;

/*
 * 
 */
int main(int argc, char** argv) {
    Mat image;
    image = imread("/home/skanda/Documents/ImageMemes/images/image1.png", CV_LOAD_IMAGE_COLOR);
    
    if (!image.data) {
        cout<<"Couldn't find image.";
        return -1;
    }
    
    namedWindow("window", CV_WINDOW_AUTOSIZE); //creates a window to show the image
    imshow("window", image); //shows the image inside of the window
    imwrite("/home/skanda/Documents/ImageMemes/images/result.png", image); //stores the image as image.png
    waitKey(0); //i think this is the enter key
    return 0;
}

