/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WeatherView.h>
#import <Weather/HourlyScrollerBeltDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class WAWeatherCardView, UIView, UILabel, UITapGestureRecognizer, HourlyScrollerBeltView, NSMutableArray, NSDateFormatter;

@interface WAWeatherCityView : WeatherView <HourlyScrollerBeltDelegate, UIGestureRecognizerDelegate> {

	float _panOffset;
	BOOL _isTallCell;
	BOOL _showsExpanedDetail;
	BOOL _isTallDevice;
	int _mode;
	float _transitionProgress;
	WAWeatherCardView* _cardView;
	UIView* _cardMaskView;
	UIView* _pageView;
	UIView* _pageUpperView;
	UIView* _pageBottomView;
	UILabel* _pageCityName;
	UILabel* _pageConditionDescription;
	UILabel* _pageTemperature;
	UILabel* _pageDayName;
	UILabel* _pageDayDescription;
	UILabel* _pageHighTemperature;
	UILabel* _pageLowTemperature;
	UITapGestureRecognizer* _detailedConditionsRecognizer;
	UILabel* _humidityTitle;
	UILabel* _humidity;
	UILabel* _chanceOfRainTitle;
	UILabel* _chanceOfRain;
	UILabel* _windTitle;
	UILabel* _windDirection;
	UILabel* _wind;
	UILabel* _otherConditionIndexTitle;
	UILabel* _otherConditionIndex;
	UIView* _textTreatmentView;
	HourlyScrollerBeltView* _hourlyBelt;
	NSMutableArray* _dayForecastViews;
	int _graphicQuality;
	NSDateFormatter* _dateFormatter;

}

