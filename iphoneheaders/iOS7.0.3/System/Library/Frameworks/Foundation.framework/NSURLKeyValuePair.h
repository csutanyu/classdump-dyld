/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface NSURLKeyValuePair : NSObject {

	id key;
	id value;
	unsigned hash;

}
+(id)pairWithKey:(id)arg1 value:(id)arg2 ;
+(id)pair;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)key;
-(void)setKey:(id)arg1 ;
@end
