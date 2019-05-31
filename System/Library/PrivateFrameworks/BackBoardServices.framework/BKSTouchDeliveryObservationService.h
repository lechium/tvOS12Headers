/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKSEventFocusManagerClientInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, BSMutableIntegerMap, NSMapTable, NSHashTable, NSString;

@interface BKSTouchDeliveryObservationService : NSObject <BKSEventFocusManagerClientInterface> {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _touchClientQueue;
	NSXPCConnection* _connection;
	BSMutableIntegerMap* _touchIdentifierToObserverLists;
	NSMapTable* _observersToTouchIdentifiers;
	NSHashTable* _generalObservers;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                      //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) BSMutableIntegerMap * touchIdentifierToObserverLists;              //@synthesize touchIdentifierToObserverLists=_touchIdentifierToObserverLists - In the implementation block
@property (nonatomic,retain) NSMapTable * observersToTouchIdentifiers;                          //@synthesize observersToTouchIdentifiers=_observersToTouchIdentifiers - In the implementation block
@property (nonatomic,retain) NSHashTable * generalObservers;                                    //@synthesize generalObservers=_generalObservers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_connectToTouchDeliveryService;
-(id)_observersForTouchIdentifier:(unsigned)arg1 ;
-(void)focusedDeferralPropertiesUpdatedWithProperties:(id)arg1 ;
-(void)touchUpOccuredForIdentifier:(unsigned)arg1 detached:(BOOL)arg2 context:(unsigned)arg3 pid:(int)arg4 ;
-(void)touchDetachedForIdentifier:(unsigned)arg1 context:(unsigned)arg2 pid:(int)arg3 ;
-(void)_removeObserversForTouchIdentifier:(unsigned)arg1 ;
-(BOOL)_addObserver:(id)arg1 forTouchIdentifier:(unsigned)arg2 ;
-(BOOL)_removeObserver:(id)arg1 forTouchIdentifier:(unsigned)arg2 ;
-(void)addObserver:(id)arg1 forTouchIdentifier:(unsigned)arg2 ;
-(BSMutableIntegerMap *)touchIdentifierToObserverLists;
-(void)setTouchIdentifierToObserverLists:(BSMutableIntegerMap *)arg1 ;
-(NSMapTable *)observersToTouchIdentifiers;
-(void)setObserversToTouchIdentifiers:(NSMapTable *)arg1 ;
-(NSHashTable *)generalObservers;
-(void)setGeneralObservers:(NSHashTable *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

