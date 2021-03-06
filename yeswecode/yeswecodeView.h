//
//  yeswecodeView.h
//  yeswecode
//
//  Created by Britt Selvitelle on 9/29/12.
//  Copyright (c) 2012 Britt Selvitelle. All rights reserved.
//

#import <ScreenSaver/ScreenSaver.h>

@interface yeswecodeView : ScreenSaverView {
}

@property (nonatomic, assign) NSString *happyOrSad;

@property (nonatomic, assign) NSImageView *octoImageView;
@property (nonatomic, assign) NSTextField *timeLeftLabel;

@property (nonatomic) NSInteger colorState;
@property (nonatomic, strong) NSMutableArray *finalRedToBlue;
@property (nonatomic, strong) NSMutableArray *finalBlueToRed;

@property (nonatomic) float currentRed;
@property (nonatomic) float currentGreen;
@property (nonatomic) float currentBlue;

@property (nonatomic, strong) NSMutableArray *currentStepSizes;
@property (nonatomic) double redStep;
@property (nonatomic) double greenStep;
@property (nonatomic) double blueStep;

@property (nonatomic) int delayTick;

@end
