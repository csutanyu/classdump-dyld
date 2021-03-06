/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>

@class UILabel, MFHeaderLabelView;

@interface MFComposeMultiView : MFComposeHeaderView {

	UILabel* _accountLabel;
	MFHeaderLabelView* _imageSizeHeaderLabelView;
	UILabel* _imageSizeLabel;
	UILabel* _placeholderImageSizeLabel;
	BOOL _imageSizeShown;
	BOOL _accountAutoselected;

}

@property (assign,getter=isAccountAutoselected,nonatomic) BOOL accountAutoselected;              //@synthesize accountAutoselected=_accountAutoselected - In the implementation block
-(void)refreshPreferredContentSize;
-(void)setImageSizeDescription:(id)arg1 ;
-(void)setShowsImageSize:(BOOL)arg1 ;
-(void)setAccountAutoselected:(BOOL)arg1 ;
-(id)accountLabel;
-(id)imageSizeLabel;
-(id)imageSizeHeaderLabelView;
-(id)placeholderImageSizeLabel;
-(BOOL)isAccountAutoselected;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAccountDescription:(id)arg1 ;
-(CGColorRef)labelColor;
@end

