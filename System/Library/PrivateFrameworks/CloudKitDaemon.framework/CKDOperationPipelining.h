/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CKDOperationPipelining <NSObject>
@property (nonatomic,readonly) NSString * pipeliningDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue; 
@required
-(void)setCallbackQueue:(id)arg1;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSString *)pipeliningDescription;

@end
