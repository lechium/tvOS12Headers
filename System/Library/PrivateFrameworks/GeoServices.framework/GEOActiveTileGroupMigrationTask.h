/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOActiveTileGroupMigrationTask <NSProgressReporting>
@property (readonly) long long estimatedWeight; 
@property (nonatomic,retain) id<NSObject> transaction; 
@optional
-(id)stateWithHints:(os_state_hints_s*)arg1;

@required
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2;
-(void)populateTileGroup:(id)arg1;
-(void)removeOldData:(id)arg1;
-(long long)estimatedWeight;
-(id<NSObject>)transaction;
-(void)setTransaction:(id)arg1;
-(void)cancel;

@end

