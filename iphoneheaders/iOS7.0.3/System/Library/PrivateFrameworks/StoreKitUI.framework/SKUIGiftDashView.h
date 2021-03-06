/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface SKUIGiftDashView : UIView {

	UIColor* _dashColor;
	CGSize _dashSize;
	float _dashSpacing;

}

@property (nonatomic,copy) UIColor * dashColor;              //@synthesize dashColor=_dashColor - In the implementation block
@property (assign,nonatomic) CGSize dashSize;                //@synthesize dashSize=_dashSize - In the implementation block
@property (assign,nonatomic) float dashSpacing;              //@synthesize dashSpacing=_dashSpacing - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setDashColor:(id)arg1 ;
-(void)setDashSize:(CGSize)arg1 ;
-(void)setDashSpacing:(float)arg1 ;
-(id)dashColor;
-(CGSize)dashSize;
-(float)dashSpacing;
-(void).cxx_destruct;
@end

