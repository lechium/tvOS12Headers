/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface CLVehicleSpeed : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double speed; 
@property (nonatomic,readonly) NSDate * timestamp; 
+(BOOL)supportsSecureCoding;
-(id)initWithClientVehicleSpeed:(SCD_Struct_CL12)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)timestamp;
-(double)speed;
-(id)shortDescription;
@end

