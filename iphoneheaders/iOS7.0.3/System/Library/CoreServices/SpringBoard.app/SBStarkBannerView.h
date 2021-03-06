/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBStarkBannerItemObserver.h>
#import <SpringBoard/SBUIBannerView.h>

@class SBUIBannerContext, SBStarkBannerItem, UIImageView, UILabel, UIColor;

@interface SBStarkBannerView : UIView <SBStarkBannerItemObserver, SBUIBannerView> {

	SBUIBannerContext* _context;
	SBStarkBannerItem* _bannerItem;
	UIImageView* _categoryImageView;
	UILabel* _titleLabel;
	float _titleAscender;
	UILabel* _subTitleLabel;
	float _subTitleAscender;
	UIImageView* _actionImageView;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,copy) UIColor * grabberColor; 
+(id)_imageForActionType:(int)arg1 ;
+(UIEdgeInsets)_contentInsetsForActionType:(int)arg1 ;
-(id)bannerContext;
-(void)starkBannerItemDidReloadDisplayProperties:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithContext:(id)arg1 ;
@end

