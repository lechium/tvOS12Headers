/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NAFuture, NSMutableSet;

@interface HFHomeAppInstallController : NSObject {

	NAFuture* _activeHomeAppDownloadFuture;
	long long _lastReportedStatus;
	NSMutableSet* _statusUpdaters;

}

@property (nonatomic,retain) NAFuture * activeHomeAppDownloadFuture;              //@synthesize activeHomeAppDownloadFuture=_activeHomeAppDownloadFuture - In the implementation block
@property (assign,nonatomic) long long lastReportedStatus;                        //@synthesize lastReportedStatus=_lastReportedStatus - In the implementation block
@property (nonatomic,readonly) NSMutableSet * statusUpdaters;                     //@synthesize statusUpdaters=_statusUpdaters - In the implementation block
@property (nonatomic,readonly) long long status; 
+(id)sharedInstance;
-(BOOL)_isHomeAppInstalled;
-(long long)lastReportedStatus;
-(id)downloadHomeAppWithUpdateBlock:(/*^block*/id)arg1 ;
-(NAFuture *)activeHomeAppDownloadFuture;
-(void)setActiveHomeAppDownloadFuture:(NAFuture *)arg1 ;
-(void)setLastReportedStatus:(long long)arg1 ;
-(NSMutableSet *)statusUpdaters;
-(id)init;
-(long long)status;
@end

