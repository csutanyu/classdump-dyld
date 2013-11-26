/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPColumn : CPRegion {

	BOOL hasCentredParagraph;
	BOOL hasColumnBreak;
	float maxLeftPad;
	float maxRightPad;
	float maxRight;
	float minLeft;
	BOOL complete;

}

@property (assign) BOOL complete; 
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(BOOL)complete;
-(void)accept:(id)arg1 ;
-(CGRect)columnBounds;
-(float)leftPad;
-(float)rightPad;
-(float)selectionBottom;
-(void)setHasColumnBreak:(BOOL)arg1 ;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(float)bottomBaseline;
-(BOOL)hasCentredParagraph;
-(void)setHasCentredParagraph:(BOOL)arg1 ;
-(float)maxLeftPad;
-(void)setMaxLeftPad:(float)arg1 ;
-(float)maxRightPad;
-(void)setMaxRightPad:(float)arg1 ;
-(CGRect)paddedBounds;
-(int)outOrder;
-(int)inOrder;
@end
