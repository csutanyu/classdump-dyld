/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface MBDatabaseIndexEntry : NSObject {

	int _offset;
	unsigned _flags;

}

@property (assign,nonatomic) int offset;                  //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned flags;              //@synthesize flags=_flags - In the implementation block
-(id)initWithOffset:(int)arg1 flags:(unsigned)arg2 ;
-(id)description;
-(void)setOffset:(int)arg1 ;
-(int)offset;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
@end

