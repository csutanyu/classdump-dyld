/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GraphicsServices.framework/GraphicsServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <GraphicsServices/GraphicsServices-Structs.h>
@class NSData, NSCharacterSet;

@interface _UIFontExtraData : NSObject {

	NSData* _latin1MappingTable;
	NSCharacterSet* _coveredCharacterSet;
	float _ascender;
	float _descender;
	float _lineHeight;
	float _lineGap;
	struct {
		unsigned _initialized : 1;
		unsigned _isSystemFont : 1;
		unsigned _hasKernPair : 1;
		unsigned _checkedLatin1Table : 1;
		unsigned _isIBTextStyleFont : 1;
	}  _fFlags;

}
-(void)dealloc;
@end

