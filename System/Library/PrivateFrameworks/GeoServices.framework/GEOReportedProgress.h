/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSProgress, NSString;

@interface GEOReportedProgress : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSProgress* _progress;
	NSProgress* _internalProgress;
	/*^block*/id _cancellationHandler;

}

@property (copy) NSString * kind; 
@property (assign) long long totalUnitCount; 
@property (assign) long long completedUnitCount; 
@property (copy) id cancellationHandler; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (readonly) NSProgress * progress;                          //@synthesize progress=_progress - In the implementation block
+(id)progressWithTotalUnitCount:(long long)arg1 ;
-(void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2 ;
-(void)setKind:(NSString *)arg1 ;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(void)resignCurrent;
-(long long)totalUnitCount;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(long long)completedUnitCount;
-(id)initWithTotalUnitCount:(long long)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
-(NSProgress *)progress;
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(NSString *)kind;
@end
