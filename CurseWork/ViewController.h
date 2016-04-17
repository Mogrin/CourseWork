//
//  ViewController.h
//  CurseWork
//
//  Created by KonstEmelyantsev on 4/17/16.
//  Copyright © 2016 KonstEmelyantsev. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <opencv2/highgui/cap_ios.h>
#import <opencv2/objdetect/objdetect.hpp>
#import <opencv2/imgproc/imgproc_c.h>
#import <opencv2/imgproc/imgproc.hpp>

using namespace cv;

@interface ViewController : UIViewController <CvVideoCameraDelegate>
{
    IBOutlet UIImageView* imageView;
    
    CvVideoCamera* videoCamera;
    CascadeClassifier faceCascade;
}

@property (nonatomic, retain) CvVideoCamera* videoCamera;

- (IBAction)startCamera:(id)sender;
- (IBAction)stopCamera:(id)sender;


@end

