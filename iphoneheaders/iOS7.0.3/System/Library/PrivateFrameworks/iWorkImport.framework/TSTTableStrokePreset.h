/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSSPreset.h>

@class NSString;

@interface TSTTableStrokePreset : TSPObject <TSSPreset> {

	unsigned mIndex;

}

@property (nonatomic,readonly) NSString * presetKind; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(TableStrokePresetArchive*)arg1 archiver:(id)arg2 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)presetKind;
-(BOOL)isThemeEquivalent:(id)arg1 ;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(unsigned)index;
-(void)setIndex:(unsigned)arg1 ;
@end
