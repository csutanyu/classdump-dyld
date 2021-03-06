/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface BBContent : NSObject <NSCopying, NSCoding> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _message;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * message;               //@synthesize message=_message - In the implementation block
+(id)contentWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)title;
-(id)message;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setMessage:(id)arg1 ;
-(BOOL)isEqualToContent:(id)arg1 ;
@end

