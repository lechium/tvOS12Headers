/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTSourceMapsSupport.h>

@class NSDate;

@interface RTSourceMapsSupportHistoryEntry : RTSourceMapsSupport {

	NSDate* _usageDate;

}

@property (nonatomic,readonly) NSDate * usageDate;              //@synthesize usageDate=_usageDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithUsageDate:(id)arg1 ;
-(NSDate *)usageDate;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

