/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface ContinuousReadingController : NSObject {

	BOOL _unreadReadingListItemsOnly;

}

@property (assign,nonatomic) BOOL unreadReadingListItemsOnly;              //@synthesize unreadReadingListItemsOnly=_unreadReadingListItemsOnly - In the implementation block
-(id)_currentReadingListItem;
-(id)_currentAutomaticReadingListItem;
-(id)_nextReadingListItem;
-(id)_nextAutomaticReadingListItem;
-(id)_tabDocument;
-(int)_currentReadingListItemIndex;
-(id)_readingListItemAtIndex:(unsigned)arg1 ;
-(int)_currentAutomaticReadingListItemIndexInItems:(id)arg1 ;
-(id)currentReadingListItem;
-(id)nextReadingListItem;
-(BOOL)unreadReadingListItemsOnly;
-(void)setUnreadReadingListItemsOnly:(BOOL)arg1 ;
@end
