/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSPredefinedValue.h>

@class NSString;

@interface ICSStatusValue : ICSPredefinedValue {

	NSString* _statusString;

}

@property (retain) NSString * statusString;              //@synthesize statusString=_statusString - In the implementation block
+(id)statusValueFromICSString:(id)arg1 ;
+(id)statusTypeFromCode:(int)arg1 statusString:(id)arg2 ;
+(id)statusTypeFromCode:(int)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)setStatusString:(NSString *)arg1 ;
-(NSString *)statusString;
@end

