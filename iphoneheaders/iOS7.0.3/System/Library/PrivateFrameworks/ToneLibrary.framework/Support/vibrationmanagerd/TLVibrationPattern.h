/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/Support/vibrationmanagerd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface TLVibrationPattern : NSObject {

	id _contextObject;
	id _propertyListRepresentation;
	id _complexPatternDescription;
	double _duration;

}

@property (nonatomic,readonly) id propertyListRepresentation; 
@property (readonly) double computedDuration; 
@property (nonatomic,retain) id contextObject;                                                                   //@synthesize contextObject=_contextObject - In the implementation block
@property (readonly) id _artificiallyRepeatingPropertyListRepresentation; 
@property (assign,setter=_setDuration:,nonatomic) double _duration;                                              //@synthesize duration=_duration - In the implementation block
@property (setter=_setPropertyListRepresentation:,nonatomic,retain) id _propertyListRepresentation;              //@synthesize propertyListRepresentation=_propertyListRepresentation - In the implementation block
@property (setter=_setComplexPatternDescription:,nonatomic,retain) id _complexPatternDescription;                //@synthesize complexPatternDescription=_complexPatternDescription - In the implementation block
+(id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2 ;
+(id)noneVibrationPattern;
+(BOOL)isValidVibrationPatternPropertyListRepresentation:(id)arg1 ;
+(id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(double)_duration;
-(void)_setDuration:(double)arg1 ;
-(id)propertyListRepresentation;
-(void)appendVibrationComponentWithDuration:(double)arg1 isPause:(BOOL)arg2 ;
-(id)contextObject;
-(void)setContextObject:(id)arg1 ;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(double)computedDuration;
-(id)_artificiallyRepeatingPropertyListRepresentation;
-(id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(BOOL)arg2 ;
-(void)_setPropertyListRepresentation:(id)arg1 ;
-(void)_setComplexPatternDescription:(id)arg1 ;
-(id)_propertyListRepresentation;
-(id)_complexPatternDescription;
@end

