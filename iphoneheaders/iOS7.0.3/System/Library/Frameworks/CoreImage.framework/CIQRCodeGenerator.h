/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSString;

@interface CIQRCodeGenerator : CICodeGenerator {

	NSString* inputCorrectionLevel;

}

@property (nonatomic,copy) NSString * inputCorrectionLevel; 
+(id)customAttributes;
-(void)setDefaults;
-(CGImageRef)outputCGImage;
-(void)setInputCorrectionLevel:(id)arg1 ;
-(id)inputCorrectionLevel;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

