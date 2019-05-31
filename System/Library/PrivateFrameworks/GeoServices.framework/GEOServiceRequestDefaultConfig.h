/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOServiceRequestConfiguring.h>

@class NSString;

@interface GEOServiceRequestDefaultConfig : NSObject <GEOServiceRequestConfiguring>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)urlType;
-(int)dataRequestKindForRequest:(id)arg1 ;
-(id)additionalURLQueryItems;
-(id)additionalHTTPHeaders;
-(id)debugRequestName;
-(id)serviceTypeNumber;
-(BOOL)shouldThrottleRequests;
-(id)throttleKey;
-(long long)experimentType;
-(int)experimentDispatcherRequestTypeForRequest:(id)arg1 ;
-(unsigned char)requestCounterInfoTypeForRequest:(id)arg1 ;
@end

