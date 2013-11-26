/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <UIKit/UIView.h>

@interface UnreadBubbleCount : UIView {

	CGSize _textSize;
	BOOL _isSelected;
	int _count;

}

@property (assign,nonatomic) int count;                    //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL isSelected;              //@synthesize isSelected=_isSelected - In the implementation block
+(long)initImageCache;
+(void)deallocImageCache;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(int)count;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setCount:(int)arg1 ;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)calculateTextMetrics;
@end
