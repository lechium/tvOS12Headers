/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/RTSourceCoreRoutine.h>

@class RTVehicleEvent;

@interface RTSourceCoreRoutineVehicleEvent : RTSourceCoreRoutine {

	RTVehicleEvent* _vehicleEvent;

}

@property (nonatomic,readonly) RTVehicleEvent * vehicleEvent;              //@synthesize vehicleEvent=_vehicleEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(RTVehicleEvent *)vehicleEvent;
-(id)initWithVehicleEvent:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

