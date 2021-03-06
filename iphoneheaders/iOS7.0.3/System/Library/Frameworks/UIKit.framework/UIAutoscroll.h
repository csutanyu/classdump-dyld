/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol UIAutoscrollContainer;
#import <UIKit/UIKit-Structs.h>
@class UIView, NSTimer;

@interface UIAutoscroll : NSObject {

	id m_target;
	CGPoint m_point;
	UIView<UIAutoscrollContainer>* m_scrollContainer;
	int m_directions;
	double m_repeatInterval;
	NSTimer* m_timer;
	unsigned m_count;
	BOOL m_active;

}

@property (nonatomic,retain) id target; 
@property (nonatomic,retain) UIView<UIAutoscrollContainer> * scrollContainer; 
@property (assign,nonatomic) CGPoint point; 
@property (assign,nonatomic) int directions; 
@property (assign,nonatomic) double repeatInterval; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) BOOL active; 
-(void)dealloc;
-(unsigned)count;
-(void)invalidate;
-(void)setTarget:(id)arg1 ;
-(void)setRepeatInterval:(double)arg1 ;
-(id)target;
-(void)setCount:(unsigned)arg1 ;
-(BOOL)active;
-(BOOL)startAutoscroll:(id)arg1 scrollContainer:(id)arg2 point:(CGPoint)arg3 directions:(int)arg4 repeatInterval:(double)arg5 ;
-(int)directions;
-(CGPoint)point;
-(void)timerFired:(id)arg1 ;
-(id)scrollContainer;
-(double)repeatInterval;
-(void)setPoint:(CGPoint)arg1 ;
-(void)setScrollContainer:(id)arg1 ;
-(void)setDirections:(int)arg1 ;
-(void)setActive:(BOOL)arg1 ;
@end

