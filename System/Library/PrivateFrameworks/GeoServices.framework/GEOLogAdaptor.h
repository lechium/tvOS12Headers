/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOLogAdaptor <NSObject>
@optional
-(void)registerLogMsgState:(id)arg1;
-(void)unregisterLogMsgStateOfType:(int)arg1;
-(void)updateAdaptorPolicyConfiguration:(id)arg1;
-(void)forceFlushLogs;
-(void)adaptorWillGetAdded:(id)arg1;
-(void)adaptorDidGetAdded:(id)arg1;
-(void)adaptorWillGetRemoved:(id)arg1;
-(void)adaptorDidGetRemoved:(id)arg1;

@required
-(void)queueLogMessage:(id)arg1;
-(BOOL)isLogFrameworkAdaptor;
-(void)flushLogs;
-(BOOL)acceptsLogMessageOfType:(int)arg1;
-(id)adaptorQueue;

@end
