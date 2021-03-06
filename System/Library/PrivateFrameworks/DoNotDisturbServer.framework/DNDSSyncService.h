/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSSyncService <NSObject>
@required
-(void)addUpdateListener:(id)arg1;
-(void)removeUpdateListener:(id)arg1;
-(id)initWithRecordClass:(Class)arg1 versionNumber:(unsigned long long)arg2;
-(void)sendRecordToRemotes:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)resume;

@end

