/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <CoreImage/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputRadius;
	NSNumber* inputShadowAmount;
	NSNumber* inputHighlightAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputShadowAmount; 
@property (nonatomic,retain) NSNumber * inputHighlightAmount; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(BOOL)_isIdentity;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(void)setInputShadowAmount:(id)arg1 ;
-(void)setInputHighlightAmount:(id)arg1 ;
-(void)setInputRadius:(id)arg1 ;
-(id)_kernelSnoB;
-(id)_kernelS;
-(id)_kernelSH;
-(id)_kernelSHnoB_v1;
-(id)_kernelSH_v1;
-(id)inputRadius;
-(id)inputShadowAmount;
-(id)inputHighlightAmount;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
@end

