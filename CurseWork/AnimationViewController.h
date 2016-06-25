//
//  AnimationViewController.h
//  CurseWork
//
//  Created by KonstEmelyantsev on 6/22/16.
//  Copyright © 2016 KonstEmelyantsev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <opencv2/highgui/cap_ios.h>
#import <opencv2/objdetect/objdetect.hpp>
#import <opencv2/imgproc/imgproc_c.h>
#import <opencv2/imgproc/imgproc.hpp>

#import <opencv2/video/video.hpp>
#import <opencv2/highgui/highgui.hpp>

@interface AnimationViewController : UIViewController

- (void)moveHead:(cv::Rect)rect;
- (void)movePalm:(cv::Rect)rect;
- (void)moveShoulder:(cv::Rect)rect;
- (void)moveCubit:(cv::Rect)rect;
- (void)moveElbow:(cv::Rect)rect;
- (void)moveBelt:(cv::Rect)rect;
- (void)moveFeet:(cv::Rect)rect;

@end
