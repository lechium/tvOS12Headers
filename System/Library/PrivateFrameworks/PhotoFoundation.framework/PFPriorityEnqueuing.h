/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFPriorityEnqueuing
@required
-(unsigned long long)schedulingLimitForPriorityLevel:(unsigned long long)arg1;
-(void)resumeScheduling;
-(void)enqueueWithPriority:(unsigned long long)arg1 qos:(unsigned)arg2 block:(/*^block*/id)arg3;
-(void)enqueueWithPriority:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(void)enqueueEmptyNotification:(/*^block*/id)arg1;
-(void)suspendScheduling;

@end

