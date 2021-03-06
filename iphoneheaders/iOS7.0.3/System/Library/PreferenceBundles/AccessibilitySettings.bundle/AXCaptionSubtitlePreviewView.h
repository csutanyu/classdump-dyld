/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class NSString;

@interface AXCaptionSubtitlePreviewView : UIImageView {

	BOOL _landscape;
	NSString* text;

}

@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) BOOL landscape;               //@synthesize landscape=_landscape - In the implementation block
-(void)didMoveToWindow;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)update;
-(void)setLandscape:(BOOL)arg1 ;
-(BOOL)landscape;
@end

