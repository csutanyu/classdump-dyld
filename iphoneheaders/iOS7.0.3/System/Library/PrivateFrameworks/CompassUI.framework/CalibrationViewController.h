/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CompassUI/CompassUI-Structs.h>
#import <UIKit/UIViewController.h>

@class CompassBackgroundView, CAShapeLayer, UILabel, CalibrationBallView;

@interface CalibrationViewController : UIViewController {

	CompassBackgroundView* _compassBackgroundView;
	CAShapeLayer* _compassBackgroundViewMask;
	UILabel* _instructionLabel;
	UILabel* _titleLabel;
	CalibrationBallView* _ballView;
	CGPoint _compassOriginPoint;
	float* _ticsShowingArray;
	double _angleToRim;
	double _angleOfAwesome;
	int _quantizationType;
	double _previousTimestamp;
	double _startTicAngle;
	BOOL _ignoreMotionUpdates;
	BOOL _shouldFillTics;
	BOOL _shouldCompleteTics;
	double _previousHorizontalAngle;
	Vec3Imp<double> _previousGravity;
	unsigned _numCompleteTics;
	float _compassRadius;

}
-(void)userDefaultsChanged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)preferredStatusBarStyle;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(id).cxx_construct;
-(void)reset;
-(id)initWithOriginPoint:(CGPoint)arg1 ;
-(id)updatedMaskingPath;
-(void)hideAllTics;
-(void)updateMaskingPath;
-(float)quantizedPercentage:(double)arg1 ;
-(void)showTicsBetweenStartAngle:(double)arg1 endAngle:(double)arg2 withCredit:(double)arg3 ;
-(double)_correctedAngleForCurrentOrientation:(double)arg1 ;
-(void)setBallAngle:(double)arg1 tiltAngle:(double)arg2 ;
-(void)showTicAtAngle:(double)arg1 withCredit:(double)arg2 ;
-(BOOL)circleIsCompleted;
-(void)setMotion:(id)arg1 ;
-(double)completeCircle;
@end
