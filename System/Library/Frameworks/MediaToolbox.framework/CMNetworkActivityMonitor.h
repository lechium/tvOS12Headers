/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CMNetworkActivityObserver;

@interface CMNetworkActivityMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _networkIsActive;
	CMNetworkActivityObserver* _cmObserver;
	long long _showingNetworkActivityCount;
	long long _monitoringActiveCount;

}

@property (setter=setCMObserver:,nonatomic,retain) CMNetworkActivityObserver * cmObserver;              //@synthesize cmObserver=_cmObserver - In the implementation block
@property (assign,nonatomic) long long showingNetworkActivityCount;                                     //@synthesize showingNetworkActivityCount=_showingNetworkActivityCount - In the implementation block
@property (assign,nonatomic) long long monitoringActiveCount;                                           //@synthesize monitoringActiveCount=_monitoringActiveCount - In the implementation block
@property (assign,nonatomic) BOOL networkIsActive;                                                      //@synthesize networkIsActive=_networkIsActive - In the implementation block
+(id)sharedActivityMonitor;
-(void)setNetworkIsActive:(BOOL)arg1 ;
-(void)setCMObserver:(id)arg1 ;
-(long long)monitoringActiveCount;
-(void)setMonitoringActiveCount:(long long)arg1 ;
-(CMNetworkActivityObserver *)cmObserver;
-(void)beginMonitoring;
-(void)endMonitoring;
-(long long)showingNetworkActivityCount;
-(void)setShowingNetworkActivityCount:(long long)arg1 ;
-(BOOL)networkIsActive;
-(id)init;
-(void)dealloc;
@end

