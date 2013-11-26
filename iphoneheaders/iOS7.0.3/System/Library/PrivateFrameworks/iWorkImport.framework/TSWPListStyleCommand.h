/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSWPTextCommand.h>

@class TSWPListStyle, TSSPropertyMap;

@interface TSWPListStyleCommand : TSWPTextCommand {

	TSWPListStyle* _listStyle;
	TSSPropertyMap* _propertyMap;

}
-(id)initWithStorage:(id)arg1 selection:(id)arg2 listStyle:(id)arg3 ;
-(void)doCommit;
-(int)persistenceKind;
-(void)doUndoRedo;
-(id)initWithStorage:(id)arg1 selection:(id)arg2 listStyle:(id)arg3 createVariationUsingPropertyMap:(id)arg4 ;
-(void)dealloc;
-(id)actionString;
@end
