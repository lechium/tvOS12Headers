/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class CADisplay, NSObject, BSAtomicSignal, FBSDisplayMonitor, FBSDisplayConfiguration, NSString;

@interface FBSDisplaySource : NSObject <BSInvalidatable, BSDescriptionProviding> {

	CADisplay* _display;
	BOOL _isMain;
	unsigned _displayID;
	unsigned _instanceID;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	BOOL _observing;
	BOOL _initialized;
	BSAtomicSignal* _invalidated;
	os_unfair_lock_s _lock;
	FBSDisplayMonitor* _lock_monitor;
	FBSDisplayConfiguration* _lock_configuration;
	int _lock_attachment;
	unsigned _lock_debounceToken;
	FBSDisplayConfiguration* _lock_reportedConfiguration;
	os_unfair_lock_s _externallyVisibleLock;
	int _evlock_attachment;
	FBSDisplayConfiguration* _evlock_configuration;
	FBSDisplayConfiguration* _evlock_reportedConfiguration;

}

@property (nonatomic,readonly) unsigned displayID;                                                 //@synthesize displayID=_displayID - In the implementation block
@property (nonatomic,copy,readonly) FBSDisplayConfiguration * connectedConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMainDisplay:(id)arg1 monitor:(id)arg2 ;
-(id)initWithNonMainDisplay:(id)arg1 monitor:(id)arg2 ;
-(FBSDisplayConfiguration *)connectedConfiguration;
-(id)_initWithDisplay:(id)arg1 monitor:(id)arg2 isMain:(BOOL)arg3 ;
-(void)_lock_update;
-(void)_lock_setConfiguration:(id)arg1 ;
-(void)_lock_noteConnected;
-(void)_lock_noteUpdated;
-(void)_lock_noteDisconnecting;
-(void)_lock_setAttachment:(int)arg1 ;
-(id)_lock_setReportedConfiguration:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned)displayID;
@end

