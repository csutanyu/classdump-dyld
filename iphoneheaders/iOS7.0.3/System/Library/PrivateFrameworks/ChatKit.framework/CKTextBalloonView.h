/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>

@class CKBalloonTextView, NSAttributedString;

@interface CKTextBalloonView : CKColoredBalloonView {

	BOOL _centerTextWhenSkinny;
	CKBalloonTextView* _textView;
	NSAttributedString* _attributedText;

}

@property (nonatomic,retain) CKBalloonTextView * textView;                   //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) BOOL containsHyperlink; 
@property (assign,nonatomic) BOOL centerTextWhenSkinny;                      //@synthesize centerTextWhenSkinny=_centerTextWhenSkinny - In the implementation block
@property (nonatomic,readonly) BOOL isInteractingWithLink; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)description;
-(void)setAttributedText:(id)arg1 ;
-(id)attributedText;
-(void)prepareForReuse;
-(void)setTextView:(id)arg1 ;
-(BOOL)isInteractingWithLink;
-(id)textView;
-(void)prepareForDisplay;
-(void)tap:(id)arg1 forEvent:(id)arg2 ;
-(void)doubleTap:(id)arg1 forEvent:(id)arg2 ;
-(void)longPress:(id)arg1 forEvent:(id)arg2 ;
-(void)touchDown:(id)arg1 forEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)configureForMessagePart:(id)arg1 ;
-(void)setContainsHyperlink:(BOOL)arg1 ;
-(BOOL)containsHyperlink;
-(void)setCenterTextWhenSkinny:(BOOL)arg1 ;
-(float)textViewWidthForWidth:(float)arg1 ;
-(float)textViewOffsetBetweenNormalAndSkinny:(CGRect)arg1 ;
-(void)touchUpOutside:(id)arg1 forEvent:(id)arg2 ;
-(void)touchUpInside:(id)arg1 forEvent:(id)arg2 ;
-(void)touchDraggedInside:(id)arg1 forEvent:(id)arg2 ;
-(void)touchCanceled:(id)arg1 ;
-(BOOL)centerTextWhenSkinny;
-(CGRect)_textFrameForBounds:(CGRect)arg1 forceSkinny:(BOOL)arg2 ;
@end

