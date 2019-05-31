/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/CLRegion.h>

@interface CLCircularRegion : CLRegion

@property (nonatomic,readonly) CLLocationCoordinate2D center; 
@property (nonatomic,readonly) double radius; 
+(BOOL)supportsSecureCoding;
-(BOOL)containsCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)initNearbyAllowedWithCenter:(CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(id)initWithCenter:(CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(CLLocationCoordinate2D)center;
-(double)radius;
@end

