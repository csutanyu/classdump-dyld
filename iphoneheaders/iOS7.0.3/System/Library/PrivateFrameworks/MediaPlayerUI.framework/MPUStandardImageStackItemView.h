/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MediaPlayerUI/MPUStackItemView.h>

@class _MPUBorderView, UIImageView, UIColor, UIImage;

@interface MPUStandardImageStackItemView : MPUStackItemView {

	_MPUBorderView* _borderView;
	UIImageView* _imageView;
	float _dropShadowAlpha;
	UIColor* _dropShadowColor;
	unsigned _dropShadowEdges;
	float _dropShadowWidth;
	UIImage* _image;
	float _imageAlpha;
	float _overlayBorderWidth;
	float _overlayBorderAlpha;
	UIColor* _overlayBorderColor;
	float _overlayCenterAlpha;
	UIColor* _overlayCenterColor;
	CGRect _imageContentsRect;
	CGAffineTransform _imageTransform;

}

@property (assign,nonatomic) float dropShadowAlpha;                         //@synthesize dropShadowAlpha=_dropShadowAlpha - In the implementation block
@property (nonatomic,retain) UIColor * dropShadowColor;                     //@synthesize dropShadowColor=_dropShadowColor - In the implementation block
@property (assign,nonatomic) unsigned dropShadowEdges;                      //@synthesize dropShadowEdges=_dropShadowEdges - In the implementation block
@property (assign,nonatomic) float dropShadowWidth;                         //@synthesize dropShadowWidth=_dropShadowWidth - In the implementation block
@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) float imageAlpha;                              //@synthesize imageAlpha=_imageAlpha - In the implementation block
@property (assign,nonatomic) CGRect imageContentsRect;                      //@synthesize imageContentsRect=_imageContentsRect - In the implementation block
@property (assign,nonatomic) CGAffineTransform imageTransform;              //@synthesize imageTransform=_imageTransform - In the implementation block
@property (assign,nonatomic) float overlayBorderWidth;                      //@synthesize overlayBorderWidth=_overlayBorderWidth - In the implementation block
@property (assign,nonatomic) float overlayBorderAlpha;                      //@synthesize overlayBorderAlpha=_overlayBorderAlpha - In the implementation block
@property (nonatomic,retain) UIColor * overlayBorderColor;                  //@synthesize overlayBorderColor=_overlayBorderColor - In the implementation block
@property (assign,nonatomic) float overlayCenterAlpha;                      //@synthesize overlayCenterAlpha=_overlayCenterAlpha - In the implementation block
@property (nonatomic,retain) UIColor * overlayCenterColor;                  //@synthesize overlayCenterColor=_overlayCenterColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)image;
-(void)setDropShadowAlpha:(float)arg1 ;
-(void)_updateForBorderViewChange;
-(float)dropShadowAlpha;
-(unsigned)dropShadowEdges;
-(float)dropShadowWidth;
-(float)imageAlpha;
-(CGRect)imageContentsRect;
-(float)overlayBorderWidth;
-(float)overlayBorderAlpha;
-(id)overlayBorderColor;
-(float)overlayCenterAlpha;
-(id)overlayCenterColor;
-(void)setOverlayCenterAlpha:(float)arg1 ;
-(void)setOverlayBorderAlpha:(float)arg1 ;
-(void)setOverlayBorderWidth:(float)arg1 ;
-(void)setOverlayBorderColor:(id)arg1 ;
-(void)setOverlayCenterColor:(id)arg1 ;
-(void)setImageAlpha:(float)arg1 ;
-(void)setImageContentsRect:(CGRect)arg1 ;
-(void)setDropShadowEdges:(unsigned)arg1 ;
-(void)setDropShadowWidth:(float)arg1 ;
-(void)setImageTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)imageTransform;
-(id)dropShadowColor;
-(void)setDropShadowColor:(id)arg1 ;
-(void).cxx_destruct;
@end