@property (assign,nonatomic) int mode;                                                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float transitionProgress;                                           //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (assign,nonatomic) BOOL isTallCell;                                                    //@synthesize isTallCell=_isTallCell - In the implementation block
@property (nonatomic,retain) WAWeatherCardView * cardView;                                       //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) UIView * cardMaskView;                                              //@synthesize cardMaskView=_cardMaskView - In the implementation block
@property (nonatomic,retain) UIView * pageView;                                                  //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,retain) UIView * pageUpperView;                                             //@synthesize pageUpperView=_pageUpperView - In the implementation block
@property (nonatomic,retain) UIView * pageBottomView;                                            //@synthesize pageBottomView=_pageBottomView - In the implementation block
@property (nonatomic,retain) UILabel * pageCityName;                                             //@synthesize pageCityName=_pageCityName - In the implementation block
@property (nonatomic,retain) UILabel * pageConditionDescription;                                 //@synthesize pageConditionDescription=_pageConditionDescription - In the implementation block
@property (nonatomic,retain) UILabel * pageTemperature;                                          //@synthesize pageTemperature=_pageTemperature - In the implementation block
@property (nonatomic,retain) UILabel * pageDayName;                                              //@synthesize pageDayName=_pageDayName - In the implementation block
@property (nonatomic,retain) UILabel * pageDayDescription;                                       //@synthesize pageDayDescription=_pageDayDescription - In the implementation block
@property (nonatomic,retain) UILabel * pageHighTemperature;                                      //@synthesize pageHighTemperature=_pageHighTemperature - In the implementation block
@property (nonatomic,retain) UILabel * pageLowTemperature;                                       //@synthesize pageLowTemperature=_pageLowTemperature - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * detailedConditionsRecognizer;              //@synthesize detailedConditionsRecognizer=_detailedConditionsRecognizer - In the implementation block
@property (assign,nonatomic) BOOL showsExpanedDetail;                                            //@synthesize showsExpanedDetail=_showsExpanedDetail - In the implementation block
@property (nonatomic,retain) UILabel * humidityTitle;                                            //@synthesize humidityTitle=_humidityTitle - In the implementation block
@property (nonatomic,retain) UILabel * humidity;                                                 //@synthesize humidity=_humidity - In the implementation block
@property (nonatomic,retain) UILabel * chanceOfRainTitle;                                        //@synthesize chanceOfRainTitle=_chanceOfRainTitle - In the implementation block
@property (nonatomic,retain) UILabel * chanceOfRain;                                             //@synthesize chanceOfRain=_chanceOfRain - In the implementation block
@property (nonatomic,retain) UILabel * windTitle;                                                //@synthesize windTitle=_windTitle - In the implementation block
@property (nonatomic,retain) UILabel * windDirection;                                            //@synthesize windDirection=_windDirection - In the implementation block
@property (nonatomic,retain) UILabel * wind;                                                     //@synthesize wind=_wind - In the implementation block
@property (nonatomic,retain) UILabel * otherConditionIndexTitle;                                 //@synthesize otherConditionIndexTitle=_otherConditionIndexTitle - In the implementation block
@property (nonatomic,retain) UILabel * otherConditionIndex;                                      //@synthesize otherConditionIndex=_otherConditionIndex - In the implementation block
@property (nonatomic,retain) UIView * textTreatmentView;                                         //@synthesize textTreatmentView=_textTreatmentView - In the implementation block
@property (nonatomic,retain) HourlyScrollerBeltView * hourlyBelt;                                //@synthesize hourlyBelt=_hourlyBelt - In the implementation block
@property (nonatomic,retain) NSMutableArray * dayForecastViews;                                  //@synthesize dayForecastViews=_dayForecastViews - In the implementation block
@property (assign,nonatomic) BOOL isTallDevice;                                                  //@synthesize isTallDevice=_isTallDevice - In the implementation block
@property (assign,nonatomic) int graphicQuality;                                                 //@synthesize graphicQuality=_graphicQuality - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                                    //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(void)didEndScrolling;
-(void)setDateFormatter:(id)arg1 ;
-(BOOL)isTallDevice;
-(void)setIsTallCell:(BOOL)arg1 ;
-(void)setStaggerOffset:(float)arg1 ;
-(void)tappedCity:(id)arg1 ;
-(void)_forceWeatherDescription:(id)arg1 ;
-(void)updateTimeUI;
-(void)cleanupTextTreatmentView;
-(id)newTextTreatmentViewForCondition:(int)arg1 ;
-(void)setWindWithSpeed:(float)arg1 ;
-(id)cardinalDirectionStringForIndex:(int)arg1 ;
-(BOOL)isLongStringLanguage;
-(void)toggleExtended;
-(void)setPanOffset:(float)arg1 ;
-(void)_createCardModeViews;
-(void)_createPageModeViews;
-(id)currentTemperature;
-(int)currentHourIndex;
-(int)currentCondition;
-(int)numberOfHours;
-(void)didBeginScrolling;
-(void)_removeCardModeViews;
-(void)_removePageModeViews;
-(void)prepareForResuse;
-(BOOL)isTallCell;
-(id)cardView;
-(void)setCardView:(id)arg1 ;
-(id)cardMaskView;
-(void)setCardMaskView:(id)arg1 ;
-(id)pageUpperView;
-(void)setPageUpperView:(id)arg1 ;
-(id)pageBottomView;
-(void)setPageBottomView:(id)arg1 ;
-(id)pageCityName;
-(void)setPageCityName:(id)arg1 ;
-(id)pageConditionDescription;
-(void)setPageConditionDescription:(id)arg1 ;
-(id)pageTemperature;
-(void)setPageTemperature:(id)arg1 ;
-(id)pageDayName;
-(void)setPageDayName:(id)arg1 ;
-(id)pageDayDescription;
-(void)setPageDayDescription:(id)arg1 ;
-(id)pageHighTemperature;
-(void)setPageHighTemperature:(id)arg1 ;
-(id)pageLowTemperature;
-(void)setPageLowTemperature:(id)arg1 ;
-(id)detailedConditionsRecognizer;
-(void)setDetailedConditionsRecognizer:(id)arg1 ;
-(BOOL)showsExpanedDetail;
-(void)setShowsExpanedDetail:(BOOL)arg1 ;
-(id)humidityTitle;
-(void)setHumidityTitle:(id)arg1 ;
-(id)chanceOfRainTitle;
-(void)setChanceOfRainTitle:(id)arg1 ;
-(id)chanceOfRain;
-(void)setChanceOfRain:(id)arg1 ;
-(id)windTitle;
-(void)setWindTitle:(id)arg1 ;
-(id)wind;
-(void)setWind:(id)arg1 ;
-(id)otherConditionIndexTitle;
-(void)setOtherConditionIndexTitle:(id)arg1 ;
-(id)otherConditionIndex;
-(void)setOtherConditionIndex:(id)arg1 ;
-(id)textTreatmentView;
-(void)setTextTreatmentView:(id)arg1 ;
-(id)hourlyBelt;
-(void)setHourlyBelt:(id)arg1 ;
-(id)dayForecastViews;
-(void)setDayForecastViews:(id)arg1 ;
-(void)setIsTallDevice:(BOOL)arg1 ;
-(int)graphicQuality;
-(void)setGraphicQuality:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)pageView;
-(void)setTransitionProgress:(float)arg1 ;
-(float)transitionProgress;
-(void)updateUI:(BOOL)arg1 ;
-(void)setPageView:(id)arg1 ;
-(id)hourlyForecasts;
-(id)windDirection;
-(void)setWindDirection:(id)arg1 ;
-(id)dateFormatter;
-(id)humidity;
-(void)cityDidStartWeatherUpdate:(id)arg1 ;
-(unsigned)observationTime;
-(unsigned)sunsetTime;
-(unsigned)sunriseTime;
-(BOOL)isCelsius;
-(BOOL)isDay;
-(void)setHumidity:(id)arg1 ;
-(void)showCity:(id)arg1 ;
-(BOOL)updateWeatherDisplayForCity:(id)arg1 ;
-(void)refreshLocalization;
@end

