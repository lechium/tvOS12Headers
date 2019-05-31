//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSPlatform.h"
#import "TVPDaemonDelegate.h"

@class NSString;

@interface TVPMyPSPlatform : NSObject <TVPDaemonDelegate, MSPlatform>
{
}

- (void)mediaStreamDaemonAuthFailed:(id)arg1 personID:(id)arg2;	// IMP=0x0000000100059e74
- (void)mediaStreamDaemonDidUnidle:(id)arg1;	// IMP=0x0000000100059e70
- (void)mediaStreamDaemonDidIdle:(id)arg1;	// IMP=0x0000000100059e6c
- (id)theDaemon;	// IMP=0x0000000100059d88
- (id)authTokenForPersonID:(id)arg1;	// IMP=0x0000000100059c98
- (id)baseURLForPersonID:(id)arg1;	// IMP=0x0000000100059b3c
- (_Bool)shouldEnableNewFeatures;	// IMP=0x0000000100059b34
- (id)contentURLForPersonID:(id)arg1;	// IMP=0x00000001000599b0
- (id)pushTokenForPersonID:(id)arg1;	// IMP=0x00000001000597b8
- (id)socketOptions;	// IMP=0x00000001000597b0
- (_Bool)policyMaySendDelete;	// IMP=0x00000001000597a8
- (_Bool)policyMayDownload;	// IMP=0x00000001000597a0
- (_Bool)policyMayUpload;	// IMP=0x0000000100059798
- (id)appBundleInfoString;	// IMP=0x00000001000596c8
- (id)OSString;	// IMP=0x00000001000595a8
- (id)hardwareString;	// IMP=0x000000010005957c
- (id)UDID;	// IMP=0x0000000100059484
- (Class)deletePluginClass;	// IMP=0x0000000100059470
- (Class)sharingPluginClass;	// IMP=0x0000000100059468
- (Class)subscriberPluginClass;	// IMP=0x0000000100059454
- (Class)publisherPluginClass;	// IMP=0x000000010005944c
- (id)pathMediaStreamDir;	// IMP=0x00000001000592e0
- (id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;	// IMP=0x00000001000592d8
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(char *)arg7;	// IMP=0x00000001000592d4
- (void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(char *)arg4;	// IMP=0x00000001000592d0
- (_Bool)shouldLogAtLevel:(int)arg1;	// IMP=0x00000001000592c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

