//
//  AnimationViewController.m
//  CurseWork
//
//  Created by KonstEmelyantsev on 6/22/16.
//  Copyright © 2016 KonstEmelyantsev. All rights reserved.
//

#import "AnimationViewController.h"

@interface AnimationViewController ()

{
    UIView *headView;
    UIView *leftPalm, *rightPalm;
}

@end

@implementation AnimationViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)moveHead:(cv::Rect)rect {
    [UIView animateWithDuration:0.1 animations:^{
        headView.center = CGPointMake(rect.x + rect.width / 2, rect.y + rect.height / 2);
    }];
    [self redrawLines];
}

- (void)movePalm:(cv::Rect)rect {
    CGPoint center = CGPointMake(rect.x + rect.width / 2, rect.y + rect.height / 2);
    if (center.x < rightPalm.center.x) {
        leftPalm.center = center;
    } else {
        rightPalm.center = center;
    }
    [self redrawLines];
}

- (void)redrawLines {
    
}

@end
