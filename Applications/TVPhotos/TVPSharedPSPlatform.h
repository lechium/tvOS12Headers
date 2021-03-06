//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSASPlatform.h"

@class NSString;

@interface TVPSharedPSPlatform : NSObject <MSASPlatform>
{
}

- (_Bool)shouldEnableNewFeatures;	// IMP=0x0000000100095440
- (_Bool)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;	// IMP=0x0000000100095438
- (_Bool)MSASIsAllowedToUploadAssets;	// IMP=0x0000000100095430
- (_Bool)MSASIsAllowedToTransferMetadata;	// IMP=0x0000000100095428
- (id)personIDsEnabledForAlbumSharing;	// IMP=0x0000000100095364
- (_Bool)personIDEnabledForAlbumSharing:(id)arg1;	// IMP=0x000000010009529c
- (id)pushTokenForPersonID:(id)arg1;	// IMP=0x0000000100095210
- (_Bool)personIDUsesProductionPushEnvironment:(id)arg1;	// IMP=0x00000001000950cc
- (id)baseSharingURLForPersonID:(id)arg1;	// IMP=0x0000000100094f38
- (Class)pluginClass;	// IMP=0x0000000100094f24
- (id)pathAlbumSharingDir;	// IMP=0x0000000100094db8
- (id)albumSharingDaemon;	// IMP=0x0000000100094d38
- (void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;	// IMP=0x0000000100094d34
- (_Bool)shouldLogAtLevel:(int)arg1;	// IMP=0x0000000100094d2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

