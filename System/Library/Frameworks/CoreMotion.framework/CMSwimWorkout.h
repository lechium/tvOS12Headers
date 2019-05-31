/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMWorkout.h>

@interface CMSwimWorkout : CMWorkout {

	long long fLocation;
	double fPoolLength;

}

@property (nonatomic,readonly) long long location; 
@property (nonatomic,readonly) double poolLength; 
+(id)swimLocationName:(long long)arg1 ;
+(id)swimWorkoutInstance:(id)arg1 ;
+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
-(double)poolLength;
-(id)initWithSessionId:(id)arg1 locationType:(long long)arg2 poolLength:(double)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(id)initWithSessionId:(id)arg1 location:(long long)arg2 poolLength:(double)arg3 ;
-(id)initWithSessionId:(id)arg1 locationType:(long long)arg2 poolLength:(double)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)location;
@end

