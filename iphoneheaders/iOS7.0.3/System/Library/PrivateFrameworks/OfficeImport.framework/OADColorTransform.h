/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface OADColorTransform : NSObject <NSCopying> {

	int mType;

}
+(id)colorByApplyingTransforms:(id)arg1 toColor:(id)arg2 ;
+(float)alphaByApplyingTransforms:(id)arg1 toAlpha:(float)arg2 ;
+(float)applyAlphaTransform:(id)arg1 toAlpha:(float)arg2 ;
+(id)applyExpTransformWithValue:(float)arg1 toColor:(id)arg2 ;
+(id)applyRGBTransform:(id)arg1 toColor:(id)arg2 skipGamma:(bool)arg3 ;
+(id)applyHSLTransform:(id)arg1 toColor:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithType:(int)arg1 ;
@end
