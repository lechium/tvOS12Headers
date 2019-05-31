//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSErrorHandlerDelegate.h"

@class NSMutableDictionary, NSString, SSErrorHandler;

@interface PBUserNotificationCenter : NSObject <SSErrorHandlerDelegate>
{
    _Bool _connected;	// 8 = 0x8
    id <PBUserNotificationDelegate> _delegate;	// 16 = 0x10
    SSErrorHandler *_errorHandler;	// 24 = 0x18
    NSMutableDictionary *_registeredOperationClasses;	// 32 = 0x20
}

+ (void)initializeNotificationCenterWithDelegate:(id)arg1;	// IMP=0x0000000100078454
+ (id)sharedInstance;	// IMP=0x0000000100078448
@property(retain, nonatomic) NSMutableDictionary *registeredOperationClasses; // @synthesize registeredOperationClasses=_registeredOperationClasses;
@property(getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(retain, nonatomic) SSErrorHandler *errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) __weak id <PBUserNotificationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010007a088
- (void)_handleCarMCheck:(id)arg1;	// IMP=0x0000000100079c80
- (void)_handle2SVCheck:(id)arg1;	// IMP=0x0000000100079928
- (void)_handleCVVCheck:(id)arg1;	// IMP=0x00000001000795a4
- (void)errorHandler:(id)arg1 handleSession:(id)arg2;	// IMP=0x0000000100079368
- (void)errorHandlerDidDisconnect:(id)arg1;	// IMP=0x0000000100079238
- (void)stopErrorHandler;	// IMP=0x00000001000790b8
- (void)startErrorHandler;	// IMP=0x0000000100078ea4
- (void)initializeStoreErrorHandler;	// IMP=0x0000000100078d54
- (void)registerOperationClass:(Class)arg1 forFailureType:(long long)arg2;	// IMP=0x0000000100078cc8
- (void)_didHandleCFUserNotification:(id)arg1;	// IMP=0x0000000100078ca0
- (id)cfUserNotificationForToken:(int)arg1;	// IMP=0x0000000100078b58
- (void)startUserNotificationCenter;	// IMP=0x00000001000785cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

