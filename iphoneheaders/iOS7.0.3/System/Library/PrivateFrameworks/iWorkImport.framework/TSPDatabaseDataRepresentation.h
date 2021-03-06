/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/SFUDataRepresentation.h>

@class TSPDatabase;

@interface TSPDatabaseDataRepresentation : SFUDataRepresentation {

	TSPDatabase* _database;
	long long _identifier;

}
-(id)initWithDatabase:(id)arg1 identifier:(long long)arg2 ;
-(sqlite3_blobRef)_openBlob;
-(ZeroCopyInputStream*)createProtobufInputStream;
-(long long)dataLength;
-(id)inputStream;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(void).cxx_destruct;
@end

