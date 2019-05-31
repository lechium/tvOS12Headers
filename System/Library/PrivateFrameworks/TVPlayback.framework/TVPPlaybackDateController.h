/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, NSDateFormatter;

@interface TVPPlaybackDateController : NSObject {

	long long _dateStyle;
	NSDate* _date;
	NSString* _localizedString;
	NSDateFormatter* _dateFormatter;
	id _localeDidChangeObserver;
	id _timeZoneDidChangeObserver;

}

@property (nonatomic,copy) NSString * localizedString;                         //@synthesize localizedString=_localizedString - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                  //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (assign,nonatomic,__weak) id localeDidChangeObserver;                //@synthesize localeDidChangeObserver=_localeDidChangeObserver - In the implementation block
@property (assign,nonatomic,__weak) id timeZoneDidChangeObserver;              //@synthesize timeZoneDidChangeObserver=_timeZoneDidChangeObserver - In the implementation block
@property (assign,nonatomic) long long dateStyle;                              //@synthesize dateStyle=_dateStyle - In the implementation block
@property (nonatomic,copy) NSDate * date;                                      //@synthesize date=_date - In the implementation block
-(void)_updateLocalizedString;
-(long long)dateStyle;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)_removeObservers;
-(void)_configureDateFormatter:(id)arg1 forDateStyle:(long long)arg2 ;
-(void)_addObserversWithDateFormatter:(id)arg1 ;
-(void)setLocaleDidChangeObserver:(id)arg1 ;
-(void)setTimeZoneDidChangeObserver:(id)arg1 ;
-(id)localeDidChangeObserver;
-(id)timeZoneDidChangeObserver;
-(NSString *)localizedString;
-(void)setLocalizedString:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)setDateStyle:(long long)arg1 ;
@end

