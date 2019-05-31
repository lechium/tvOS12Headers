//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVPhotoServiceInterface.h"

@class NSMutableArray, NSString;

@interface TVHScreenSaverProviderService : NSObject <TVPhotoServiceInterface>
{
    NSMutableArray *_inflightRequests;	// 8 = 0x8
    id <TVPhotoServerInterface> _remotePhotoServerInterface;	// 16 = 0x10
}

+ (id)_uniqueImageMediaEntities:(id)arg1;	// IMP=0x0000000100016478
+ (id)_photoAssetsFromMediaEntities:(id)arg1;	// IMP=0x0000000100015b8c
@property(retain, nonatomic) id <TVPhotoServerInterface> remotePhotoServerInterface; // @synthesize remotePhotoServerInterface=_remotePhotoServerInterface;
@property(retain, nonatomic) NSMutableArray *inflightRequests; // @synthesize inflightRequests=_inflightRequests;
- (void).cxx_destruct;	// IMP=0x00000001000166f8
- (void)registerRemotePhotoServer:(id)arg1;	// IMP=0x0000000100015b78
- (void)photoAssetsWithOptions:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100014fe8
- (id)init;	// IMP=0x0000000100014f68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

