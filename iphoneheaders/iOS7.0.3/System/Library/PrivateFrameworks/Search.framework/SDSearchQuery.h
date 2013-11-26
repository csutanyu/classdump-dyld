/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Search/SPSearchQuery.h>
#import <searchd/SPSearchResultsPipe.h>

@class SPXPCConnection, NSMutableDictionary;

@interface SDSearchQuery : SPSearchQuery <SPSearchResultsPipe> {

	SPXPCConnection* _connection;
	NSMutableDictionary* _serializers;
	unsigned _externalID;

}

@property (nonatomic,readonly) SPXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) unsigned externalID;                       //@synthesize externalID=_externalID - In the implementation block
-(void)sendError:(id)arg1 ;
-(void)sendQueryCompleted;
-(void)domainCompletedSearch:(unsigned)arg1 ;
-(void)storeCompletedSearch:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 forSearchDomains:(id)arg2 externalID:(unsigned)arg3 connection:(id)arg4 ;
-(void)sendResults:(id)arg1 ;
-(void)sendFinishedDomains;
-(id)serializerForDomain:(int)arg1 ;
-(void)dealloc;
-(id)connection;
-(unsigned)externalID;
-(void)appendSection:(id)arg1 toSerializerDomain:(unsigned)arg2 ;
-(void)queryFinishedWithError:(id)arg1 ;
-(void)appendResults:(id)arg1 toSerializerDomain:(unsigned)arg2 ;
-(void)appendResults:(id)arg1 ;
@end
