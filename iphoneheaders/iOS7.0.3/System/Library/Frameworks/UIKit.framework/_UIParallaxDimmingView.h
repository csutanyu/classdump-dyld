/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIColor, UIView;

@interface _UIParallaxDimmingView : UIView {

	UIImageView* leftEdgeFade;
	BOOL _backgroundIsDimmed;
	UIColor* _dimmingColor;
	UIView* _addingSubview;

}

@property (nonatomic,retain) UIColor * dimmingColor;               //@synthesize dimmingColor=_dimmingColor - In the implementation block
@property (assign,nonatomic) BOOL backgroundIsDimmed;              //@synthesize backgroundIsDimmed=_backgroundIsDimmed - In the implementation block
@property (nonatomic,retain) UIView * addingSubview;               //@synthesize addingSubview=_addingSubview - In the implementation block
+(id)newDimmingViewWithFrame:(CGRect)arg1 ;
+(id)newDimmingViewWrappingView:(id)arg1 withLeftBorder:(float)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setBackgroundIsDimmed:(BOOL)arg1 ;
-(void)crossFade;
-(void)setDimmingColor:(id)arg1 ;
-(id)dimmingColor;
-(void)setAddingSubview:(id)arg1 ;
-(id)initViewWrappingView:(id)arg1 withLeftBorder:(float)arg2 ;
-(id)addingSubview;
-(BOOL)backgroundIsDimmed;
-(id)defaultBorderColor;
-(id)_basicAnimationWithKeyPath:(id)arg1 ;
@end

