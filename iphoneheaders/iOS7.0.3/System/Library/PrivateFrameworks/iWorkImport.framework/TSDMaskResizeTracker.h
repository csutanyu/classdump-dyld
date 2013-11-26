/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRepTracker.h>
#import <iWorkImport/TSDLayoutManipulatingTracker.h>

@protocol TSDRepTrackerDelegate;
@class TSDImageRep, ;

@interface TSDMaskResizeTracker : NSObject <TSDRepTracker, TSDLayoutManipulatingTracker> {

	TSDImageRep* mImageRep;
	float mSliderValue;
	CGPoint mCenterInParentSpace;
	<TSDRepTrackerDelegate>* mDelegate;

}

@property (assign,nonatomic) float sliderValue; 
@property (assign,nonatomic) BOOL isInspectorDrivenTracking; 
-(void)changeDynamicLayoutsForReps:(id)arg1 ;
-(BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1 ;
-(CGAffineTransform)p_currentResizeTransform;
-(BOOL)isInspectorDrivenTracking;
-(void)setIsInspectorDrivenTracking:(BOOL)arg1 ;
-(void)commitChangesForReps:(id)arg1 ;
-(BOOL)supportsAlignmentGuides;
-(BOOL)operationShouldBeDynamic;
-(void)willBeginDynamicOperationForReps:(id)arg1 ;
-(id)initWithImageRep:(id)arg1 ;
-(CGAffineTransform)transformForImageKnobPosition;
-(float)sliderValue;
-(void)setSliderValue:(float)arg1 ;
-(void)dealloc;
@end
