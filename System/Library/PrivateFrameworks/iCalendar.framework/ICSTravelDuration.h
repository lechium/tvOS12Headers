/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString, ICSDuration;

@interface ICSTravelDuration : ICSProperty

@property (nonatomic,retain) NSString * transparency; 
@property (nonatomic,retain) ICSDuration * duration; 
-(BOOL)alwaysHasParametersToSerialize;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3 ;
-(void)setTransparency:(NSString *)arg1 ;
-(NSString *)transparency;
-(void)setDuration:(ICSDuration *)arg1 ;
-(ICSDuration *)duration;
@end

