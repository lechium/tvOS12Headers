/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFScheduler : NSObject
+(id)serialDispatchQueueSchedulerWithName:(id)arg1 ;
+(id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned long long)arg1 ;
+(id)_globalAsyncSchedulerWithQualityOfService:(long long)arg1 ;
+(id)globalAsyncSchedulerWithQualityOfService:(long long)arg1 ;
+(id)serialDispatchQueueSchedulerWithName:(id)arg1 qualityOfService:(long long)arg2 ;
+(id)mainThreadScheduler;
+(id)immediateScheduler;
+(id)globalAsyncScheduler;
@end

