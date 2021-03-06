/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class WDParagraphProperties, WDCharacterProperties, WDTableRowProperties, WDTableCellProperties, WDTableStyleOverride, WDStyleSheet, NSString;

@interface WDStyle : NSObject <NSCopying> {

	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDTableRowProperties* mTableRowProperties;
	WDTableCellProperties* mTableCellProperties;
	WDTableStyleOverride* mTableStyleOverrides[12];
	WDStyleSheet* mStyleSheet;
	WDStyle* mBaseStyle;
	WDStyle* mNextStyle;
	BOOL mHidden;
	NSString* mName;
	NSString* mId;
	int mStyleType;

}
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)baseStyle;
-(id)id;
-(id)paragraphProperties;
-(id)characterProperties;
-(id)tableCellProperties;
-(id)tableProperties;
-(void)setBaseStyle:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)setNextStyle:(id)arg1 ;
-(id)tableRowProperties;
-(id)tableStyleOverrideForPart:(int)arg1 ;
-(id)initWithStyleSheet:(id)arg1 id:(id)arg2 type:(int)arg3 ;
-(id)nextStyle;
-(id)styleSheet;
-(BOOL)hidden;
@end

