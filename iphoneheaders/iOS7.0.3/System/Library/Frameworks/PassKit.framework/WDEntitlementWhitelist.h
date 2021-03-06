/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface WDEntitlementWhitelist : NSObject {

	BOOL _allAccess;
	BOOL _addSilently;
	NSArray* _teamIDs;
	NSArray* _passTypeIDs;

}

@property (assign) BOOL allAccess;                   //@synthesize allAccess=_allAccess - In the implementation block
@property (assign) BOOL addSilently;                 //@synthesize addSilently=_addSilently - In the implementation block
@property (copy) NSArray * teamIDs;                  //@synthesize teamIDs=_teamIDs - In the implementation block
@property (copy) NSArray * passTypeIDs;              //@synthesize passTypeIDs=_passTypeIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)allAccess;
-(BOOL)addSilently;
-(id)passTypeIDs;
-(id)teamIDs;
-(void)_probeEntitlementsWithConnection:(id)arg1 ;
-(void)setTeamIDs:(id)arg1 ;
-(void)setPassTypeIDs:(id)arg1 ;
-(void)setAllAccess:(BOOL)arg1 ;
-(void)setAddSilently:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithConnection:(id)arg1 ;
@end

