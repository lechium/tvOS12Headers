/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject, NSString, CUNANEndpoint;

@interface CUNANDataSession : NSObject {

	/*^block*/id _activateCompletion;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	unsigned _localInterfaceIndex;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _identifier;
	NSString* _label;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	CUNANEndpoint* _peerEndpoint;
	SCD_Union_CU20 _peerAddress;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) unsigned localInterfaceIndex;                          //@synthesize localInterfaceIndex=_localInterfaceIndex - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* peerAddress;                 //@synthesize peerAddress=_peerAddress - In the implementation block
@property (nonatomic,retain) CUNANEndpoint * peerEndpoint;                            //@synthesize peerEndpoint=_peerEndpoint - In the implementation block
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setPeerEndpoint:(CUNANEndpoint *)arg1 ;
-(unsigned)localInterfaceIndex;
-(/*function pointer*/void*)peerAddress;
-(CUNANEndpoint *)peerEndpoint;
-(void)_invalidated;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(id)description;
-(void)invalidate;
-(void)_invalidate;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
@end

