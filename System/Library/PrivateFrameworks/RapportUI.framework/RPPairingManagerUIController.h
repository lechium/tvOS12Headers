/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface RPPairingManagerUIController : NSObject {

	BOOL _allowManualIP;
	BOOL _runInProcess;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _serviceType;
	/*^block*/id _invalidationHandler;

}

@property (assign,nonatomic) BOOL allowManualIP;                                      //@synthesize allowManualIP=_allowManualIP - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL runInProcess;                                       //@synthesize runInProcess=_runInProcess - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(BOOL)allowManualIP;
-(void)setAllowManualIP:(BOOL)arg1 ;
-(BOOL)runInProcess;
-(void)setRunInProcess:(BOOL)arg1 ;
-(void)invalidate;
-(void)activate;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
@end

