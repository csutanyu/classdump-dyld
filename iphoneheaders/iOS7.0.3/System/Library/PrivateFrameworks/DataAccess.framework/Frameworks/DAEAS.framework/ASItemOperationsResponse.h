/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSArray;

@interface ASItemOperationsResponse : ASItem {

	NSNumber* _status;
	NSArray* _fetchResponses;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)dealloc;
-(id)description;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(id)fetchResponses;
-(void)setFetchResponses:(id)arg1 ;
@end
