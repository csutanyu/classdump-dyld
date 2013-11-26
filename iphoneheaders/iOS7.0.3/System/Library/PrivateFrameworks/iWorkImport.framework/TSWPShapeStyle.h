/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSSPreset.h>

@class NSString;

@interface TSWPShapeStyle : <TSDShapeStyle : TSSStyle : TSPObject> = {
  516 fill
  517 stroke
  518 opacity
  519 reflection
  520 shadow
} <TSSPreset>

@property (nonatomic,readonly) NSString * presetKind; 
+(id)presetStyleDescriptor;
+(id)defaultValueForProperty:(int)arg1 ;
+(int)defaultIntValueForProperty:(int)arg1 ;
+(id)propertiesAllowingNSNull;
+(id)layoutProperties;
+(void)loadShapeStyleLayoutPropertiesIntoPropertyMap:(id)arg1 fromArchive:(const ShapeStylePropertiesArchive*)arg2 unarchiver:(id)arg3 ;
+(void)saveShapeStyleLayoutPropertyMap:(id)arg1 toArchive:(ShapeStylePropertiesArchive*)arg2 archiver:(id)arg3 ;
+(id)properties;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ShapeStyleArchive*)arg1 archiver:(id)arg2 ;
-(id)presetKind;
-(SEL)mapThemePropertyMapSelector;
-(const ShapeStyleArchive*)shapeStyleArchiveFromUnarchiver:(id)arg1 ;
-(id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(CGAffineTransform)arg3 ;
-(id)defaultParagraphStyle;
-(void)setDefaultParagraphStyle:(id)arg1 ;
@end
