/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray;

@interface UIPDFHighlighter : NSObject {

	NSMutableArray* _highLightLayers;
	CGColorRef _highlightColor;
	CGColorRef _borderColor;
	CGColorRef _whiteColor;
	CGPDFPageRef _page;
	float _enlargeFactor;
	float _pdfToViewScale;
	float inset;

}

@property (assign,nonatomic) float inset; 
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setInset:(float)arg1 ;
-(id)init;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)clear;
-(void)addAnimation:(id)arg1 ;
-(float)inset;
-(void)addRectPath:(CGPathRef)arg1 toView:(id)arg2 layer:(id)arg3 rectangle:(SCD_Struct_UI5)arg4 upright:(BOOL)arg5 ;
-(void)makeTheClipPath:(id)arg1 layer:(id)arg2 rectangle:(SCD_Struct_UI5)arg3 upright:(BOOL)arg4 ;
-(void)makeTheBorderPath:(id)arg1 layer:(id)arg2 rectangle:(SCD_Struct_UI5)arg3 upright:(BOOL)arg4 ;
-(void)addHighlightLayerFor:(id)arg1 atIndex:(unsigned)arg2 to:(id)arg3 animated:(BOOL)arg4 ;
-(void)unhide;
-(void)addHighlightFor:(id)arg1 to:(id)arg2 animated:(BOOL)arg3 ;
@end
