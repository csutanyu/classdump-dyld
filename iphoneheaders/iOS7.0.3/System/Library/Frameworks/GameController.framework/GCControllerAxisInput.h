/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerElement.h>

@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement

@property (copy) id valueChangedHandler; 
@property (readonly) float value; 
@property (nonatomic,readonly) GCControllerButtonInput * positive; 
@property (nonatomic,readonly) GCControllerButtonInput * negative; 
@property (getter=isFlipped,nonatomic,readonly) BOOL flipped; 
@property (getter=isDigital,nonatomic,readonly) BOOL digital; 
-(BOOL)isAnalog;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(/*^block*/ id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/ id)arg1 ;
-(BOOL)isDigital;
-(id)positive;
-(id)negative;
-(id)description;
-(float)value;
-(BOOL)isFlipped;
-(BOOL)_setValue:(float)arg1 ;
@end
