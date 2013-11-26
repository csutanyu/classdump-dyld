/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <Foundation/NSOperation.h>

@protocol TSSPreset;
@class UIView, NSObject, TSKDocumentRoot, NSString;

@interface TSDSwatchRenderingOperation : NSOperation {

	UIView* mView;
	NSObject<TSSPreset>* mPreset;
	CGSize mImageSize;
	float mImageScale;
	CGRect mSwatchFrame;
	TSKDocumentRoot* mDocumentRoot;
	CGImageRef mDeliveredImage;
	unsigned mInsertPopoverPageType;
	unsigned mInsertPopoverPageNumber;
	NSString* mIdentifier;

}

@property (retain) UIView * view; 
@property (readonly) NSObject<TSSPreset> * preset; 
@property (readonly) CGSize imageSize; 
@property (readonly) float imageScale; 
@property (readonly) CGRect swatchFrame; 
@property (assign) unsigned insertPopoverPageType; 
@property (assign) unsigned insertPopoverPageNumber; 
@property (copy) NSString * identifier; 
@property (nonatomic,readonly) CGImageRef deliveredImage; 
-(id)preset;
-(UIEdgeInsets)swatchEdgeInsets;
-(BOOL)needsPressedStateBackground;
-(void)p_animateSwatchIn;
-(CGImageRef)p_newSwatchPressedStateBackgroundFromCGImage:(CGImageRef)arg1 ;
-(void)p_deliverResultOnMainThread:(id)arg1 ;
-(void)doWorkWithReadLock;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(float)arg3 swatchFrame:(CGRect)arg4 documentRoot:(id)arg5 ;
-(void)deliverCGImage:(CGImageRef)arg1 ;
-(CGImageRef)deliveredImage;
-(CGRect)swatchFrame;
-(unsigned)insertPopoverPageType;
-(void)setInsertPopoverPageType:(unsigned)arg1 ;
-(unsigned)insertPopoverPageNumber;
-(void)setInsertPopoverPageNumber:(unsigned)arg1 ;
-(void)dealloc;
-(id)view;
-(void)setView:(id)arg1 ;
-(CGSize)imageSize;
-(id)identifier;
-(void)main;
-(void)setIdentifier:(id)arg1 ;
-(float)imageScale;
@end
