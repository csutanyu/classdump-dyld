/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSTextTableBlock;

@interface NSTextBlockLayoutHelper : NSObject {

	NSTextTableBlock* _block;
	NSRange _charRange;
	NSRange _glyphRange;
	CGRect _layoutRect;
	CGRect _boundsRect;
	float _lMargin;
	float _lBorder;
	float _lPadding;
	float _tMargin;
	float _tBorder;
	float _tPadding;
	float _width;
	float _height;
	float _rPadding;
	float _rBorder;
	float _rMargin;
	float _bPadding;
	float _bBorder;
	float _bMargin;

}
-(void)dealloc;
-(id)description;
-(id)initWithTextBlock:(id)arg1 charRange:(NSRange)arg2 glyphRange:(NSRange)arg3 layoutRect:(CGRect)arg4 boundsRect:(CGRect)arg5 containerWidth:(float)arg6 allowMargins:(BOOL)arg7 collapseBorders:(BOOL)arg8 allowPadding:(BOOL)arg9 ;
-(id)initWithTextBlock:(id)arg1 charRange:(NSRange)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(float)arg5 collapseBorders:(BOOL)arg6 ;
-(id)initWithTextBlock:(id)arg1 charIndex:(unsigned)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(float)arg5 collapseBorders:(BOOL)arg6 ;
-(id)initWithTextTable:(id)arg1 charIndex:(unsigned)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(float)arg5 collapseBorders:(BOOL)arg6 ;
@end
