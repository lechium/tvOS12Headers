/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOCacheManaging <NSObject>
@required
-(void)versionsForDomains:(id)arg1 handler:(/*^block*/id)arg2;
-(void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(/*^block*/id)arg2;
-(void)snapshotWithFilePathArray:(id)arg1 handler:(/*^block*/id)arg2;
-(long long)invalidationStateForPlace:(id)arg1;
-(long long)invalidationStateForComponent:(id)arg1;

@end

