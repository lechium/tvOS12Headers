/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOServiceRequestDefaultConfig.h>
#import <libobjc.A.dylib/GEOServiceRequestConfiguring.h>

@class NSNumber, NSString;

@interface GEODirectionsRequestConfig : GEOServiceRequestDefaultConfig <GEOServiceRequestConfiguring> {

	NSNumber* _requestPriority;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)urlType;
-(int)dataRequestKindForRequest:(id)arg1 ;
-(id)additionalURLQueryItems;
-(id)additionalHTTPHeaders;
-(id)serviceTypeNumber;
-(long long)experimentType;
-(unsigned char)requestCounterInfoTypeForRequest:(id)arg1 ;
-(id)initWithRequestPriority:(id)arg1 ;
@end

