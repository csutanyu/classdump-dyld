/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface TSPReaderReferenceInfo : NSObject {

	long long _objectIdentifier;
	long long _componentIdentifier;

}

@property (nonatomic,readonly) long long objectIdentifier;                 //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) long long componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
+(id)newReferenceInfoWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 ;
-(long long)objectIdentifier;
-(long long)componentIdentifier;
-(id)initWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 ;
-(id)init;
@end

