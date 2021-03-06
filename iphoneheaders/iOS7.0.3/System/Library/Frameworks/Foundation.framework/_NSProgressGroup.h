/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSProgress, NSMutableSet;

@interface _NSProgressGroup : NSObject {

	NSProgress* _parent;
	long long _portionOfParent;
	NSMutableSet* _children;
	double _fractionCompleted;
	unsigned long long _finishedChildrenCount;
	BOOL _closed;

}
-(long long)portionOfParent;
-(void)setPortionOfParent:(long long)arg1 ;
-(void)updateChild:(id)arg1 oldFractionCompleted:(double)arg2 newFractionCompleted:(double)arg3 finished:(BOOL)arg4 ;
-(double)fractionCompleted;
-(void)stopNotifications;
-(void)dealloc;
-(id)description;
-(void)close;
-(void)addChild:(id)arg1 ;
-(id)children;
-(id)initWithParent:(id)arg1 ;
-(id)parent;
@end

