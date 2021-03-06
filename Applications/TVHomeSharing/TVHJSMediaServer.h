//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKJSObject.h"

#import "TVHJSMediaServer.h"

@class NSMutableArray, NSOperationQueue, NSString, TVHKMediaEntityServer;

@interface TVHJSMediaServer : IKJSObject <TVHJSMediaServer>
{
    TVHKMediaEntityServer *_mediaEntityServer;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    NSString *_connectionState;	// 32 = 0x20
    NSOperationQueue *_privateQueue;	// 40 = 0x28
    NSMutableArray *_contentsDidChangeCallbacks;	// 48 = 0x30
    NSMutableArray *_connectionStateDidChangeCallbacks;	// 56 = 0x38
}

@property(retain, nonatomic) NSMutableArray *connectionStateDidChangeCallbacks; // @synthesize connectionStateDidChangeCallbacks=_connectionStateDidChangeCallbacks;
@property(retain, nonatomic) NSMutableArray *contentsDidChangeCallbacks; // @synthesize contentsDidChangeCallbacks=_contentsDidChangeCallbacks;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(copy, nonatomic) NSString *connectionState; // @synthesize connectionState=_connectionState;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) TVHKMediaEntityServer *mediaEntityServer; // @synthesize mediaEntityServer=_mediaEntityServer;
- (void).cxx_destruct;	// IMP=0x00000001000301c4
- (void)_enqueueMediaEntityServerOperation:(id)arg1 javascriptCallback:(id)arg2 processingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010002fcb4
- (void)_notifyMediaServerContentsDidChange:(id)arg1;	// IMP=0x000000010002f9a8
- (void)_notifyMediaServerConnectionStateDidChangeFromState:(id)arg1 toState:(id)arg2;	// IMP=0x000000010002f630
- (void)_stopObservingMediaServer:(id)arg1;	// IMP=0x000000010002f558
- (void)_startObservingMediaServer:(id)arg1;	// IMP=0x000000010002f470
- (void)_handleMediaServerContentsDidChangeNotification:(id)arg1;	// IMP=0x000000010002f3ec
- (void)_handleMediaServerConntectionStateDidChangeNotification:(id)arg1;	// IMP=0x000000010002f10c
- (void)unregisterConnectionStateDidChangeCallback:(id)arg1;	// IMP=0x000000010002f09c
- (void)registerConnectionStateDidChangeCallback:(id)arg1;	// IMP=0x000000010002f02c
- (void)unregisterContentsDidChangeCallback:(id)arg1;	// IMP=0x000000010002efbc
- (void)registerContentsDidChangeCallback:(id)arg1;	// IMP=0x000000010002ef4c
- (id)enqueueFetchRequest:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x000000010002eca0
- (void)connect;	// IMP=0x000000010002ec60
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)dealloc;	// IMP=0x000000010002eb90
- (id)initWithMediaEntityServer:(id)arg1 appContent:(id)arg2;	// IMP=0x000000010002e948

@end

