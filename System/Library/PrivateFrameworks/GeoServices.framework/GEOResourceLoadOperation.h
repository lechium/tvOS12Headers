/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol GEOResourceLoadOperation <NSObject,NSProgressReporting>
@property (assign,nonatomic) BOOL requiresWiFi; 
@property (nonatomic,readonly) NSData * data; 
@required
-(void)setRequiresWiFi:(BOOL)arg1;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2;
-(id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURL:(id)arg4 proxyURL:(id)arg5;
-(BOOL)requiresWiFi;
-(void)cancel;
-(NSData *)data;

@end

