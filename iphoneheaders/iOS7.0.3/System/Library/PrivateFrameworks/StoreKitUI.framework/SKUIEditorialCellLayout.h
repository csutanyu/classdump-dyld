/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICellLayout.h>
#import <StoreKitUI/SKUIEditorialLinkViewDelegate.h>

@class SKUIEditorialLinkView, SKUITextBoxView;

@interface SKUIEditorialCellLayout : SKUICellLayout <SKUIEditorialLinkViewDelegate> {

	UIEdgeInsets _contentInset;
	float _linkSpacing;
	SKUIEditorialLinkView* _linkView;
	SKUITextBoxView* _textBoxView;
	float _totalHeight;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                    //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) SKUITextBoxView * textBoxView; 
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)applyEditorialLayout:(id)arg1 withOrientation:(int)arg2 expanded:(BOOL)arg3 ;
-(id)textBoxView;
-(void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2 ;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(id)_textBoxView;
-(void)_initSKUIEditorialCellLayout;
-(id)_linkView;
-(void).cxx_destruct;
@end
