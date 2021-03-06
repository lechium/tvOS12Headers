/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface MSPBTimerContext : NSObject {

	BOOL _isValid;
	NSDate* _date;

}

@property (assign,nonatomic) BOOL isValid;               //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)contextWithDate:(id)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(id)init;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)isValid;
@end

