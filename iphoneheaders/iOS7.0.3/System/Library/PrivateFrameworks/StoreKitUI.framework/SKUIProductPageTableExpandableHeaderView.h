/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, UIView, SKUIColorScheme, NSString, UIColor;

@interface SKUIProductPageTableExpandableHeaderView : UIControl {

	UILabel* _actionLabel;
	UIView* _bottomBorderView;
	UILabel* _titleLabel;
	UIView* _topBorderView;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,copy) NSString * actionString; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,copy) UIColor * bottomBorderColor; 
@property (nonatomic,copy) UIColor * topBorderColor; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)actionString;
-(void)setActionString:(id)arg1 ;
-(void).cxx_destruct;
-(void)setBottomBorderColor:(id)arg1 ;
-(void)setTopBorderColor:(id)arg1 ;
-(id)bottomBorderColor;
-(id)topBorderColor;
@end

