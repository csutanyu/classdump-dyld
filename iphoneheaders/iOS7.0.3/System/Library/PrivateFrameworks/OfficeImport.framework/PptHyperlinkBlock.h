/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ESDContainer, ESDObject;

@interface PptHyperlinkBlock : NSObject {

	ESDContainer* mInteractiveInfoContainerHolder;
	ESDObject* mTxInteractiveInfoAtomHolder;

}
-(PptTxInteracInfoAtom*)txtInteractiveInfoAtom;
-(id)interactiveInfoContainerHolder;
-(void)setInteractiveInfoContainerHolder:(id)arg1 ;
-(void)setTxInteractiveInfoAtomHolder:(id)arg1 ;
@end

