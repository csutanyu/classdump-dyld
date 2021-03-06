/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufWifi.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufWifi.dylib/libAWDProtobufWifi.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDWifiHardwareVersion : PBCodable {

	unsigned long long _timestamp;
	NSString* _hardwareVersion;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasHardwareVersion; 
@property (nonatomic,retain) NSString * hardwareVersion;                //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHardwareVersion:(id)arg1 ;
-(id)hardwareVersion;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasHardwareVersion;
@end

