/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol EKDayViewContentDelegate <NSObject>
@optional
-(void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;
-(void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;
-(void)occurrencePressed:(id)arg1 onDay:(double)arg2;

@required
-(void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;
-(void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;
@end
