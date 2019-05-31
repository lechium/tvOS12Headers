/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEODirectionsResponse, GEOETATrafficUpdateResponse;

@interface GEORouteInitializerData : NSObject <NSSecureCoding> {

	GEODirectionsResponse* _directionsResponse;
	GEOETATrafficUpdateResponse* _etaTrafficUpdateResponse;

}

@property (nonatomic,readonly) GEODirectionsResponse * directionsResponse; 
@property (nonatomic,readonly) GEOETATrafficUpdateResponse * etaTrafficUpdateResponse; 
+(BOOL)supportsSecureCoding;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(GEOETATrafficUpdateResponse *)etaTrafficUpdateResponse;
-(GEODirectionsResponse *)directionsResponse;
-(id)initWithETATrafficUpdateResponse:(id)arg1 ;
-(id)initWithDirectionsResponse:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

