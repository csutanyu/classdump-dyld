/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSDictionary;

@interface MFPColorAdjust : NSObject {

	MFPColorMatrix* mColorMatrix;
	MFPColorMatrix* mGrayMatrix;
	int mColorMatrixFlags;
	SCD_Struct_MF96 mTransparentRange;
	float mGamma;
	NSDictionary* mRecolorMap;
	float mThreshold;
	BOOL mEnabled;

}
-(void)dealloc;
-(id)init;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id).cxx_construct;
-(void)setThreshold:(float)arg1 ;
-(float)threshold;
-(MFPColorMatrix*)colorMatrix;
-(void)setColorMatrix:(MFPColorMatrix*)arg1 ;
-(MFPColorMatrix*)grayMatrix;
-(void)setGrayMatrix:(MFPColorMatrix*)arg1 ;
-(int)colorMatrixFlags;
-(void)setColorMatrixFlags:(int)arg1 ;
-(id)transparentLow;
-(id)transparentHigh;
-(void)setTransparentLow:(id)arg1 high:(id)arg2 ;
-(float)gamma;
-(void)setGamma:(float)arg1 ;
-(id)recolorMap;
-(void)setRecolorMap:(id)arg1 ;
@end

